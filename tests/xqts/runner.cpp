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

#ifdef _MSC_VER
#pragma warning(disable: 4786)
#endif

#include <xqilla/xqts/TestSuiteParser.hpp>
#include <xqilla/xqts/TestSuiteResultListener.hpp>
#include <xqilla/xqts/TestSuiteRunner.hpp>

#include <iostream>

#include <xercesc/framework/URLInputSource.hpp>
#include <xercesc/util/XMLEntityResolver.hpp>
#include <xercesc/framework/MemBufFormatTarget.hpp>
#include <xercesc/dom/DOMException.hpp>

#include <xqilla/xqilla-simple.hpp>
#include <xqilla/context/VariableStore.hpp>
#include <xqilla/functions/FunctionConstructor.hpp>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif
using namespace std;

class XQillaTestSuiteRunner : public TestSuiteRunner, private XMLEntityResolver
{
public:
  XQillaTestSuiteRunner(const string &singleTest, TestSuiteResultListener *results);

  virtual void addSource(const string &id, const string &filename, const string &schema);
  virtual void addSchema(const string &id, const string &filename, const string &uri);

  virtual void startTestGroup(const string &name);
  virtual void endTestGroup();

  virtual void runTestCase(const TestCase &testCase);

private:
  virtual InputSource* resolveEntity(XMLResourceIdentifier* resourceIdentifier);

private:
  string m_szSingleTest;
  string m_szFullTestName;

  // id -> filename
  map<string, string> m_inputFiles;
  // schemaURL -> filename
  map<string, string> m_schemaFiles;
};

void usage(const char *progname)
{
  const char *name = progname;
  while(*progname != 0) {
    if(*progname == '/' || *progname == '\\') {
      ++progname;
      name = progname;
    } else {
      ++progname;
    }
  }

  cout << "Usage: " << name << " [options] <location of the XQTS suite> (<test group or case name>)?" << endl << endl;
  cout << "-e <file>      : Use the given file as a known error file" << endl;
  cout << "-E <file>      : Output an error file" << endl;
  cout << "-h             : Show this display" << endl;
  cout << "-x             : Output results as XML" << endl;
}

int main(int argc, char *argv[])
{
  string testSuitePath;
  string singleTest;
  string errorFile;
  string outputErrorFile;
  bool xmlResults = false;

  for(int i = 1; i < argc; ++i) {
    if(*argv[i] == '-' && argv[i][2] == '\0' ){

      switch(argv[i][1]) {
      case 'h': {
        usage(argv[0]);
        return 0;
      }
      case 'e': {
        i++;
        if(i == argc) {
          cout << "Missing argument to option 'e'" << endl;
          return 1;
        }
        errorFile = argv[i];
        break;
      }
      case 'E': {
        i++;
        if(i == argc) {
          cout << "Missing argument to option 'E'" << endl;
          return 1;
        }
        outputErrorFile = argv[i];
        break;
      }
      case 'x': {
        xmlResults = true;
        break;
      }
      default: {
        cout << "Unknown option: " << argv[i] << endl;
        usage(argv[0]);
        return 1;
      }
      }
    }
    else if(testSuitePath == "") {
      testSuitePath = argv[i];
    }
    else if(singleTest == "") {
      singleTest = argv[i];
    }
    else {
      usage(argv[0]);
      return 1;
    }
  }

  if(testSuitePath == "") {
    cout << "Test suite path not specified!" << endl;
    usage(argv[0]);
    return 1;
  }

  XQilla xqilla;

  Janitor<TestSuiteResultListener> results(0);
  if(xmlResults) {
    results.reset(new XMLReportResultListener());
    XMLReportResultListener *xmlreport = (XMLReportResultListener*)results.get();
    xmlreport->setImplementation("XQilla", "1.0");
    xmlreport->setOrganization("XQilla", "http://xqilla.sourceforge.net");

    xmlreport->addImplementationDefinedItem("expressionUnicode", "UTF-16");
    xmlreport->addImplementationDefinedItem("implicitTimezone", "Defined by the system clock");
    xmlreport->addImplementationDefinedItem("XMLVersion", "1.1");
    xmlreport->addImplementationDefinedItem("axes", "Full axis support");
    xmlreport->addImplementationDefinedItem("defaultOrderEmpty", "empty least");
    xmlreport->addImplementationDefinedItem("normalizationForms", "NFC, NFD, NFKC, NFKD");
    xmlreport->addImplementationDefinedItem("docProcessing", "schema validation");

    xmlreport->addFeature("Minimal Conformance", true);
    xmlreport->addFeature("Schema Import", true);
    xmlreport->addFeature("Schema Validation", true);
    xmlreport->addFeature("Static Typing", false);
    xmlreport->addFeature("Static Typing Extensions", false);
    xmlreport->addFeature("Full Axis", true);
    xmlreport->addFeature("Module", true);
    xmlreport->addFeature("Serialization", false);
    xmlreport->addFeature("Trivial XML Embedding", false);
  }
  else {
    results.reset(new ConsoleResultListener());
  }

  KnownErrorChecker knownErrors(results.get());
  if(errorFile != "" && !knownErrors.loadErrors(errorFile)) {
    return 1;
  }

  XQillaTestSuiteRunner runner(singleTest, &knownErrors);
  TestSuiteParser parser(testSuitePath, &runner);

  parser.run();

  bool passed = true;
  if(xmlResults) {
    ((XMLReportResultListener*)results.get())->printReport();
  }
  else {
    passed = ((ConsoleResultListener*)results.get())->printReport();
  }

  if(errorFile != "") {
    passed = knownErrors.printReport();
  }

  if(outputErrorFile != "" && !knownErrors.saveErrors(outputErrorFile)) {
    cout << "Unable to open error file: " << outputErrorFile << endl;
    return 1;
  }

  return passed ? 0 : 1;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

string serializeXMLResults(const Sequence &result, const DynamicContext *context);

XQillaTestSuiteRunner::XQillaTestSuiteRunner(const string &singleTest, TestSuiteResultListener *results)
  : TestSuiteRunner(results),
    m_szSingleTest(singleTest)
{
}

void XQillaTestSuiteRunner::startTestGroup(const string &name)
{
  if(m_szFullTestName != "")
    m_szFullTestName += ":";
  m_szFullTestName += name;

  m_results->startTestGroup(name);
}

void XQillaTestSuiteRunner::endTestGroup()
{
  int nColonPos = m_szFullTestName.find_last_of(":");
  if(nColonPos != -1)
    m_szFullTestName = string(m_szFullTestName.c_str(), nColonPos);
  else
    m_szFullTestName = "";

  m_results->endTestGroup();
}

void XQillaTestSuiteRunner::addSource(const string &id, const string &filename, const string &schema)
{
  m_inputFiles[id] = filename;
}

void XQillaTestSuiteRunner::addSchema(const string &id, const string &filename, const string &uri)
{
  m_schemaFiles[uri] = filename;
}

void XQillaTestSuiteRunner::runTestCase(const TestCase &testCase)
{
  if(m_szSingleTest != "" && testCase.name != m_szSingleTest &&
     m_szFullTestName.find(m_szSingleTest) == string::npos) {
    m_results->reportSkip(testCase, "Not run");
    return;
  }

  if(m_szFullTestName.substr(0,21)=="Optional:StaticTyping") {
    m_results->reportSkip(testCase, "Static typing not supported");
    return;
  }

  XQilla xqilla;

  Janitor<DynamicContext> context(xqilla.createContext());
  try {
    context->setBaseURI(X(testCase.queryURL.c_str()));
    context->setImplicitTimezone(context->getItemFactory()->
                                 createDurationOrDerived(FunctionConstructor::XMLChXPath2DatatypesURI,
                                                         ATDurationOrDerived::fgDT_DAYTIMEDURATION,
                                                         X("PT0S"), context.get()));
    context->setXMLEntityResolver(this);

    XQQuery* pParsedQuery = xqilla.parse(X(testCase.query.c_str()), XQilla::XQUERY, context.get(), X(testCase.queryURL.c_str()));

    for(map<string, string>::const_iterator v=testCase.inputVars.begin();v!=testCase.inputVars.end();v++) {
      Sequence doc=context->resolveDocument(X(m_inputFiles[v->second].c_str()));
      context->getVariableStore()->setGlobalVar(X(v->first.c_str()),doc,context.get());
    }
    context->setContextPosition(1);
    context->setContextSize(1);
    time_t curTime;
    context->setCurrentTime(time(&curTime));

    Sequence result=pParsedQuery->execute(context.get())->toSequence(context.get());

    testResults(testCase, serializeXMLResults(result, context.get()));
  }
  catch(XQException& e) {
    testErrors(testCase, UTF8(e.getError()));
  }
  catch(DOMException &de) {
    testErrors(testCase, string("DOMException: ") + UTF8(de.getMessage()));
  }
  catch(...) {
    testErrors(testCase, "[Unknown exception]");
  }
}

InputSource* XQillaTestSuiteRunner::resolveEntity(XMLResourceIdentifier* resourceIdentifier)
{
    const XMLCh* systemId=resourceIdentifier->getSystemId();
    if((systemId==NULL || *systemId==0) && 
       resourceIdentifier->getResourceIdentifierType()==XMLResourceIdentifier::SchemaGrammar) {
	    
      map<string, string>::const_iterator i =
        m_schemaFiles.find(UTF8(resourceIdentifier->getNameSpace()));
      if(i != m_schemaFiles.end()) {
        return new URLInputSource(X(i->second.c_str()));
      }
    }
    return NULL;
}

string serializeXMLResults(const Sequence &result, const DynamicContext *context) {
  MemBufFormatTarget strTarget;
  {
    XMLFormatter formatter("UTF-16", "1.0", &strTarget);
    for(unsigned int i=0;i<result.getLength();i++) {
      const Item* item=result.item(i);
      if(i>0 && !item->isNode() && !result.item(i-1)->isNode())
        formatter << X(" ");
      if(item->isNode())
        formatter << XMLFormatter::NoEscapes;
      else
        formatter << XMLFormatter::CharEscapes;
      formatter << item->asString(context);
    }
  }
  return UTF8((XMLCh*)strTarget.getRawBuffer());
}
