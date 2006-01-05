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

class TestCase;

class TestSuiteResultListener
{
public:
  virtual ~TestSuiteResultListener() {}

  virtual void startTestGroup(const std::string &name) = 0;
  virtual void endTestGroup() = 0;

  virtual void reportPass(const TestCase &testCase) = 0;
  virtual void reportInspect(const TestCase &testCase, const std::string &actualResult,
                             const std::string &expectedResult) = 0;
  virtual void reportSkip(const TestCase &testCase) = 0;
  virtual void reportFail(const TestCase &testCase, const std::string &actualResult,
                          const std::string &expectedResult) = 0;
  virtual void reportFailNoError(const TestCase &testCase, const std::string &actualResult) = 0;
  virtual void reportFailUnexpectedError(const TestCase &testCase, const std::string &unexpectedError) = 0;

protected:
  TestSuiteResultListener() {}
};

class ConsoleResultListener : public TestSuiteResultListener
{
public:
  ConsoleResultListener();

  virtual void startTestGroup(const std::string &name);
  virtual void endTestGroup();

  virtual void reportPass(const TestCase &testCase);
  virtual void reportInspect(const TestCase &testCase, const std::string &actualResult,
                             const std::string &expectedResult);
  virtual void reportSkip(const TestCase &testCase);
  virtual void reportFail(const TestCase &testCase, const std::string &actualResult,
                          const std::string &expectedResult);
  virtual void reportFailNoError(const TestCase &testCase, const std::string &actualResult);
  virtual void reportFailUnexpectedError(const TestCase &testCase, const std::string &unexpectedError);

  void printReport() const;

private:
  void testCaseToErrors(const TestCase &testCase);

private:
  std::string m_szFullTestName;

  unsigned int m_nTotalTests, m_nPassedTests, m_nSkippedTests, m_nInspectTests;

  int testDepth_;
  bool needNewline_;

  std::ostringstream errors_;
};

#endif
