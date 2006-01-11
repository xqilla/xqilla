/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

#include <xqilla/xqts/TestSuiteResultListener.hpp>
#include <xqilla/xqts/TestSuiteParser.hpp>

#include <iostream>
#include <fstream>
#include <time.h>

#include <xercesc/parsers/SAXParser.hpp>
#include <xercesc/sax/AttributeList.hpp>
#include <xercesc/framework/LocalFileInputSource.hpp>

#include <xqilla/utils/XStr.hpp>
#include <xqilla/utils/UTF8Str.hpp>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif
using namespace std;

KnownErrorChecker::KnownErrorChecker(TestSuiteResultListener *results)
  : results_(results)
{
}

void KnownErrorChecker::startTestGroup(const std::string &name)
{
  results_->startTestGroup(name);
}

void KnownErrorChecker::endTestGroup()
{
  results_->endTestGroup();
}

void KnownErrorChecker::reportPass(const TestCase &testCase)
{
  map<string, Error>::iterator i = errors_.find(testCase.name);
  if(i != errors_.end()) {
    nowPass_.push_back(testCase.name);
    errors_.erase(i);
  }

  results_->reportPass(testCase);
}

void KnownErrorChecker::reportInspect(const TestCase &testCase, const string &actualResult,
                                      const string &expectedResult)
{
  map<string, Error>::iterator i = errors_.find(testCase.name);
  if(i != errors_.end()) {
    if(i->second.action == "skip") {
      results_->reportSkip(testCase, i->second.comment);
      return;
    }
    else if(i->second.action == "pass") {
      results_->reportPass(testCase);
      return;
    }
  }
  errors_[testCase.name].reason = "inspect";

  results_->reportInspect(testCase, actualResult, expectedResult);
}

void KnownErrorChecker::reportSkip(const TestCase &testCase, const std::string &comment)
{
  results_->reportSkip(testCase, comment);
}

void KnownErrorChecker::reportFail(const TestCase &testCase, const string &actualResult,
                                   const string &expectedResult)
{
  map<string, Error>::iterator i = errors_.find(testCase.name);
  if(i == errors_.end()) {
    nowFail_.push_back(testCase.name);
  }
  else if(i->second.action == "skip") {
    results_->reportSkip(testCase, i->second.comment);
    return;
  }
  errors_[testCase.name].reason = "result failure";

  results_->reportFail(testCase, actualResult, expectedResult);
}

void KnownErrorChecker::reportFailNoError(const TestCase &testCase, const string &actualResult)
{
  map<string, Error>::iterator i = errors_.find(testCase.name);
  if(i == errors_.end()) {
    nowFail_.push_back(testCase.name);
  }
  else if(i->second.action == "skip") {
    results_->reportSkip(testCase, i->second.comment);
    return;
  }
  errors_[testCase.name].reason = "no error failure";

  results_->reportFailNoError(testCase, actualResult);
}

void KnownErrorChecker::reportFailUnexpectedError(const TestCase &testCase, const string &unexpectedError)
{
  map<string, Error>::iterator i = errors_.find(testCase.name);
  if(i == errors_.end()) {
    nowFail_.push_back(testCase.name);
  }
  else if(i->second.action == "skip") {
    results_->reportSkip(testCase, i->second.comment);
    return;
  }
  errors_[testCase.name].reason = "error failure";

  results_->reportFailUnexpectedError(testCase, unexpectedError);
}

bool KnownErrorChecker::printReport() const
{
  if(!nowFail_.empty() || !nowPass_.empty()) {
    cout << "************************************************************************" << endl;
    if(!nowFail_.empty()) {
      cout << nowFail_.size() << " unexpected failures:" << endl;
      for(vector<string>::const_iterator i = nowFail_.begin(); i != nowFail_.end(); ++i) {
        cout << "\t" << *i << endl;
      }
    }

    if(!nowPass_.empty()) {
      cout << nowPass_.size() << " unexpected passes:" << endl;
      for(vector<string>::const_iterator j = nowPass_.begin(); j != nowPass_.end(); ++j) {
        cout << "\t" << *j << endl;
      }
    }
  }

  return nowFail_.empty();
}

class ErrorFileHandler : public XERCES_CPP_NAMESPACE_QUALIFIER HandlerBase
{
public:
  ErrorFileHandler(map<string, KnownErrorChecker::Error> &errors)
    : errors_(errors) {}

  virtual void startElement(const XMLCh* const name, AttributeList &attributes)
  {
    string szName = UTF8(name);
    if(szName == "error") {
      KnownErrorChecker::Error &error = errors_[UTF8(attributes.getValue("id"))];
      error.reason = UTF8(attributes.getValue("reason"));
      error.comment = UTF8(attributes.getValue("comment"));
      error.action = UTF8(attributes.getValue("action"));
    }
  }

private:
  map<string, KnownErrorChecker::Error> &errors_;
};


bool KnownErrorChecker::loadErrors(const std::string &errorFile)
{
  try {
    SAXParser parser;
    ErrorFileHandler handler(errors_);
    parser.setDocumentHandler(&handler);
    LocalFileInputSource is(X(errorFile.c_str()));
    parser.parse(is);
  }
  catch(const XMLException& e) {
    cout << "Error while reading error file: " << UTF8(e.getMessage()) << endl;
    return false;
  }

  return true;
}

bool KnownErrorChecker::saveErrors(const std::string &errorFile) const
{
  ofstream file(errorFile.c_str());
  if(!file.is_open()) return false;

  file << "<errors>" << endl;

  for(map<string, Error>::const_iterator i = errors_.begin();
      i != errors_.end(); ++i) {
    file << "  <error id=\"" << i->first
         << "\" reason=\"" << i->second.reason << "\"";

    if(i->second.action != "")
      file << " action=\"" << i->second.action << "\"";

    if(i->second.comment != "")
      file << " comment=\"" << i->second.comment << "\"";

    file << "/>" << endl;
  }

  file << "</errors>" << endl;

  file.close();

  return true;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

ConsoleResultListener::ConsoleResultListener()
  : m_nTotalTests(0),
    m_nPassedTests(0),
    m_nSkippedTests(0),
    m_nInspectTests(0),
    testDepth_(0),
    needNewline_(false)
{
}

void ConsoleResultListener::startTestGroup(const string &name)
{
  if(needNewline_) cout << endl;

  string indent(testDepth_ * 2, ' ');
  cout << indent << name << ": " << flush;
  ++testDepth_;
  needNewline_ = true;

  if(m_szFullTestName != "")
    m_szFullTestName += ":";
  m_szFullTestName += name;
}

void ConsoleResultListener::endTestGroup()
{
  if(needNewline_) cout << endl;
  --testDepth_;
  needNewline_ = false;

  int nColonPos = m_szFullTestName.find_last_of(":");
  if(nColonPos != -1)
    m_szFullTestName = string(m_szFullTestName.c_str(), nColonPos);
  else
    m_szFullTestName = "";
}

void ConsoleResultListener::reportPass(const TestCase &testCase)
{
  ++m_nTotalTests;
  ++m_nPassedTests;

  cout << "." << flush;
}

void ConsoleResultListener::reportInspect(const TestCase &testCase, const string &actualResult,
                                          const string &expectedResult)
{
  ++m_nTotalTests;
  ++m_nInspectTests;

  cout << "," << flush;

  errorStream_ << "************************************************************************" << endl;
  errorStream_ << "* For inspection:" << endl;
  testCaseToErrorStream(testCase);
  errorStream_ << "********** Actual result: **********" << endl;
  errorStream_ << actualResult << endl;;
  errorStream_ << endl;
  errorStream_ << "********** Expected result: **********" << endl;;
  errorStream_ << expectedResult << endl;
  errorStream_ << endl;
}

void ConsoleResultListener::reportSkip(const TestCase &testCase, const std::string &comment)
{
  ++m_nTotalTests;
  ++m_nSkippedTests;

  cout << "^" << flush;
}

void ConsoleResultListener::reportFail(const TestCase &testCase, const string &actualResult,
                                       const string &expectedResult)
{
  ++m_nTotalTests;

  cout << "!" << flush;

  errorStream_ << "************************************************************************" << endl;
  testCaseToErrorStream(testCase);
  errorStream_ << "********** Actual result: **********" << endl;
  errorStream_ << actualResult << endl;;
  errorStream_ << endl;
  errorStream_ << "********** Expected result: **********" << endl;;
  errorStream_ << expectedResult << endl;
  errorStream_ << endl;
}

void ConsoleResultListener::reportFailNoError(const TestCase &testCase, const string &actualResult)
{
  ++m_nTotalTests;

  cout << "!" << flush;

  errorStream_ << "************************************************************************" << endl;
  testCaseToErrorStream(testCase);
  errorStream_ << "********** Actual result: **********" << endl;
  errorStream_ << actualResult << endl;;
  errorStream_ << endl;
}

void ConsoleResultListener::reportFailUnexpectedError(const TestCase &testCase, const string &unexpectedError)
{
  ++m_nTotalTests;

  cout << "!" << flush;

  errorStream_ << "************************************************************************" << endl;
  testCaseToErrorStream(testCase);
  errorStream_ << "********** Actual error: **********" << endl;
  errorStream_ << unexpectedError << endl;;
  errorStream_ << endl;
}

bool ConsoleResultListener::printReport() const
{
  cout << "************************************************************************" << endl;
  cout << m_nTotalTests << " Tests, "
       << m_nPassedTests << " passed, "
       << (m_nTotalTests - m_nPassedTests - m_nSkippedTests - m_nInspectTests) << " failed, "
       << m_nSkippedTests << " skipped, "
       << m_nInspectTests << " for inspection";
  cout << " (" << ((float)m_nPassedTests)/(m_nTotalTests-m_nSkippedTests-m_nInspectTests)*100 << "%)" << endl;

  cerr << errorStream_.str();

  return (m_nTotalTests - m_nPassedTests - m_nSkippedTests - m_nInspectTests) == 0;
}

void ConsoleResultListener::testCaseToErrorStream(const TestCase &testCase)
{
  errorStream_ << "* Test-case '" << m_szFullTestName << ":" << testCase.name << "':" << endl;
  errorStream_ << "* Query URL: " << testCase.queryURL << endl;

  for(std::map<std::string, std::string>::const_iterator i = testCase.inputVars.begin();
      i != testCase.inputVars.end(); ++i) {
    errorStream_ << "* Input: " << i->first << " -> " << i->second << endl;
  }

  for(std::map<std::string, std::string>::const_iterator j = testCase.outputFiles.begin();
      j != testCase.outputFiles.end(); ++j) {
    errorStream_ << "* Output: " << j->second << " -> " << j->first << endl;
  }

  if(!testCase.expectedErrors.empty()) {
    errorStream_ << "* Errors:";
    for(std::list<std::string>::const_iterator k = testCase.expectedErrors.begin();
        k != testCase.expectedErrors.end(); ++k) {
      errorStream_ << " " << *k;
    }
    errorStream_ << endl;
  }

  errorStream_ << endl;
  errorStream_ << "********** Query: **********" << endl;
  errorStream_ << testCase.query << endl;
  errorStream_ << endl;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

XMLReportResultListener::XMLReportResultListener()
{
}

void XMLReportResultListener::startTestGroup(const std::string &name)
{
}

void XMLReportResultListener::endTestGroup()
{
}

void XMLReportResultListener::reportPass(const TestCase &testCase)
{
  outputStream_ << "  <test-case";
  outputStream_ << " name=\"" << testCase.name << "\"";
  outputStream_ << " result=\"pass\"";
  outputStream_ << "/>" << endl;
}

void XMLReportResultListener::reportInspect(const TestCase &testCase, const std::string &actualResult,
                                            const std::string &expectedResult)
{
  outputStream_ << "  <test-case";
  outputStream_ << " name=\"" << testCase.name << "\"";
  outputStream_ << " result=\"cannot tell\"";
  outputStream_ << " comment=\"result has not been inspected\"";
  outputStream_ << "/>" << endl;
}

void XMLReportResultListener::reportSkip(const TestCase &testCase, const std::string &comment)
{
  outputStream_ << "  <test-case";
  outputStream_ << " name=\"" << testCase.name << "\"";
  outputStream_ << " result=\"not applicable\"";
  if(comment != "")
    outputStream_ << " comment=\"" << comment << "\"";
  outputStream_ << "/>" << endl;
}

void XMLReportResultListener::reportFail(const TestCase &testCase, const std::string &actualResult,
                                         const std::string &expectedResult)
{
  outputStream_ << "  <test-case";
  outputStream_ << " name=\"" << testCase.name << "\"";
  outputStream_ << " result=\"fail\"";
  outputStream_ << "/>" << endl;
}

void XMLReportResultListener::reportFailNoError(const TestCase &testCase, const std::string &actualResult)
{
  outputStream_ << "  <test-case";
  outputStream_ << " name=\"" << testCase.name << "\"";
  outputStream_ << " result=\"fail\"";
  outputStream_ << "/>" << endl;
}

void XMLReportResultListener::reportFailUnexpectedError(const TestCase &testCase, const std::string &unexpectedError)
{
  outputStream_ << "  <test-case";
  outputStream_ << " name=\"" << testCase.name << "\"";
  outputStream_ << " result=\"fail\"";
  outputStream_ << "/>" << endl;
}

void XMLReportResultListener::setImplementation(const std::string &name, const std::string &version, const std::string &description)
{
  implName_ = name;
  implVersion_ = version;
  implDescription_ = description;
}

void XMLReportResultListener::setOrganization(const std::string &name, const std::string &website)
{
  orgName_ = name;
  orgWebsite_ = website;
}

void XMLReportResultListener::setSubmittor(const std::string &name, const std::string &email)
{
  submittorName_ = name;
  submittorEmail_ = email;
}

void XMLReportResultListener::setTestRun(const std::string &transformation, const std::string &comments)
{
  testTransformation_ = transformation;
  testComments_ = comments;
}

void XMLReportResultListener::addImplementationDefinedItem(const std::string &name, const std::string &value)
{
  implDefinedItems_[name] = value;
}

void XMLReportResultListener::addFeature(const std::string &name, bool supported)
{
  features_[name] = supported;
}

void XMLReportResultListener::addContextProperty(const std::string &name, const std::string &contextType, const std::string &value)
{
  contextProperties_[name].first = contextType;
  contextProperties_[name].second = value;
}

void XMLReportResultListener::printReport() const
{
  cout << "<test-suite-result xmlns=\"http://www.w3.org/2005/02/query-test-XQTSResult\">" << endl;
  cout << endl;
  cout << "  <implementation name=\"" << implName_ << "\"";
  if(implVersion_ != "")
    cout << " version=\"" << implVersion_ << "\"";
  cout << ">" << endl;
  cout << endl;
  cout << "    <organization name=\"" << orgName_ << "\"";
  if(orgWebsite_ != "")
    cout << " website=\"" << orgWebsite_ << "\"";
  cout << "/>" << endl;
  cout << endl;
  cout << "    <submittor name=\"" << submittorName_ << "\"";
  if(submittorEmail_ != "")
    cout << " email=\"" << submittorEmail_ << "\"";
  cout << "/>" << endl;
  cout << endl;
  if(implDescription_ != "") {
    cout << "    <description>" << implDescription_ << "</description>" << endl;
    cout << endl;
  }

  if(!implDefinedItems_.empty()) {
    cout << "    <implementation-defined-items>" << endl;
    for(map<string, string>::const_iterator i = implDefinedItems_.begin(); i != implDefinedItems_.end(); ++i) {
      cout << "      <implementation-defined-item name=\"" << i->first << "\" value=\"" << i->second << "\"/>" << endl;
    }
    cout << "    </implementation-defined-items>" << endl;
    cout << endl;
  }

  if(!features_.empty()) {
    cout << "    <features>" << endl;
    for(map<string, bool>::const_iterator i = features_.begin(); i != features_.end(); ++i) {
      cout << "      <feature name=\"" << i->first << "\" supported=\"" << (i->second ? "true" : "false") << "\"/>" << endl;
    }
    cout << "    </features>" << endl;
    cout << endl;
  }

  if(!contextProperties_.empty()) {
    cout << "    <context-properties>" << endl;
    for(map<string, pair<string, string> >::const_iterator i = contextProperties_.begin(); i != contextProperties_.end(); ++i) {
      cout << "      <context-property name=\"" << i->first << "\" context-type=\"" << i->second.first << "\" value=\"" << i->second.second << "\"/>" << endl;
    }
    cout << "    </context-properties>" << endl;
    cout << endl;
  }

  cout << "  </implementation>" << endl;
  cout << endl;
  cout << "  <syntax>XQuery</syntax>" << endl;
  cout << endl;

  time_t currentTime = ::time(0);
  struct tm *curLocalDate = ::localtime(&currentTime);
  char szDate[256];
  snprintf(szDate, 256,"%04d-%02d-%02d",curLocalDate->tm_year+1900, curLocalDate->tm_mon+1, curLocalDate->tm_mday);

  cout << "  <test-run dateRun=\"" << szDate << "\">" << endl;
  cout << "    <test-suite version=\"0.8.4\"/>" << endl;
  if(testTransformation_ != "")
    cout << "    <transformation>" << testTransformation_ << "</transformation>" << endl;
  cout << "    <comparison><p>XML and fragment comparisons are performed by serializing the results,";
  cout << " re-parsing them, and using a custom deep-equal like function. This function currently ignores";
  cout << " any text nodes that consist entirely of whitespace.</p></comparison>" << endl;
  if(testComments_ != "")
    cout << "    <otherComments>" << testComments_ << "</otherComments>" << endl;
  cout << "  </test-run>" << endl;
  cout << endl;
  cout << outputStream_.str();
  cout << endl;
  cout << "</test-suite-result>" << endl;
}
