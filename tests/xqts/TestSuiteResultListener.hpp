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

#ifndef _TESTSUITERESULTLISTENER_HPP
#define _TESTSUITERESULTLISTENER_HPP

#include <string>
#include <sstream>

class TestSuiteResultListener
{
public:
  virtual ~TestSuiteResultListener() {}

  virtual void startTestGroup(const std::string &name) = 0;
  virtual void endTestGroup() = 0;

  virtual void reportPass(const std::string &name) = 0;
  virtual void reportInspect(const std::string &name, const std::string &actualResult,
                             const std::string &expectedResult) = 0;
  virtual void reportSkip(const std::string &name) = 0;
  virtual void reportFail(const std::string &name, const std::string &actualResult,
                          const std::string &expectedResult) = 0;
  virtual void reportFailNoError(const std::string &name, const std::string &actualResult,
                                 const std::string &expectedErrors) = 0;
  virtual void reportFailUnexpectedError(const std::string &name, const std::string &unexpectedError,
                                         const std::string &expectedErrors) = 0;

protected:
  TestSuiteResultListener() {}
};

class ConsoleResultListener : public TestSuiteResultListener
{
public:
  ConsoleResultListener();

  virtual void startTestGroup(const std::string &name);
  virtual void endTestGroup();

  virtual void reportPass(const std::string &name);
  virtual void reportInspect(const std::string &name, const std::string &actualResult,
                             const std::string &expectedResult);
  virtual void reportSkip(const std::string &name);
  virtual void reportFail(const std::string &name, const std::string &actualResult,
                          const std::string &expectedResult);
  virtual void reportFailNoError(const std::string &name, const std::string &actualResult,
                                 const std::string &expectedErrors);
  virtual void reportFailUnexpectedError(const std::string &name, const std::string &unexpectedError,
                                         const std::string &expectedErrors);

  void printReport() const;

private:
  std::string m_szFullTestName;

  unsigned int m_nTotalTests, m_nPassedTests, m_nSkippedTests, m_nInspectTests;

  int testDepth_;
  bool needNewline_;

  std::ostringstream errors_;
};

#endif
