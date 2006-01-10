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

#ifdef _MSC_VER
#pragma warning(disable: 4786)
#endif

#include <xqilla/xqts/TestSuiteParser.hpp>
#include <xqilla/xqts/TestSuiteRunner.hpp>

#include <iostream>

#include <xercesc/parsers/SAXParser.hpp>
#include <xercesc/sax/AttributeList.hpp>
#include <xercesc/framework/URLInputSource.hpp>
#include <xercesc/util/BinFileInputStream.hpp>

#include <xqilla/utils/XStr.hpp>
#include <xqilla/utils/UTF8Str.hpp>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif
using namespace std;

TestSuiteParser::TestSuiteParser(const string &pathToTestSuite, TestSuiteRunner *runner)
  : m_runner(runner)
{
  string szXQTSLocation=string("file:///")+pathToTestSuite;

  for(string::iterator i=szXQTSLocation.begin();i!=szXQTSLocation.end();i++) {
    if(*i==' ') {
      i=szXQTSLocation.erase(i);
      szXQTSLocation=szXQTSLocation.insert(i-szXQTSLocation.begin(),"%20");
      i=szXQTSLocation.begin();
    }
    else if(*i=='\\') *i='/';
  }

  if(*(szXQTSLocation.end()-1)!='/')
    szXQTSLocation+='/';

  m_urlXQTSDirectory.setURL(X(szXQTSLocation.c_str()));
  m_urlXQTSQueriesDirectory.setURL(m_urlXQTSDirectory, X("Queries/XQuery/"));
  m_urlXQTSResultsDirectory.setURL(m_urlXQTSDirectory, X("ExpectedTestResults/"));
  m_bReadingChars=false;
}

void TestSuiteParser::run()
{
  try {
    SAXParser parser;
    parser.setDocumentHandler(this);
    parser.setErrorHandler(this);
    XMLURL url(m_urlXQTSDirectory,"XQTSCatalog.xml");
    URLInputSource is(url);
    parser.parse(is);
  }
  catch(const XMLException& e) {
    cerr << "Error while reading test catalog: " << UTF8(e.getMessage()) << endl;
  }
}

void TestSuiteParser::error(const SAXParseException& exc)
{
  cerr << "ERROR parsing catalog: " << UTF8(exc.getMessage()) << endl;
}

void TestSuiteParser::fatalError(const SAXParseException& exc)
{
  cerr << "FATAL ERROR parsing catalog: " << UTF8(exc.getMessage()) << endl;
}

void TestSuiteParser::startElement
(
    const   XMLCh* const    name
    ,       AttributeList&  attributes
)
{
    string szName=UTF8(name);
    if(szName=="test-group") {
        m_runner->startTestGroup(UTF8(attributes.getValue("name")));
    }
    else if(szName=="test-case")
    {
        m_testCase.name = UTF8(attributes.getValue("name"));
        m_testCase.queryURL = "";
        m_testCase.inputVars.clear();
        m_testCase.expectedErrors.clear();
        m_testCase.outputFiles.clear();

        m_szVariableBoundToInput=m_szCompareMethod="";
        m_urlQuery=XMLURL();
        XMLBuffer buff;
        buff.set(attributes.getValue("FilePath"));
        buff.append('/');
        m_urlBasePath.setURL(m_urlXQTSQueriesDirectory, buff.getRawBuffer());
        m_urlBasePathReferenceFiles.setURL(m_urlXQTSResultsDirectory, buff.getRawBuffer());
    }
    else if(szName=="query")
    {
        XMLBuffer buff;
        const XMLCh* name=attributes.getValue("name");
        buff.set(name);
        if(!XMLString::endsWith(name,X(".xq")))
            buff.append(X(".xq"));
        m_urlQuery.setURL(m_urlBasePath,buff.getRawBuffer());
        m_testCase.queryURL = UTF8(m_urlQuery.getURLText());

        Janitor<BinFileInputStream> stream((BinFileInputStream*)URLInputSource(m_urlQuery).makeStream());
        unsigned int dwSize=stream->getSize();
        m_testCase.query.resize(dwSize);
        stream->readBytes((XMLByte*)m_testCase.query.c_str(), dwSize);
    }
    else if(szName=="input-file")
    {
        m_bReadingChars=true;
        m_szChars="";
        m_szVariableBoundToInput=UTF8(attributes.getValue("variable"));
    }
    else if(szName=="output-file")
    {
        m_bReadingChars=true;
        m_szChars="";
        m_szCompareMethod=UTF8(attributes.getValue("compare"));
    }
    else if(szName=="expected-error")
    {
        m_bReadingChars=true;
        m_szChars="";
    }
    else if(szName=="source") {
        XMLURL realFile(m_urlXQTSDirectory, attributes.getValue("FileName"));
        m_runner->addSource(UTF8(attributes.getValue("ID")), UTF8(realFile.getURLText()), UTF8(attributes.getValue("schema")));
    }
    else if(szName=="schema") {
        XMLURL realFile(m_urlXQTSDirectory, attributes.getValue("FileName"));
        m_runner->addSchema(UTF8(attributes.getValue("ID")), UTF8(realFile.getURLText()), UTF8(attributes.getValue("uri")));
    }
}

void TestSuiteParser::characters
(
    const   XMLCh* const    chars
    , const unsigned int    length
)
{
    XMLBuffer buff;
    buff.set(chars,length);
    if(m_bReadingChars)
        m_szChars+=UTF8(buff.getRawBuffer());
}

void TestSuiteParser::endElement(const XMLCh* const name)
{
    string szName=UTF8(name);
    if(szName == "test-group") {
        m_runner->endTestGroup();
    }
    else if(szName == "test-case") {
        m_runner->runTestCase(m_testCase);
    }
    else if(szName == "input-file")
    {
        m_bReadingChars=false;
        m_testCase.inputVars[m_szVariableBoundToInput]=m_szChars;
        m_szVariableBoundToInput="";
    }
    else if(szName == "output-file")
    {
        m_bReadingChars=false;
        m_szChars=UTF8(XMLURL(m_urlBasePathReferenceFiles, m_szChars.c_str()).getURLText());
        m_testCase.outputFiles[m_szChars]=m_szCompareMethod;
        m_szCompareMethod="";
    }
    else if(szName == "expected-error")
    {
        m_bReadingChars=false;
        m_testCase.expectedErrors.push_back(m_szChars);
    }
}
