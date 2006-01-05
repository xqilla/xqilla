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

#include "TestSuiteRunner.hpp"
#include "TestSuiteParser.hpp"
#include "TestSuiteResultListener.hpp"

#include <iostream>

#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <xercesc/util/BinFileInputStream.hpp>
#include <xercesc/framework/URLInputSource.hpp>
#include <xercesc/framework/MemBufInputSource.hpp>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif
using namespace std;

string loadExpectedResult(const string &file);
bool compareNodes(DOMNode* node1, DOMNode* node2);

void TestSuiteRunner::testResults(const TestCase &testCase, const std::string &xmlResult) const
{
  if(testCase.outputFiles.empty() && !testCase.expectedErrors.empty()) {
    m_results->reportFailNoError(testCase, xmlResult);
  }
  else {
    bool passed = false;
    string compareMethod, expectedResult, outputResult;
    for(map<string, string>::const_iterator i=testCase.outputFiles.begin();i!=testCase.outputFiles.end();i++) {
      compareMethod=(*i).second;
      expectedResult = loadExpectedResult((*i).first);

      if(compareMethod=="Text" || compareMethod=="Fragment" || compareMethod=="XML") {
        outputResult = xmlResult;
        if(compareMethod=="Text" || compareMethod=="Fragment") {
          expectedResult="<wrapper>"+expectedResult+"</wrapper>";
          outputResult="<wrapper>"+outputResult+"</wrapper>";
        }

        try {
          XercesDOMParser parser;
          parser.setDoNamespaces(true);

          MemBufInputSource memSrc1((XMLByte*)outputResult.c_str(), outputResult.size(), "", false);
          parser.parse(memSrc1);
          DOMDocument* doc1 = parser.getDocument();

          MemBufInputSource memSrc2((XMLByte*)expectedResult.c_str(), expectedResult.size(), "", false);
          parser.parse(memSrc2);
          DOMDocument* doc2 = parser.getDocument();
          passed = compareNodes(doc1, doc2);
        }
        catch(...) {}

        if(passed) break;
      }
      else if(compareMethod == "Inspect") {
        // Do nothing - this is reported below
      }
      else {
        // TODO
        cout << "Test-case '" << testCase.name << "': Unsupported comparison method " << compareMethod << endl;
      }
    }

    if(passed) {
      m_results->reportPass(testCase);
    }
    else if(compareMethod == "Inspect") {
      m_results->reportInspect(testCase, xmlResult, expectedResult);
    }
    else {
      m_results->reportFail(testCase, outputResult, expectedResult);
    }
  }
}

void TestSuiteRunner::testErrors(const TestCase &testCase, const std::string &actualError) const
{
  if(testCase.expectedErrors.empty()) {
    m_results->reportFailUnexpectedError(testCase, actualError);
  }
  else {
    bool bFound = false;
    for(list<string>::const_iterator i=testCase.expectedErrors.begin();i!=testCase.expectedErrors.end();i++) {
      if(actualError.find(*i) != string::npos) {
        bFound = true;
        break;
      }
    }

    if(bFound) {
      m_results->reportPass(testCase);
    }
    else {
      m_results->reportFailUnexpectedError(testCase, actualError);
    }
  }
}

string loadExpectedResult(const string &file) {
  string expectedResult;

  Janitor<BinFileInputStream> stream((BinFileInputStream*)URLInputSource(file.c_str()).makeStream());
  unsigned int dwSize=stream->getSize();
  expectedResult.resize(dwSize);
  stream->readBytes((XMLByte*)expectedResult.c_str(), dwSize);
  if(dwSize>3 && 
     ((unsigned char)expectedResult[0])==0xEF && 
     ((unsigned char)expectedResult[1])==0xBB && 
     ((unsigned char)expectedResult[2])==0xBF)
    expectedResult.erase(0,3);

  for(string::iterator c=expectedResult.begin();c!=expectedResult.end();c++)
    if(*c==0xD)
      c=expectedResult.erase(c)-1;
  while(expectedResult.size()>0 && expectedResult[expectedResult.size()-1]==0xA)
    expectedResult.erase(expectedResult.size()-1);

  return expectedResult;
}

bool isIgnorableWS(DOMNode* node)
{
   if(node!=NULL &&
       node->getNodeType()==DOMNode::TEXT_NODE && 
       XMLString::isAllWhiteSpace(node->getNodeValue()) &&
       (node->getPreviousSibling()==NULL || (node->getPreviousSibling()!=NULL && 
                                           (
                                            node->getPreviousSibling()->getNodeType()==DOMNode::ELEMENT_NODE || 
                                            node->getPreviousSibling()->getNodeType()==DOMNode::PROCESSING_INSTRUCTION_NODE ||
                                            node->getPreviousSibling()->getNodeType()==DOMNode::COMMENT_NODE
                                           )
                                           )) &&
       (node->getNextSibling()==NULL || (node->getNextSibling()!=NULL && 
                                       (
                                        node->getNextSibling()->getNodeType()==DOMNode::ELEMENT_NODE || 
                                        node->getNextSibling()->getNodeType()==DOMNode::PROCESSING_INSTRUCTION_NODE ||
                                        node->getNextSibling()->getNodeType()==DOMNode::COMMENT_NODE 
                                       )
                                      )))
     return true;
   return false;
 }

bool compareNodes(DOMNode* node1, DOMNode* node2)
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
        if(isIgnorableWS(n1))
        {
            //TRACE(_T("skipping ws node %s value '%s'\n"),n1->getNodeName(), n1->getNodeValue());
            n1=n1->getNextSibling();
        }
        if(isIgnorableWS(n2))
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
    if(isIgnorableWS(n1))
    {
        //TRACE(_T("skipping ws node %s value '%s'\n"),n1->getNodeName(), n1->getNodeValue());
        n1=n1->getNextSibling();
    }
    if(isIgnorableWS(n2))
    {
        //TRACE(_T("skipping ws node %s value '%s'\n"),n2->getNodeName(), n2->getNodeValue());
        n2=n2->getNextSibling();
    }

    if(n1!=NULL || n2!=NULL)
        return false;
    return true;
}
