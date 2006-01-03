/*
 * Copyright (c) 2001-2005
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2005
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2005
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2005
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

#include "TestSuiteParser.hpp"
#include "TestSuiteResultListener.hpp"
#include "TestSuiteRunner.hpp"

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
  XQillaTestSuiteRunner(const std::string &singleTest, TestSuiteResultListener *results);

  virtual void addSource(const std::string &id, const std::string &filename, const std::string &schema);
  virtual void addSchema(const std::string &id, const std::string &filename, const std::string &uri);

  virtual void startTestGroup(const std::string &name);
  virtual void endTestGroup();

  virtual void runTestCase(const std::string &name, const std::string &queryURL, const std::map<std::string, std::string> &inputVars,
                           const std::map<std::string, std::string> &outputFiles, const std::list<std::string> &expectedErrors);

private:
  virtual InputSource* resolveEntity(XMLResourceIdentifier* resourceIdentifier);

private:
  std::string m_szSingleTest;
  std::string m_szFullTestName;

  // id -> filename
  std::map<std::string, std::string> m_inputFiles;
  // schemaURL -> filename
  std::map<std::string, std::string> m_schemaFiles;
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

string serializeTextResults(const Sequence &result, const DynamicContext *context);
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

void XQillaTestSuiteRunner::runTestCase(const string &name, const string &queryURL, const map<string, string> &inputVars,
                                  const map<string, string> &outputFiles, const list<string> &expectedErrors)
{
  if(m_szSingleTest != "" && name != m_szSingleTest &&
     m_szFullTestName.find(m_szSingleTest) == string::npos) {
    m_results->reportSkip(name);
    return;
  }

  if(m_szFullTestName.substr(0,21)=="Optional:StaticTyping") {
    m_results->reportSkip(name);
    return;
  }

  XQilla xqilla;

  Janitor<DynamicContext> context(xqilla.createContext());
  try {
    context->setBaseURI(X(queryURL.c_str()));
    context->setImplicitTimezone(context->getItemFactory()->createDurationOrDerived(FunctionConstructor::XMLChXPath2DatatypesURI, ATDurationOrDerived::fgDT_DAYTIMEDURATION, X("PT0S"), context.get()));
    context->setXMLEntityResolver(this);

    XQQuery* pParsedQuery=xqilla.parseXQueryFromURI(X(queryURL.c_str()), context.get());

    for(map<string, string>::const_iterator v=inputVars.begin();v!=inputVars.end();v++) {
      Sequence doc=context->resolveDocument(X(m_inputFiles[v->second].c_str()));
      context->getVariableStore()->setGlobalVar(X(v->first.c_str()),doc,context.get());
    }
		context->setContextPosition(1);
		context->setContextSize(1);
		time_t curTime;
		context->setCurrentTime(time(&curTime));

    Sequence result=pParsedQuery->execute(context.get());

    testResults(name, outputFiles, expectedErrors, serializeTextResults(result, context.get()),
                serializeXMLResults(result, context.get()));
  }
  catch(XQException& e) {
    testErrors(name, expectedErrors, UTF8(e.getError()));
	}
  catch(DOMException &de) {
    testErrors(name, expectedErrors, string("DOMException: ") + UTF8(de.getMessage()));
  }
	catch(...) {
    testErrors(name, expectedErrors, "[Unknown exception]");
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

string serializeTextResults(const Sequence &result, const DynamicContext *context) {
  MemBufFormatTarget strTarget;
  {
    XMLFormatter formatter("UTF-16", "1.0", &strTarget, XMLFormatter::CharEscapes);
    for(unsigned int i=0;i<result.getLength();i++) {
      const Item* item=result.item(i);
      if(i>0) formatter << X(" ");
      formatter << item->asString(context);
    }
  }
  return UTF8((XMLCh*)strTarget.getRawBuffer());
}

string serializeXMLResults(const Sequence &result, const DynamicContext *context) {
  MemBufFormatTarget strTarget;
  {
    XMLFormatter formatter("UTF-16", "1.0", &strTarget);
    for(unsigned int i=0;i<result.getLength();i++) {
      const Item* item=result.item(i);
      if(i>0 && !item->isNode() && !result.item(i-1)->isNode())
        formatter << X(" ");
      formatter << item->asString(context);
    }
  }
  return UTF8((XMLCh*)strTarget.getRawBuffer());
}
