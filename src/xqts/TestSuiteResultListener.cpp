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

#include <xqilla/xqts/TestSuiteResultListener.hpp>
#include <xqilla/xqts/TestSuiteParser.hpp>

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

void ConsoleResultListener::reportPass(const TestCase &testCase)
{
  ++m_nTotalTests;
  ++m_nPassedTests;

  cout << "." << flush;
}

void ConsoleResultListener::testCaseToErrors(const TestCase &testCase)
{
  errors_ << "* Test-case '" << m_szFullTestName << ":" << testCase.name << "':" << endl;
  errors_ << "* Query URL: " << testCase.queryURL << endl;

  for(std::map<std::string, std::string>::const_iterator i = testCase.inputVars.begin();
      i != testCase.inputVars.end(); ++i) {
    errors_ << "* Input: " << i->first << " -> " << i->second << endl;
  }

  for(std::map<std::string, std::string>::const_iterator j = testCase.outputFiles.begin();
      j != testCase.outputFiles.end(); ++j) {
    errors_ << "* Output: " << j->second << " -> " << j->first << endl;
  }

  if(!testCase.expectedErrors.empty()) {
    errors_ << "* Errors:";
    for(std::list<std::string>::const_iterator k = testCase.expectedErrors.begin();
        k != testCase.expectedErrors.end(); ++k) {
      errors_ << " " << *k;
    }
    errors_ << endl;
  }

  errors_ << endl;
  errors_ << "********** Query: **********" << endl;
  errors_ << testCase.query << endl;
  errors_ << endl;
}

void ConsoleResultListener::reportInspect(const TestCase &testCase, const string &actualResult,
                                          const string &expectedResult)
{
  ++m_nTotalTests;
  ++m_nInspectTests;

  cout << "," << flush;

  errors_ << "************************************************************************" << endl;
  errors_ << "* For inspection:" << endl;
  testCaseToErrors(testCase);
  errors_ << "********** Actual result: **********" << endl;
  errors_ << actualResult << endl;;
  errors_ << endl;
  errors_ << "********** Expected result: **********" << endl;;
  errors_ << expectedResult << endl;
  errors_ << endl;
}

void ConsoleResultListener::reportSkip(const TestCase &testCase)
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

  errors_ << "************************************************************************" << endl;
  testCaseToErrors(testCase);
  errors_ << "********** Actual result: **********" << endl;
  errors_ << actualResult << endl;;
  errors_ << endl;
  errors_ << "********** Expected result: **********" << endl;;
  errors_ << expectedResult << endl;
  errors_ << endl;
}

void ConsoleResultListener::reportFailNoError(const TestCase &testCase, const string &actualResult)
{
  ++m_nTotalTests;

  cout << "!" << flush;

  errors_ << "************************************************************************" << endl;
  testCaseToErrors(testCase);
  errors_ << "********** Actual result: **********" << endl;
  errors_ << actualResult << endl;;
  errors_ << endl;
}

void ConsoleResultListener::reportFailUnexpectedError(const TestCase &testCase, const string &unexpectedError)
{
  ++m_nTotalTests;

  cout << "!" << flush;

  errors_ << "************************************************************************" << endl;
  testCaseToErrors(testCase);
  errors_ << "********** Actual error: **********" << endl;
  errors_ << unexpectedError << endl;;
  errors_ << endl;
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
