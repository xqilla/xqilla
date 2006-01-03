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

#ifndef _TESTSUITERUNNER_HPP
#define _TESTSUITERUNNER_HPP

#include <string>
#include <list>
#include <map>

class TestSuiteResultListener;

class TestSuiteRunner
{
public:
  virtual ~TestSuiteRunner() {}

  virtual void addSource(const std::string &id, const std::string &filename, const std::string &schema) = 0;
  virtual void addSchema(const std::string &id, const std::string &filename, const std::string &uri) = 0;

  virtual void startTestGroup(const std::string &name) = 0;
  virtual void endTestGroup() = 0;

  virtual void runTestCase(const std::string &name, const std::string &queryURL, const std::map<std::string, std::string> &inputVars,
                           const std::map<std::string, std::string> &outputFiles, const std::list<std::string> &expectedErrors) = 0;

protected:
  TestSuiteRunner(TestSuiteResultListener *results) : m_results(results) {}

  void testResults(const std::string &name, const std::map<std::string, std::string> &outputFiles, const std::list<std::string> &expectedErrors,
                   const std::string &textResults, const std::string &xmlResults) const;
  void testErrors(const std::string &name, const std::list<std::string> &expectedErrors, const std::string &actualError) const;

protected:
  TestSuiteResultListener *m_results;
};

#endif
