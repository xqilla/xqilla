/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2006
 *     Parthenon Computing Ltd. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
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

int main(int argc, char *argv[])
{
  // First we parse the command line arguments
  if(argc<2) {
    cerr << "Usage: " << argv[0] << " <location of the XQTS suite>" << endl;
    return 1;
  }

  XQilla xqilla;
  ConsoleResultListener results;
  XQillaTestSuiteRunner runner((argc > 2 ? argv[2] : ""), &results);
  TestSuiteParser parser(argv[1], &runner);

  parser.run();
  results.printReport();

  return 0;
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
    m_results->reportSkip(testCase);
    return;
  }

  if(m_szFullTestName.substr(0,21)=="Optional:StaticTyping") {
    m_results->reportSkip(testCase);
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

    XQQuery* pParsedQuery=xqilla.parseXQuery(X(testCase.query.c_str()), context.get(), X(testCase.queryURL.c_str()));

    for(map<string, string>::const_iterator v=testCase.inputVars.begin();v!=testCase.inputVars.end();v++) {
      Sequence doc=context->resolveDocument(X(m_inputFiles[v->second].c_str()));
      context->getVariableStore()->setGlobalVar(X(v->first.c_str()),doc,context.get());
    }
    context->setContextPosition(1);
    context->setContextSize(1);
    time_t curTime;
    context->setCurrentTime(time(&curTime));

    Sequence result=pParsedQuery->execute(context.get());

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
