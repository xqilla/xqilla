/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Oracle. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

#ifndef _TESTSUITEPARSERHANDLER_HPP
#define _TESTSUITEPARSERHANDLER_HPP

#include <string>
#include <list>
#include <map>
#include <set>

#include <xercesc/sax2/DefaultHandler.hpp>
#include <xercesc/util/XMLURL.hpp>

#include <xqilla/framework/XQillaExport.hpp>

class TestSuiteRunner;

class XQILLA_API TestCase
{
public:
  std::string name;
  bool updateTest;
  int stateTime;
  std::string queryURL;
  std::string query;
  std::string contextItem;
  std::string defaultCollection;
  std::map<std::string, std::string> inputURIVars;
  std::map<std::string, std::string> inputVars;
  std::map<std::string, std::string> extraVars;
  std::map<std::string, std::string> outputFiles;
  std::list<std::pair<std::string, std::string> > moduleFiles;
  std::list<std::string> expectedErrors;
};

class XQILLA_API TestSuiteParser : private XERCES_CPP_NAMESPACE_QUALIFIER DefaultHandler
{
public:
  TestSuiteParser(const std::string &pathToTestSuite, TestSuiteRunner *runner);

  void run();

  void handleUnknownElement(const std::string &elementName);

private:
  virtual void startElement(const XMLCh* const uri, const XMLCh* const localname, const XMLCh* const qname,
                            const XERCES_CPP_NAMESPACE_QUALIFIER Attributes&  attributes);
  virtual void endElement(const XMLCh* const uri, const XMLCh* const localname,	const XMLCh* const qname);
  virtual void characters(const XMLCh* const chars, const unsigned int length);

  virtual void error(const XERCES_CPP_NAMESPACE_QUALIFIER SAXParseException& exc);
  virtual void fatalError(const XERCES_CPP_NAMESPACE_QUALIFIER SAXParseException& exc);

private:
  TestSuiteRunner *runner_;

  XERCES_CPP_NAMESPACE_QUALIFIER XMLURL urlXQTSCatalog_, urlXQTSQueriesDirectory_, urlXQTSResultsDirectory_, 
    urlBasePath_, urlBasePathReferenceFiles_, urlQuery_;

  std::set<std::string> unknownElements_;

  bool readingChars_;
  std::string chars_;

  std::string variableBoundToInput_, compareMethod_, namespace_, collectionID_;

  TestCase testCase_;
};

#endif
