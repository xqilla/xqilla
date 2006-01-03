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

#include "TestSuiteResultListener.hpp"

#include <iostream>

using namespace std;

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

void ConsoleResultListener::reportPass(const string &testName)
{
  ++m_nTotalTests;
  ++m_nPassedTests;

  cout << "." << flush;
}

void ConsoleResultListener::reportInspect(const std::string &name, const std::string &actualResult,
                                          const std::string &expectedResult)
{
  ++m_nTotalTests;
  ++m_nInspectTests;

  cout << "," << flush;

  errors_ << "************************************************************************" << endl;
  errors_ << "For inspection:" << endl;
  errors_ << "Test-case '" << m_szFullTestName << ":" << name << "':" << endl;
  errors_ << "Actual result: " << endl;
  errors_ << actualResult << endl;;
  errors_ << "Expected result: " << endl;;
  errors_ << expectedResult << endl;
  errors_ << endl;
}

void ConsoleResultListener::reportSkip(const string &name)
{
  ++m_nTotalTests;
  ++m_nSkippedTests;

  cout << "^" << flush;
}

void ConsoleResultListener::reportFail(const string &name,
                                       const string &actualResult, const string &expectedResult)
{
  ++m_nTotalTests;

  cout << "!" << flush;

  errors_ << "************************************************************************" << endl;
  errors_ << "Test-case '" << m_szFullTestName << ":" << name << "':" << endl;
  errors_ << "Actual result: " << endl;
  errors_ << actualResult << endl;;
  errors_ << "Expected result: " << endl;;
  errors_ << expectedResult << endl;
  errors_ << endl;
}

void ConsoleResultListener::reportFailNoError(const string &name,
                                              const string &actualResult, const string &expectedErrors)
{
  ++m_nTotalTests;

  cout << "!" << flush;

  errors_ << "************************************************************************" << endl;
  errors_ << "Test-case '" << m_szFullTestName << ":" << name << "':" << endl;
  errors_ << "Actual result: " << endl;
  errors_ << actualResult << endl;;
  errors_ << "Expected result: " << endl;;
  errors_ << "[Error " << expectedErrors << "]" << endl;
  errors_ << endl;
}

void ConsoleResultListener::reportFailUnexpectedError(const string &name,
                                                      const string &unexpectedError, const string &expectedErrors)
{
  ++m_nTotalTests;

  cout << "!" << flush;

  errors_ << "************************************************************************" << endl;
  errors_ << "Test-case '" << m_szFullTestName << ":" << name << "':" << endl;
  errors_ << "Expected error: " << expectedErrors << ", actual error '" << unexpectedError << "'" << endl;
}

void ConsoleResultListener::printReport() const
{
  cout << "************************************************************************" << endl;
  cout << m_nTotalTests << " Tests, "
       << m_nPassedTests << " passed, "
       << m_nSkippedTests << " skipped, "
       << m_nInspectTests << " for inspection";
  cout << " (" << ((float)m_nPassedTests)/(m_nTotalTests-m_nSkippedTests-m_nInspectTests)*100 << "%)" << endl;

  cerr << errors_.str();
  cout << "************************************************************************" << endl;
}
