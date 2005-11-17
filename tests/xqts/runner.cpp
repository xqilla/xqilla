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

#include <iostream>
#include <sstream>
#include <list>
#include <map>

#include <xercesc/parsers/SAXParser.hpp>
#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/sax/HandlerBase.hpp>
#include <xercesc/sax/AttributeList.hpp>
#include <xercesc/dom/DOM.hpp>
#include <xercesc/util/XMLEntityResolver.hpp>
#include <xercesc/util/XMLException.hpp>
#include <xercesc/util/XMLURL.hpp>
#include <xercesc/util/BinFileInputStream.hpp>
#include <xercesc/framework/URLInputSource.hpp>
#include <xercesc/framework/MemBufFormatTarget.hpp>
#include <xercesc/framework/MemBufInputSource.hpp>

//XQilla includes
#include <xqilla/xqilla-simple.hpp>
#include <xqilla/utils/XQillaPlatformUtils.hpp>
#include <xqilla/context/ItemFactory.hpp>
#include <xqilla/context/VariableStore.hpp>
#include <xqilla/functions/FunctionConstructor.hpp>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

class TestSuiteParserHandler : public HandlerBase, public XMLEntityResolver
{
public:
    TestSuiteParserHandler(std::string szXQTSDirectory, std::string szSingleTest);

    virtual void startElement
    (
        const   XMLCh* const    name
        ,       AttributeList&  attributes
    );
    virtual void endElement(const XMLCh* const name);
    virtual void characters
    (
        const   XMLCh* const    chars
        , const unsigned int    length
    );

    virtual InputSource* resolveEntity(XMLResourceIdentifier* resourceIdentifier);

    virtual void error(const SAXParseException& exc)
    {
        std::cerr << "ERROR parsing catalog: " << UTF8(exc.getMessage()) << std::endl;
    }
    virtual void fatalError(const SAXParseException& exc)
    {
        std::cerr << "FATAL ERROR parsing catalog: " << UTF8(exc.getMessage()) << std::endl;
    }

    unsigned int m_nTotalTests, m_nPassedTests, m_nSkippedTests;

protected:
    void runTest();
    bool compareNodes(DOMNode* node1, DOMNode* node2);

    std::string m_szSingleTest;
    std::string m_szFullTestName, m_szCurrentTestCase;
    XMLURL m_urlXQTSDirectory, m_urlXQTSQueriesDirectory, m_urlXQTSResultsDirectory, 
           m_urlBasePath, m_urlBasePathReferenceFiles, m_urlQuery;
    std::string m_szInputFile, m_szOutputFile;
    std::string m_szVariableBoundToInput, m_szCompareMethod;
    std::string m_szExpectedError;
    bool m_bReadingInputFile,m_bReadingOutputFile,m_bReadingExpectedError;
    bool m_bPreviousTestSucceeded;
    std::map<std::string, std::string> m_outputFiles, m_inputVars;

    // the std::pair contains filename/schemaID
    std::map<std::string, std::pair<std::string, std::string> > m_inputFiles;
    // the std::pair contains filename/schemaURI
    std::map<std::string, std::pair<std::string, std::string> > m_schemaFiles;
    std::list<std::string> m_expectedErrors;
};

int main(int argc, char *argv[])
{
    // First we parse the command line arguments
    if(argc<2)
    {
        std::cerr << "Usage: " << argv[0] << " <location of the XQTS suite>" << std::endl;
        return 1;
    }

    std::string szXQTSLocation=std::string("file:///")+argv[1];
    std::string szSingleTest;
    if(argc>2)
        szSingleTest=argv[2];

    XQillaPlatformUtils::initialize();

    for(std::string::iterator i=szXQTSLocation.begin();i!=szXQTSLocation.end();i++)
        if(*i==' ')
        {
            i=szXQTSLocation.erase(i);
            szXQTSLocation=szXQTSLocation.insert(i-szXQTSLocation.begin(),"%20");
            i=szXQTSLocation.begin();
        }
        else if(*i=='\\')
            *i='/';
    if(*(szXQTSLocation.end()-1)!='/')
        szXQTSLocation+='/';
    {
        TestSuiteParserHandler handler(szXQTSLocation, szSingleTest);
        try
        {
            SAXParser parser;
            parser.setDocumentHandler(&handler);
            parser.setErrorHandler(&handler);
            XMLURL baseUrl(szXQTSLocation.c_str());
            XMLURL url(baseUrl,"XQTSCatalog.xml");
            parser.parse(URLInputSource(url));
        }
        catch(const XMLException& e)
        {
            std::cerr << "Error while reading test catalog: " << UTF8(e.getMessage()) << std::endl;
        }

        std::cout << std::endl << std::endl << 
            handler.m_nTotalTests << " Tests, " << 
            handler.m_nPassedTests << " passed, " << 
            handler.m_nSkippedTests << " skipped (" <<
            ((float)(handler.m_nPassedTests+handler.m_nSkippedTests))/handler.m_nTotalTests*100 << ")" << std::endl;
    }
    XQillaPlatformUtils::terminate();

    return 0;
}


//////////////////////////////
//
// The TestSuiteParserHandler class

TestSuiteParserHandler::TestSuiteParserHandler(std::string szXQTSDirectory, std::string szSingleTest)
: m_urlXQTSDirectory(szXQTSDirectory.c_str()),
  m_urlXQTSQueriesDirectory(m_urlXQTSDirectory, "Queries/XQuery/"),
  m_urlXQTSResultsDirectory(m_urlXQTSDirectory, "ExpectedTestResults/")
{
    m_szSingleTest=szSingleTest;
    m_bReadingInputFile=m_bReadingOutputFile=m_bReadingExpectedError=false;
    m_nTotalTests=m_nPassedTests=m_nSkippedTests=0;
    m_bPreviousTestSucceeded=true;
}

void TestSuiteParserHandler::startElement
(
    const   XMLCh* const    name
    ,       AttributeList&  attributes
)
{
    std::string szName=UTF8(name);
    if(szName=="test-group")
    {
        if(m_szFullTestName!="")
            m_szFullTestName+=":";
        m_szFullTestName+=UTF8(attributes.getValue("name"));
    }
    else if(szName=="test-case")
    {
        m_szCurrentTestCase=UTF8(attributes.getValue("name"));
        m_szVariableBoundToInput=m_szCompareMethod=m_szExpectedError=m_szInputFile="";
        m_urlQuery=XMLURL();
        XMLBuffer buff;
        buff.set(attributes.getValue("FilePath"));
        buff.append('/');
        m_urlBasePath.setURL(m_urlXQTSQueriesDirectory, buff.getRawBuffer());
        m_urlBasePathReferenceFiles.setURL(m_urlXQTSResultsDirectory, buff.getRawBuffer());
        m_bReadingInputFile=m_bReadingOutputFile=m_bReadingExpectedError=false;
        m_inputVars.clear();
        m_expectedErrors.clear();
        m_outputFiles.clear();
    }
    else if(szName=="query")
    {
        XMLBuffer buff;
        const XMLCh* name=attributes.getValue("name");
        buff.set(name);
        if(!XMLString::endsWith(name,X(".xq")))
            buff.append(X(".xq"));
        m_urlQuery.setURL(m_urlBasePath,buff.getRawBuffer());
    }
    else if(szName=="input-file")
    {
        m_bReadingInputFile=true;
        m_szVariableBoundToInput=UTF8(attributes.getValue("variable"));
    }
    else if(szName=="output-file")
    {
        m_bReadingOutputFile=true;
        m_szCompareMethod=UTF8(attributes.getValue("compare"));
        m_szOutputFile="";
    }
    else if(szName=="expected-error")
    {
        m_bReadingExpectedError=true;
    }
    else if(szName=="source")
    {
        std::string id=UTF8(attributes.getValue("ID"));
        std::string szFileName=UTF8(attributes.getValue("FileName"));
        std::string szSchemaID=UTF8(attributes.getValue("schema"));
        m_inputFiles[id]=std::pair<std::string, std::string>(szFileName, szSchemaID);
    }
    else if(szName=="schema")
    {
        std::string id=UTF8(attributes.getValue("ID"));
        std::string szFileName=UTF8(attributes.getValue("FileName"));
        std::string szSchemaURI=UTF8(attributes.getValue("uri"));
        m_schemaFiles[id]=std::pair<std::string, std::string>(szFileName, szSchemaURI);
    }
}

void TestSuiteParserHandler::characters
(
    const   XMLCh* const    chars
    , const unsigned int    length
)
{
    XMLBuffer buff;
    buff.set(chars,length);
    if(m_bReadingInputFile)
        m_szInputFile+=UTF8(buff.getRawBuffer());
    else if(m_bReadingOutputFile)
        m_szOutputFile+=UTF8(buff.getRawBuffer());
    else if(m_bReadingExpectedError)
        m_szExpectedError+=UTF8(buff.getRawBuffer());
}

InputSource* TestSuiteParserHandler::resolveEntity(XMLResourceIdentifier* resourceIdentifier)
{
    const XMLCh* systemId=resourceIdentifier->getSystemId();
    if((systemId==NULL || *systemId==0) && 
        resourceIdentifier->getResourceIdentifierType()==XMLResourceIdentifier::SchemaGrammar)
    {
        for(std::map<std::string, std::string>::iterator i=m_inputVars.begin();i!=m_inputVars.end();i++)
        {
            // Variable ->XML Input File ID
            std::string inputFile=i->second;
            std::map<std::string, std::pair<std::string, std::string> >::iterator j=m_inputFiles.find(inputFile);
            // ID -> (Filename, schema ID)
            if(j!=m_inputFiles.end())
            {
                std::string schemaFile=j->second.second;
                std::map<std::string, std::pair<std::string, std::string> >::iterator k=m_schemaFiles.find(schemaFile);
                // ID -> (FileName, URI)
                if(k!=m_schemaFiles.end() && k->second.second==UTF8(resourceIdentifier->getNameSpace()))
                {
                    XMLURL realFile(m_urlXQTSDirectory,k->second.first.c_str());
                    return new URLInputSource(realFile);
                }
            }
        }
    }
    return NULL;
}

void TestSuiteParserHandler::endElement(const XMLCh* const name)
{
    std::string szName=UTF8(name);
    if(szName == "test-group")
    {
        int nColonPos=m_szFullTestName.find_last_of(":");
        if(nColonPos!=-1)
            m_szFullTestName=std::string(m_szFullTestName.c_str(),nColonPos);
        else
            m_szFullTestName="";
    }
    else if(szName == "test-case" && 
            (m_szSingleTest=="" || m_szCurrentTestCase==m_szSingleTest))
    {
        m_nTotalTests++;
        if(m_szFullTestName.substr(0,21)=="Optional:StaticTyping")
        {
            std::cout << "^";
            m_nSkippedTests++;
            m_bPreviousTestSucceeded=true;
        }
        else
            runTest();
    }
    else if(szName == "input-file")
    {
        m_bReadingInputFile=false;
        m_inputVars[m_szVariableBoundToInput]=m_szInputFile;
        m_szInputFile=m_szVariableBoundToInput="";
    }
    else if(szName == "output-file")
    {
        m_bReadingOutputFile=false;
        m_szOutputFile=UTF8(XMLURL(m_urlBasePathReferenceFiles, m_szOutputFile.c_str()).getURLText());
        m_outputFiles[m_szOutputFile]=m_szCompareMethod;
        m_szOutputFile=m_szCompareMethod="";
    }
    else if(szName == "expected-error")
    {
        m_bReadingExpectedError=false;
        m_expectedErrors.push_back(m_szExpectedError);
        m_szExpectedError="";
    }
}

void TestSuiteParserHandler::runTest()
{
    XQilla xqilla;

    std::string allErrors;
    for(std::list<std::string>::iterator i=m_expectedErrors.begin();i!=m_expectedErrors.end();i++)
    {
        if(i!=m_expectedErrors.begin())
            allErrors+=",";
        allErrors+=*i;
    }
    Janitor<DynamicContext> context(xqilla.createContext());
    try 
    {
        context->setBaseURI(m_urlQuery.getURLText());
        context->setImplicitTimezone(context->getItemFactory()->createDurationOrDerived(FunctionConstructor::XMLChXPath2DatatypesURI, ATDurationOrDerived::fgDT_DAYTIMEDURATION, X("PT0S"), context.get()));
        context->setXMLEntityResolver(this);

        XQQuery* pParsedQuery=xqilla.parseXQueryFromURI(m_urlQuery.getURLText(), context.get());

        for(std::map<std::string, std::string>::iterator v=m_inputVars.begin();v!=m_inputVars.end();v++)
        {
            std::pair<std::string, std::string> xmlFile=m_inputFiles[v->second];

            XMLURL realFile(m_urlXQTSDirectory, xmlFile.first.c_str());

            Sequence doc=context->resolveDocument(realFile.getURLText());
            context->getVariableStore()->setGlobalVar(X(v->first.c_str()),doc,context.get());
        }
		context->setContextPosition(1);
		context->setContextSize(1);
		time_t curTime;
		context->setCurrentTime(time(&curTime));

        Sequence result=pParsedQuery->execute(context.get());

        if(m_outputFiles.empty() && !m_expectedErrors.empty())
        {
            std::string outputResult;
		    for(unsigned int i=0;i<result.getLength();i++)
		    {
			    const Item* item=result.item(i);
                if(outputResult.length()>0)
			        outputResult+=" ";
			    outputResult+=UTF8(item->asString(context.get()));
		    }

            if(m_bPreviousTestSucceeded)
                std::cout << std::endl;
            std::cout << "Test-case '" << m_szFullTestName << ":" << m_szCurrentTestCase << "': ";
            std::cout << "Fail" << std::endl;
            std::cout << "\tActual result: " << std::endl;
            std::cout << outputResult << std::endl;;
            std::cout << "\tExpected result: " << std::endl;;
            std::cout << "[Error " << allErrors << "]" << std::endl;
            std::cout << std::endl;
            m_bPreviousTestSucceeded=false;
        }
        else
        {
            std::string szErrorMsg;
            for(std::map<std::string, std::string>::iterator i=m_outputFiles.begin();i!=m_outputFiles.end();i++)
            {
                std::string szReferenceFile=(*i).first;
                std::string szCompareMethod=(*i).second;

                std::string expectedResult;
                Janitor<BinFileInputStream> stream((BinFileInputStream*)URLInputSource(szReferenceFile.c_str()).makeStream());
                unsigned int dwSize=stream->getSize();
                expectedResult.resize(dwSize);
                stream->readBytes((XMLByte*)expectedResult.c_str(), dwSize);
                if(dwSize>3 && 
                   ((unsigned char)expectedResult[0])==0xEF && 
                   ((unsigned char)expectedResult[1])==0xBB && 
                   ((unsigned char)expectedResult[2])==0xBF)
                    expectedResult.erase(0,3);

                for(std::string::iterator c=expectedResult.begin();c!=expectedResult.end();c++)
                    if(*c==0xD)
                        c=expectedResult.erase(c)-1;
                while(expectedResult.size()>0 && expectedResult[expectedResult.size()-1]==0xA)
                    expectedResult.erase(expectedResult.size()-1);

                if(szCompareMethod=="Text")
                {
                    MemBufFormatTarget strTarget;
                    {
                        XMLFormatter formatter("UTF-16", "1.0", &strTarget, XMLFormatter::CharEscapes);
		                for(unsigned int i=0;i<result.getLength();i++)
		                {
			                const Item* item=result.item(i);
                            if(i>0)
			                    formatter << X(" ");
			                formatter << item->asString(context.get());
		                }
                    }
                    std::string outputResult=UTF8((XMLCh*)strTarget.getRawBuffer());

                    if(expectedResult==outputResult)
                    {
                        szErrorMsg="";
                        break;
                    }
                    else
                    {
                        std::ostringstream oss;
                        oss << "Test-case '" << m_szFullTestName << ":" << m_szCurrentTestCase << "': Fail" << std::endl;
                        oss << "\tActual result: " << std::endl;
                        oss << outputResult << std::endl;
                        oss << "\tExpected result: " << std::endl;
                        oss << expectedResult << std::endl;
                        szErrorMsg=oss.str();
                    }
                }
                else if(szCompareMethod=="Fragment" || szCompareMethod=="XML")
                {
                    MemBufFormatTarget strTarget;
                    {
                        XMLFormatter formatter("UTF-16", "1.0", &strTarget);
                        if(szCompareMethod=="Fragment")
                            formatter << X("<wrapper>");
		                for(unsigned int i=0;i<result.getLength();i++)
		                {
			                const Item* item=result.item(i);
                            if(i>0 && !item->isNode() && !result.item(i-1)->isNode())
			                    formatter << X(" ");
			                formatter << item->asString(context.get());
		                }
                        if(szCompareMethod=="Fragment")
                            formatter << X("</wrapper>");
                    }
                    std::string outputResult=UTF8((XMLCh*)strTarget.getRawBuffer());

                    if(szCompareMethod=="Fragment")
                        expectedResult="<wrapper>"+expectedResult+"</wrapper>";

                    bool bEqual=false;
                    try
                    {
                        XERCES_CPP_NAMESPACE::XercesDOMParser parser;
                        parser.setDoNamespaces(true);

                        XERCES_CPP_NAMESPACE::MemBufInputSource memSrc1((XMLByte*)outputResult.c_str(), outputResult.size(), "", false);
                        parser.parse(memSrc1);
                        XERCES_CPP_NAMESPACE::DOMDocument* doc1=parser.getDocument();

                        XERCES_CPP_NAMESPACE::MemBufInputSource memSrc2((XMLByte*)expectedResult.c_str(), expectedResult.size(), "", false);
                        parser.parse(memSrc2);
                        XERCES_CPP_NAMESPACE::DOMDocument* doc2=parser.getDocument();
                        bEqual=compareNodes(doc1, doc2);
                    }
                    catch(...)
                    {
                    }

                    if(bEqual)
                    {
                        szErrorMsg="";
                        break;
                    }
                    else
                    {
                        std::ostringstream oss;
                        oss << "Test-case '" << m_szFullTestName << ":" << m_szCurrentTestCase << "': Fail" << std::endl;
                        oss << "\tActual result: " << std::endl;
                        oss << outputResult << std::endl;
                        oss << "\tExpected result: " << std::endl;
                        oss << expectedResult << std::endl;
                        szErrorMsg=oss.str();
                    }
                }
                else
                {
                    // TODO
                    std::ostringstream oss;
                    oss << "Test-case '" << m_szFullTestName << ":" << m_szCurrentTestCase << "': Unsupported comparison method " << szCompareMethod << std::endl;
                    szErrorMsg=oss.str();
                }

            }
            if(szErrorMsg.empty())
            {
                std::cout << ".";
                m_nPassedTests++;
                m_bPreviousTestSucceeded=true;
            }
            else
            {
                if(m_bPreviousTestSucceeded)
                    std::cout << std::endl;
                std::cout << szErrorMsg << std::endl;
                m_bPreviousTestSucceeded=false;
            }
        }
    }
	catch(XQException& e)
	{
        if(allErrors.empty())
        {
            if(m_bPreviousTestSucceeded)
                std::cout << std::endl;
            std::cout << "Test-case '" << m_szFullTestName << ":" << m_szCurrentTestCase << "': ";
            std::cout << "Fail [Error: " << UTF8(e.getError()) << "]" << std::endl;
            m_bPreviousTestSucceeded=false;
        }
        else
        {
            bool bFound=false;
            for(std::list<std::string>::iterator i=m_expectedErrors.begin();i!=m_expectedErrors.end();i++)
            {
                if(XMLString::patternMatch(e.getError(),X((*i).c_str()))!=-1)
                {
                    bFound=true;
                    m_nPassedTests++;
                    std::cout << ".";
                    m_bPreviousTestSucceeded=true;
                    break;
                }
            }
            if(!bFound)
            {
                if(m_bPreviousTestSucceeded)
                    std::cout << std::endl;
                std::cout << "Test-case '" << m_szFullTestName << ":" << m_szCurrentTestCase << "': ";
                std::cout << "Fail [Expected error " << allErrors << ", actual error '" << UTF8(e.getError()) << "']" << std::endl;
                m_bPreviousTestSucceeded=false;
            }
        }
	}
  catch(DOMException &de) {
        if(m_bPreviousTestSucceeded)
            std::cout << std::endl;
        std::cout << "Test-case '" << m_szFullTestName << ":" << m_szCurrentTestCase << "': ";
        std::cout << "Fail [DOMException: " << UTF8(de.getMessage()) << "]" << std::endl;
        m_bPreviousTestSucceeded=false;
  }
	catch(...)
	{
        if(m_bPreviousTestSucceeded)
            std::cout << std::endl;
        std::cout << "Test-case '" << m_szFullTestName << ":" << m_szCurrentTestCase << "': ";
        std::cout << "Fail [Unexpected exception]" << std::endl;
        m_bPreviousTestSucceeded=false;
	}
}

bool TestSuiteParserHandler::compareNodes(DOMNode* node1, DOMNode* node2)
{
    if(node1->getNodeType()!=node2->getNodeType())
    {
        //TRACE(_T("node type %d (%s value %s) != node type %d (%s value %s)\n"),node1->getNodeType(), node1->getNodeName(), node1->getNodeValue(), node2->getNodeType(), node2->getNodeName(), node2->getNodeValue());
        return false;
    }
    if(!XMLString::equals(node1->getNodeName(),node2->getNodeName()))
    {
        //TRACE(_T("node %s value %s != node %s value %s\n"),node1->getNodeName(), node1->getNodeValue(),node2->getNodeName(), node2->getNodeValue());
        return false;
    }
    if(!XMLString::equals(node1->getNodeValue(),node2->getNodeValue()))
    {
        //TRACE(_T("node %s value %s != node %s value %s\n"),node1->getNodeName(), node1->getNodeValue(),node2->getNodeName(), node2->getNodeValue());
        return false;
    }
    if(node1->hasChildNodes() != node2->hasChildNodes())
    {
        //TRACE(_T("node %s has %d children != node %s has %d children\n"),node1->getNodeName(), node1->hasChildNodes(), node2->getNodeName(), node2->hasChildNodes());
        return false;
    }
    if(node1->getNodeType()==DOMNode::ELEMENT_NODE)
    {
        DOMElement* e1=(DOMElement*)node1;
        DOMElement* e2=(DOMElement*)node2;
        DOMNamedNodeMap* map1=e1->getAttributes();
        DOMNamedNodeMap* map2=e2->getAttributes();
        // remove namespace nodes
        unsigned int i;
        for(i=0;i<map1->getLength();i++)
        {
            if(XMLString::equals(map1->item(i)->getNamespaceURI(),XMLUni::fgXMLNSURIName))
            {
                map1->removeNamedItemNS(map1->item(i)->getNamespaceURI(), map1->item(i)->getLocalName());
                i--;
            }
        }
        for(i=0;i<map2->getLength();i++)
        {
            if(XMLString::equals(map2->item(i)->getNamespaceURI(),XMLUni::fgXMLNSURIName))
            {
                map2->removeNamedItemNS(map2->item(i)->getNamespaceURI(), map2->item(i)->getLocalName());
                i--;
            }
        }
        if(map1->getLength()!=map2->getLength())
            return false;
        for(i=0;i<map1->getLength();i++)
        {
            DOMNode* a1=map1->item(i);
            DOMNode* a2=map2->getNamedItemNS(a1->getNamespaceURI(),a1->getLocalName());
            if(a2==NULL)
            {
                //TRACE(_T("node %s has attribute {%s}%s != node %s hasn't\n"),node1->getNodeName(), a1->getNamespaceURI(), a1->getLocalName(), node2->getNodeName());
                return false;
            }
            if(!compareNodes(a1,a2))
                return false;
        }
    }
    DOMNode* n1=node1->getFirstChild();
    DOMNode* n2=node2->getFirstChild();
    while(n1 && n2)
    {
        if(n1->getNodeType()==DOMNode::TEXT_NODE && 
           XMLString::isAllWhiteSpace(n1->getNodeValue()) &&
           (n1->getPreviousSibling()==NULL || (n1->getPreviousSibling()!=NULL && n1->getPreviousSibling()->getNodeType()==DOMNode::ELEMENT_NODE)) &&
           (n1->getNextSibling()==NULL || (n1->getNextSibling()!=NULL && n1->getNextSibling()->getNodeType()==DOMNode::ELEMENT_NODE)))
        {
            //TRACE(_T("skipping ws node %s value '%s'\n"),n1->getNodeName(), n1->getNodeValue());
            n1=n1->getNextSibling();
        }
        if(n2->getNodeType()==DOMNode::TEXT_NODE && 
           XMLString::isAllWhiteSpace(n2->getNodeValue()) &&
           (n2->getPreviousSibling()==NULL || (n2->getPreviousSibling()!=NULL && n2->getPreviousSibling()->getNodeType()==DOMNode::ELEMENT_NODE)) &&
           (n2->getNextSibling()==NULL || (n2->getNextSibling()!=NULL && n2->getNextSibling()->getNodeType()==DOMNode::ELEMENT_NODE)))
        {
            //TRACE(_T("skipping ws node %s value '%s'\n"),n2->getNodeName(), n2->getNodeValue());
            n2=n2->getNextSibling();
        }
        if(n1==NULL || n2==NULL)
            break;

        if(!compareNodes(n1, n2))
            return false;
        n1=n1->getNextSibling();
        n2=n2->getNextSibling();
    }
    if(n1!=NULL &&
       n1->getNodeType()==DOMNode::TEXT_NODE && 
       XMLString::isAllWhiteSpace(n1->getNodeValue()) &&
       (n1->getPreviousSibling()==NULL || (n1->getPreviousSibling()!=NULL && 
                                           (
                                            n1->getPreviousSibling()->getNodeType()==DOMNode::ELEMENT_NODE || 
                                            n1->getPreviousSibling()->getNodeType()==DOMNode::PROCESSING_INSTRUCTION_NODE ||
                                            n1->getPreviousSibling()->getNodeType()==DOMNode::COMMENT_NODE
                                           )
                                           )) &&
       (n1->getNextSibling()==NULL || (n1->getNextSibling()!=NULL && 
                                       (
                                        n1->getNextSibling()->getNodeType()==DOMNode::ELEMENT_NODE || 
                                        n1->getNextSibling()->getNodeType()==DOMNode::PROCESSING_INSTRUCTION_NODE ||
                                        n1->getNextSibling()->getNodeType()==DOMNode::COMMENT_NODE 
                                       )
                                      )))
    {
        //TRACE(_T("skipping ws node %s value '%s'\n"),n1->getNodeName(), n1->getNodeValue());
        n1=n1->getNextSibling();
    }
    if(n2!=NULL &&
       n2->getNodeType()==DOMNode::TEXT_NODE && 
       XMLString::isAllWhiteSpace(n2->getNodeValue()) &&
       (n2->getPreviousSibling()==NULL || (n2->getPreviousSibling()!=NULL && 
                                           (
                                            n2->getPreviousSibling()->getNodeType()==DOMNode::ELEMENT_NODE || 
                                            n2->getPreviousSibling()->getNodeType()==DOMNode::PROCESSING_INSTRUCTION_NODE ||
                                            n2->getPreviousSibling()->getNodeType()==DOMNode::COMMENT_NODE
                                           )
                                          )) &&
       (n2->getNextSibling()==NULL || (n2->getNextSibling()!=NULL && 
                                       (
                                        n2->getNextSibling()->getNodeType()==DOMNode::ELEMENT_NODE || 
                                        n2->getNextSibling()->getNodeType()==DOMNode::PROCESSING_INSTRUCTION_NODE ||
                                        n2->getNextSibling()->getNodeType()==DOMNode::COMMENT_NODE
                                       )
                                      )))
    {
        //TRACE(_T("skipping ws node %s value '%s'\n"),n2->getNodeName(), n2->getNodeValue());
        n2=n2->getNextSibling();
    }

    if(n1!=NULL || n2!=NULL)
        return false;
    return true;
}
