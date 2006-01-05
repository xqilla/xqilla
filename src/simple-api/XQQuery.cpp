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

//////////////////////////////////////////////////////////////////////
// XQQuery.cpp: implementation of the XQQuery class.
//////////////////////////////////////////////////////////////////////

#include <xqilla/simple-api/XQQuery.hpp>
#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/functions/XQUserFunction.hpp>
#include <xqilla/ast/XQGlobalVariable.hpp>
#include <xqilla/context/impl/XQContextImpl.hpp>
#include <xqilla/exceptions/XQException.hpp>
#include <xqilla/simple-api/XQilla.hpp>
#include <xqilla/context/XQDebugCallback.hpp>
#include <xqilla/context/XQScopedNamespace.hpp>
#include <xqilla/functions/FunctionLookup.hpp>
#include <xqilla/exceptions/XPath2ErrorException.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>
#include <xqilla/runtime/Result.hpp>
#include <xqilla/utils/PrintAST.hpp>

#include <xercesc/dom/DOM.hpp>
#include <xercesc/util/XMLUni.hpp>
#include <xercesc/util/XMLURL.hpp>
#include <xercesc/util/XMLResourceIdentifier.hpp>
#include <xercesc/util/XMLEntityResolver.hpp>
#include <xercesc/framework/URLInputSource.hpp>
#include <xercesc/framework/LocalFileInputSource.hpp>
#include <xercesc/util/Janitor.hpp>

#include <sstream>
#include <list>

using namespace std;

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

XQQuery::XQQuery(const XMLCh* queryText, DynamicContext *context, bool contextOwned, MemoryManager *memMgr)
  : m_memMgr(memMgr),
    m_context(context),
    m_contextOwned(contextOwned),
    m_query(NULL),
    m_bIsLibraryModule(false),
    m_szTargetNamespace(NULL),
    m_szQueryText(m_context->getMemoryManager()->getPooledString(queryText)),
    m_szCurrentFile(NULL),
    m_userDefFns(XQillaAllocator<XQUserFunction*>(memMgr)),
    m_userDefVars(XQillaAllocator<XQGlobalVariable*>(memMgr))
{
}

XQQuery::~XQQuery()
{
	if(m_contextOwned)
		delete m_context;
}

DynamicContext *XQQuery::createDynamicContext(MemoryManager *memMgr) const
{
  return m_context->createDynamicContext(memMgr);
}

Result XQQuery::execute(DynamicContext* context) const
{
  if(context->getDebugCallback()) {
    return new DebugResult(this, context);
  }
  else {
    return new QueryResult(this, context);
  }
}

void XQQuery::staticResolution(StaticContext *context)
{
  if(context == 0) context = m_context;

  if(!m_userDefVars.empty())
  {
    GlobalVariables::iterator itVar;
    for(itVar = m_userDefVars.begin(); itVar != m_userDefVars.end(); ++itVar) {
      (*itVar) = (XQGlobalVariable*)(*itVar)->staticResolution(context);
      if(getIsLibraryModule() && !XERCES_CPP_NAMESPACE::XMLString::equals((*itVar)->getVariableURI(), getModuleTargetNamespace()))
      XQThrow(StaticErrorException,X("XQQuery::staticResolution"), X("Every global variable in a module must be in the module namespace [err:XQST0048]."));
    }
    // check for duplicate variable declarations
    for(itVar = m_userDefVars.begin(); itVar != m_userDefVars.end()-1; ++itVar) 
      for (GlobalVariables::iterator it2 = itVar+1; it2 != m_userDefVars.end(); ++it2) 
      {
        if(XPath2Utils::equals((*itVar)->getVariableURI(), (*it2)->getVariableURI()) &&
           XPath2Utils::equals((*itVar)->getVariableLocalName(), (*it2)->getVariableLocalName()))
        {
          XMLBuffer errMsg;
          errMsg.set(X("A variable with name {"));
          errMsg.append((*it2)->getVariableURI());
          errMsg.append(X("}"));
          errMsg.append((*it2)->getVariableLocalName());
          errMsg.append(X(" has already been declared [err:XQST0049]"));
          XQThrow(StaticErrorException,X("XQQuery::ImportModule"), errMsg.getRawBuffer());
        }
      }
  }
  for(UserFunctions::iterator i = m_userDefFns.begin(); i != m_userDefFns.end(); ++i) {
    if(getIsLibraryModule() && !XERCES_CPP_NAMESPACE::XMLString::equals((*i)->getURI(), getModuleTargetNamespace()))
      XQThrow(StaticErrorException,X("XQQuery::staticResolution"), X("Every function in a module must be in the module namespace [err:XQST0048]."));
    (*i)->staticResolution(context);
  }
  if(m_query) m_query = m_query->staticResolution(context);
}

std::string XQQuery::getQueryPlan() const
{
  return PrintAST::print(this, m_context);
}

ASTNode* XQQuery::getQueryBody() const
{
  return m_query;
}

void XQQuery::setQueryBody(ASTNode* query)
{
  m_query=query;
}

void XQQuery::addFunction(XQUserFunction* fnDef)
{
  m_userDefFns.push_back(fnDef);
}

void XQQuery::addVariable(XQGlobalVariable* varDef)
{
  m_userDefVars.push_back(varDef);
}

void XQQuery::setIsLibraryModule(bool bIsModule/*=true*/)
{
  m_bIsLibraryModule=bIsModule;
}

bool XQQuery::getIsLibraryModule() const
{
  return m_bIsLibraryModule;
}

void XQQuery::setModuleTargetNamespace(const XMLCh* uri)
{
  m_szTargetNamespace=uri;
}

const XMLCh* XQQuery::getModuleTargetNamespace() const
{
  return m_szTargetNamespace;
}

void XQQuery::importModule(const XMLCh* szUri, VectorOfStrings* locations, StaticContext* context)
{
  XQilla xqilla;

  AutoDelete<DynamicContext> moduleCtx(xqilla.createContext(context->getMemoryManager()));
  // force the context to use our memory manager
  moduleCtx->setMemoryManager(context->getMemoryManager());
  // we also need to fix the namespace resolver, because it has already been initialized using the internal memory manager
  moduleCtx->setNSResolver(new (context->getMemoryManager()) XQScopedNamespace(context->getMemoryManager(), moduleCtx->getNSResolver()));
  // propagate debug settings
  moduleCtx->enableDebugging(context->isDebuggingEnabled());

  bool bFound=false;
  for(VectorOfStrings::iterator it=locations->begin();it!=locations->end();it++)
  {
      InputSource* srcToUse = 0;
      if (context->getDocumentCache()->getXMLEntityResolver()){
        XMLResourceIdentifier resourceIdentifier(XMLResourceIdentifier::UnKnown,
                                                 *it, szUri, XMLUni::fgZeroLenString, 
                                                 context->getBaseURI());
        srcToUse = context->getDocumentCache()->getXMLEntityResolver()->resolveEntity(&resourceIdentifier);
      }

      if(srcToUse==0)
      {
          try {
            XMLURL urlTmp(context->getBaseURI(), *it);
            if (urlTmp.isRelative()) {
              throw MalformedURLException(__FILE__, __LINE__, XMLExcepts::URL_NoProtocolPresent);
            }
            srcToUse = new URLInputSource(urlTmp);
          }
          catch(const MalformedURLException&) {
            // It's not a URL, so let's assume it's a local file name.
            const XMLCh* baseUri=context->getBaseURI();
            if(baseUri && baseUri[0]) {
              XMLCh* tmpBuf = XMLPlatformUtils::weavePaths(baseUri, *it);
              srcToUse = new LocalFileInputSource(tmpBuf);
              XMLPlatformUtils::fgMemoryManager->deallocate(tmpBuf);
            }
            else {
              srcToUse = new LocalFileInputSource(*it);
            }
          }
      }
      Janitor<InputSource> janIS(srcToUse);
      moduleCtx->setBaseURI(srcToUse->getSystemId());
      try {
        AutoDelete<XQQuery> pParsedQuery(xqilla.parseXQuery(*srcToUse, moduleCtx, XQilla::NO_STATIC_RESOLUTION|XQilla::NO_ADOPT_CONTEXT));
        if(!pParsedQuery->getIsLibraryModule()) {
          XMLBuffer errMsg;
          errMsg.set(X("The module at "));
          errMsg.append(*it);
          errMsg.append(X(" is not a module"));
          XQThrow(StaticErrorException,X("XQQuery::ImportModule"), errMsg.getRawBuffer());
        }
        if(!XERCES_CPP_NAMESPACE::XMLString::equals(szUri,pParsedQuery->getModuleTargetNamespace())) {
          XMLBuffer errMsg;
          errMsg.set(X("The module at "));
          errMsg.append(*it);
          errMsg.append(X(" specifies a different namespace"));
          XQThrow(StaticErrorException,X("XQQuery::ImportModule"), errMsg.getRawBuffer());
        }
        // now move the variable declarations and the function definitions into my context
        for(UserFunctions::iterator itFn = pParsedQuery->m_userDefFns.begin(); itFn != pParsedQuery->m_userDefFns.end(); ++itFn) {
          m_userDefFns.push_back(*itFn);
          context->addCustomFunction(*itFn);
        }
        for(GlobalVariables::iterator itVar = pParsedQuery->m_userDefVars.begin(); itVar != pParsedQuery->m_userDefVars.end(); ++itVar) {
          for(GlobalVariables::iterator it = m_userDefVars.begin(); it != m_userDefVars.end(); ++it) {
             if(XERCES_CPP_NAMESPACE::XMLString::equals((*it)->getVariableURI(), (*itVar)->getVariableURI()) &&
                XERCES_CPP_NAMESPACE::XMLString::equals((*it)->getVariableLocalName(), (*itVar)->getVariableLocalName()))
               XQThrow(StaticErrorException, X("XQQuery::ImportModule"), X("An imported variable conflicts with an already defined global variable [err:XQST0049]."));
          }
          // Should this set a global variable in the context? - jpcs
          m_userDefVars.push_back(*itVar);
        }
        bFound=true;
        break;
      }
      catch(XQException& e) {
        if(e.getXQueryLine() != 0 ||
            e.getXQueryColumn() != 0) {
          // found module, parse error
          throw;
        }
      }
  }
  if(!bFound)
      XQThrow(StaticErrorException,X("XQQuery::ImportModule"), X("Cannot locate the requested module [err:XQST0059]"));
}

const XMLCh* XQQuery::getFile() const
{
	return m_szCurrentFile;
}

void XQQuery::setFile(const XMLCh* file)
{
	m_szCurrentFile=m_context->getMemoryManager()->getPooledString(file);
}

const XMLCh* XQQuery::getQueryText() const
{
    return m_szQueryText;
}

XQQuery::QueryResult::QueryResult(const XQQuery *query, DynamicContext *context)
  : ResultImpl(context),
    _query(query),
    _parent(0),
    _toDo(true)
{
}

Item::Ptr XQQuery::QueryResult::next(DynamicContext *context)
{
  if(_toDo) {
    _toDo = false;

    // define global variables
    for(GlobalVariables::const_iterator it = _query->m_userDefVars.begin(); it != _query->m_userDefVars.end(); ++it)
      (*it)->collapseTree(context).toSequence(context);
    if(_query->getQueryBody() != NULL) {
      _parent = _query->getQueryBody()->collapseTree(context);
    }
  }

  Item::Ptr item = _parent.next(context);

  if(item == NULLRCP) {
    _parent = 0;
  }

  return item;
}

std::string XQQuery::QueryResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<queryresult>" << std::endl;
  oss << _parent.asString(context, indent + 1);
  oss << in << "</queryresult>" << std::endl;

  return oss.str();
}

XQQuery::DebugResult::DebugResult(const XQQuery *query, DynamicContext *context)
  : LazySequenceResult(context),
    _query(query)
{
}

void XQQuery::DebugResult::getResult(Sequence &toFill, DynamicContext *context) const
{
  static XMLCh szMain[]= { chLatin_M, chLatin_a, chLatin_i, chLatin_n, chNull };

  if(context->getDebugCallback()) {
    context->getDebugCallback()->NotifyQueryBegin(context, _query->getQueryText());
    context->getDebugCallback()->EnterFunction(context, _query->getFile(), szMain, 0, 0);
  }

  try
  {
    // define global variables
    for(GlobalVariables::const_iterator it = _query->m_userDefVars.begin(); it != _query->m_userDefVars.end(); ++it)
      (*it)->collapseTree(context).toSequence(context);

    if(_query->getQueryBody() != NULL) {
      toFill = _query->getQueryBody()->collapseTree(context);
    }
  }
  catch(XQException& e)
  {
    if(e.getXQueryFile() == NULL) {
      if(context->getDebugCallback() && context->isDebuggingEnabled()) 
        context->getDebugCallback()->ReportFirstError(context, e.getError(), _query->getFile(), 0);
      e.setXQueryPosition(_query->getFile(), 0, 0);
    }
    throw e;
  }

  if(context->getDebugCallback()) {
    context->getDebugCallback()->ExitFunction(context, szMain);
    context->getDebugCallback()->NotifyQueryEnd(context, toFill);
  }
}

std::string XQQuery::DebugResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<debugresult/>" << std::endl;

  return oss.str();
}
