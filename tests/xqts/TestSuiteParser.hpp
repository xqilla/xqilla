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

#ifndef _TESTSUITEPARSERHANDLER_HPP
#define _TESTSUITEPARSERHANDLER_HPP

#include <string>
#include <list>
#include <map>

#include <xercesc/sax/HandlerBase.hpp>
#include <xercesc/util/XMLURL.hpp>

class TestSuiteRunner;

class TestSuiteParser : private XERCES_CPP_NAMESPACE_QUALIFIER HandlerBase
{
public:
  TestSuiteParser(std::string pathToTestSuite, TestSuiteRunner *runner);

  void run();

private:
  virtual void startElement
  (
   const   XMLCh* const    name
   ,       XERCES_CPP_NAMESPACE_QUALIFIER AttributeList&  attributes
   );
  virtual void endElement(const XMLCh* const name);
  virtual void characters
  (
   const   XMLCh* const    chars
   , const unsigned int    length
   );

  virtual void error(const XERCES_CPP_NAMESPACE_QUALIFIER SAXParseException& exc);
  virtual void fatalError(const XERCES_CPP_NAMESPACE_QUALIFIER SAXParseException& exc);

private:
  TestSuiteRunner *m_runner;

  std::string m_szCurrentTestCase;
  XERCES_CPP_NAMESPACE_QUALIFIER XMLURL m_urlXQTSDirectory, m_urlXQTSQueriesDirectory, m_urlXQTSResultsDirectory, 
    m_urlBasePath, m_urlBasePathReferenceFiles, m_urlQuery;

  bool m_bReadingChars;
  std::string m_szChars;

  std::string m_szVariableBoundToInput, m_szCompareMethod;
  std::map<std::string, std::string> m_inputVars;
  std::map<std::string, std::string> m_outputFiles;
  std::list<std::string> m_expectedErrors;
};

#endif
