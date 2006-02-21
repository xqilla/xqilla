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

#ifndef _TESTSUITERUNNER_HPP
#define _TESTSUITERUNNER_HPP

#include <string>
#include <list>
#include <map>

#include <xqilla/framework/XQillaExport.hpp>

class TestSuiteResultListener;
class TestCase;

class XQILLA_API TestSuiteRunner
{
public:
  virtual ~TestSuiteRunner() {}

  virtual void addSource(const std::string &id, const std::string &filename, const std::string &schema) = 0;
  virtual void addSchema(const std::string &id, const std::string &filename, const std::string &uri) = 0;
  virtual void addModule(const std::string &id, const std::string &filename) = 0;

  virtual void startTestGroup(const std::string &name) = 0;
  virtual void endTestGroup() = 0;

  virtual void runTestCase(const TestCase &testCase) = 0;

protected:
  TestSuiteRunner(TestSuiteResultListener *results) : m_results(results) {}

  void testResults(const TestCase &testCase, const std::string &results) const;
  void testErrors(const TestCase &testCase, const std::string &actualError) const;

protected:
  TestSuiteResultListener *m_results;
};

#endif
