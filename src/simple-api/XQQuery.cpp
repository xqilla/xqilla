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

//////////////////////////////////////////////////////////////////////
// XQQuery.cpp: implementation of the XQQuery class.
//////////////////////////////////////////////////////////////////////

#include <xqilla/simple-api/XQQuery.hpp>
#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/simple-api/XQilla.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/impl/XQContextImpl.hpp>
#include <xqilla/context/XQDebugCallback.hpp>
#include <xqilla/context/XQScopedNamespace.hpp>
#include <xqilla/context/VariableStore.hpp>
#include <xqilla/context/VariableTypeStore.hpp>
#include <xqilla/functions/FunctionLookup.hpp>
#include <xqilla/functions/XQUserFunction.hpp>
#include <xqilla/exceptions/XQException.hpp>
#include <xqilla/exceptions/XPath2ErrorException.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/ast/XQGlobalVariable.hpp>
#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>
#include <xqilla/runtime/Result.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
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
    m_userDefVars(XQillaAllocator<XQGlobalVariable*>(memMgr)),
    m_importedUserDefVars(XQillaAllocator<ImportedVariable>(memMgr)),
    m_importedModules(XQillaAllocator<ImportedModule>(memMgr))
{
}

XQQuery::~XQQuery()
{
    for(ImportedModules::iterator it=m_importedModules.begin();it!=m_importedModules.end();it++)
    {
        delete it->first;
        delete it->second;
    }
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
    return new QueryResult(this);
  }
}

void XQQuery::staticResolution(StaticContext *context)
{
  if(context == 0) context = m_context;

  // Run staticResolutionStage1 on the user defined functions,
  // which gives them the static type they were defined with
  UserFunctions::iterator i;
  for(i = m_userDefFns.begin(); i != m_userDefFns.end(); ++i) {
    if(getIsLibraryModule() && !XERCES_CPP_NAMESPACE::XMLString::equals((*i)->getURI(), getModuleTargetNamespace()))
      XQThrow(StaticErrorException,X("XQQuery::staticResolution"), X("Every function in a module must be in the module namespace [err:XQST0048]."));
    (*i)->staticResolutionStage1(context);
  }

  // Run staticResolution on the global variables
  for(ImportedVariables::iterator it = m_importedUserDefVars.begin(); it != m_importedUserDefVars.end(); ++it) {
    context->getVariableTypeStore()->declareGlobalVar(it->first->getVariableURI(), it->first->getVariableLocalName(), it->first->getVariableExpr()->getStaticResolutionContext());
  }
  if(!m_userDefVars.empty())
  {
    GlobalVariables::iterator itVar;
    for(itVar = m_userDefVars.begin(); itVar != m_userDefVars.end(); ++itVar) {
      (*itVar) = (XQGlobalVariable*)(*itVar)->staticResolution(context);
      if(getIsLibraryModule() && !XERCES_CPP_NAMESPACE::XMLString::equals((*itVar)->getVariableURI(), getModuleTargetNamespace()))
      XQThrow(StaticErrorException,X("XQQuery::staticResolution"), X("Every global variable in a module must be in the module namespace [err:XQST0048]."));
    }
    // check for duplicate variable declarations
    for(itVar = m_userDefVars.begin(); itVar != m_userDefVars.end(); ++itVar) 
    {
      if(itVar != m_userDefVars.end())
      for (GlobalVariables::iterator it2 = itVar+1; it2 != m_userDefVars.end(); ++it2) 
      {
        if(XPath2Utils::equals((*itVar)->getVariableURI(), (*it2)->getVariableURI()) &&
           XPath2Utils::equals((*itVar)->getVariableLocalName(), (*it2)->getVariableLocalName()))
        {
          XMLBuffer errMsg;
          errMsg.set(X("A variable with name {"));
            errMsg.append((*itVar)->getVariableURI());
          errMsg.append(X("}"));
            errMsg.append((*itVar)->getVariableLocalName());
          errMsg.append(X(" has already been declared [err:XQST0049]"));
          XQThrow(StaticErrorException,X("XQQuery::staticResolution"), errMsg.getRawBuffer());
        }
      }
      for (ImportedVariables::iterator it3 = m_importedUserDefVars.begin(); it3 != m_importedUserDefVars.end(); ++it3) 
      {
        if(XPath2Utils::equals((*itVar)->getVariableURI(), (it3->first)->getVariableURI()) &&
           XPath2Utils::equals((*itVar)->getVariableLocalName(), (it3->first)->getVariableLocalName()))
        {
          XMLBuffer errMsg;
          errMsg.set(X("A variable with name {"));
          errMsg.append((*itVar)->getVariableURI());
          errMsg.append(X("}"));
          errMsg.append((*itVar)->getVariableLocalName());
          errMsg.append(X(" has already been imported from a module [err:XQST0049]"));
          XQThrow(StaticErrorException,X("XQQuery::staticResolution"), errMsg.getRawBuffer());
        }
      }
    }
  }

  // Run staticResolutionStage2 on the user defined functions,
  // which calculates a better type for them, and statically
  // resolves their function bodies
  for(i = m_userDefFns.begin(); i != m_userDefFns.end(); ++i) {
      try {
        (*i)->staticResolutionStage2(context);
      } catch(XQException& e) {
        XMLBuffer errMsg;
        errMsg.set(X("Error while running static resolution on user-defined function {"));
        errMsg.append((*i)->getURI());
        errMsg.append(X("}"));
        errMsg.append((*i)->getName());
        errMsg.append(X(": "));
        errMsg.append(e.getError());
        XQThrow(StaticErrorException,X("XQQuery::staticResolution"), errMsg.getRawBuffer());
      }
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

class LoopDetector : public XMLEntityResolver
{
public:
    LoopDetector(XMLEntityResolver* pParent, const XMLCh* myModuleURI) 
    {
        m_pParentResolver=pParent;
        m_PreviousModuleNamespace=myModuleURI;
    }

    virtual InputSource* resolveEntity(XMLResourceIdentifier* resourceIdentifier)
    {
        if(resourceIdentifier->getResourceIdentifierType()==XMLResourceIdentifier::UnKnown &&
            XPath2Utils::equals(resourceIdentifier->getNameSpace(), m_PreviousModuleNamespace))
        {
            XMLBuffer buf;
            buf.set(X("The graph of module imports contains a cycle for namespace '"));
            buf.append(resourceIdentifier->getNameSpace());
            buf.append(X("' [err:XQST0073]"));
            XQThrow(StaticErrorException, X("XQQuery::ImportModule"), buf.getRawBuffer());
        }
        if(m_pParentResolver)
            return m_pParentResolver->resolveEntity(resourceIdentifier);
        return NULL;
    }

protected:
    XMLEntityResolver* m_pParentResolver;
    const XMLCh* m_PreviousModuleNamespace;
};

void XQQuery::importModuleImpl(const XMLCh* szUri, InputSource* location, StaticContext* context)
{
  XQilla xqilla;

  DynamicContext* moduleCtx=xqilla.createContext(context->getMemoryManager());
  // force the context to use our memory manager
  moduleCtx->setMemoryManager(context->getMemoryManager());
  // we also need to fix the namespace resolver, because it has already been initialized using the internal memory manager
  moduleCtx->setNSResolver(new (context->getMemoryManager()) XQScopedNamespace(context->getMemoryManager(), moduleCtx->getNSResolver()));
  // propagate debug settings
  moduleCtx->enableDebugging(context->isDebuggingEnabled());
  moduleCtx->setBaseURI(location->getSystemId());
  LoopDetector loopDetector(context->getXMLEntityResolver(), szUri);
  moduleCtx->setXMLEntityResolver(&loopDetector);

  XQQuery* pParsedQuery=xqilla.parse(*location, XQilla::XQUERY, moduleCtx, XQilla::NO_ADOPT_CONTEXT);
  m_importedModules.push_back(ImportedModule(pParsedQuery, moduleCtx));

  if(!pParsedQuery->getIsLibraryModule()) {
    XMLBuffer buf(1023,context->getMemoryManager());
    buf.set(X("The module at "));
    buf.append(location->getSystemId());
    buf.append(X(" is not a module"));
    XQThrow(StaticErrorException, X("XQQuery::ImportModule"), buf.getRawBuffer());
  }
  if(!XERCES_CPP_NAMESPACE::XMLString::equals(szUri,pParsedQuery->getModuleTargetNamespace())) {
    XMLBuffer buf(1023,context->getMemoryManager());
    buf.set(X("The module at "));
    buf.append(location->getSystemId());
    buf.append(X(" specifies a different namespace [err:XQST0059]"));
    XQThrow(StaticErrorException, X("XQQuery::ImportModule"), buf.getRawBuffer());
  }
  // now move the variable declarations and the function definitions into my context
  for(UserFunctions::iterator itFn = pParsedQuery->m_userDefFns.begin(); itFn != pParsedQuery->m_userDefFns.end(); ++itFn) {
    context->addCustomFunction(*itFn);
  }
  for(GlobalVariables::iterator itVar = pParsedQuery->m_userDefVars.begin(); itVar != pParsedQuery->m_userDefVars.end(); ++itVar) {
    for(ImportedVariables::iterator it = m_importedUserDefVars.begin(); it != m_importedUserDefVars.end(); ++it) {
      if(XPath2Utils::equals((it->first)->getVariableURI(), (*itVar)->getVariableURI()) &&
         XPath2Utils::equals((it->first)->getVariableLocalName(), (*itVar)->getVariableLocalName()))
      {
        XMLBuffer buf(1023,context->getMemoryManager());
        buf.set(X("An imported variable {"));
        buf.append((*itVar)->getVariableURI());
        buf.append(X("}"));
        buf.append((*itVar)->getVariableLocalName());
        buf.append(X(" conflicts with an already defined global variable [err:XQST0049]."));
        XQThrow(StaticErrorException, X("XQQuery::ImportModule"), buf.getRawBuffer());
      }
    }
    // Should this set a global variable in the context? - jpcs
    m_importedUserDefVars.push_back(ImportedVariable(*itVar, moduleCtx));
  }
  moduleCtx->setXMLEntityResolver(NULL);
}

void XQQuery::importModule(const XMLCh* szUri, VectorOfStrings* locations, StaticContext* context)
{
  for(ImportedModules::iterator it=m_importedModules.begin();it!=m_importedModules.end();it++)
  {
      if(XPath2Utils::equals(it->first->getModuleTargetNamespace(),szUri))
      {
          XMLBuffer buf(1023,context->getMemoryManager());
          buf.set(X("Module for namespace '"));
          buf.append(szUri);
          buf.append(X("' has already been imported [err:XQST0047]"));
          XQThrow(StaticErrorException, X("XQQuery::ImportModule"), buf.getRawBuffer());
      }
  }
  if(locations==NULL)
  {
      InputSource* srcToUse = 0;
      if (context->getDocumentCache()->getXMLEntityResolver())
      {
        XMLResourceIdentifier resourceIdentifier(XMLResourceIdentifier::UnKnown,
                                                 XMLUni::fgZeroLenString, szUri, XMLUni::fgZeroLenString, 
                                                 context->getBaseURI());
        srcToUse = context->getDocumentCache()->getXMLEntityResolver()->resolveEntity(&resourceIdentifier);
      }
      if(srcToUse==NULL)
      {
        XMLBuffer buf(1023,context->getMemoryManager());
        buf.set(X("Cannot locate module for namespace "));
        buf.append(szUri);
        buf.append(X(" without the 'at <location>' keyword [err:XQST0059]"));
		XQThrow(StaticErrorException,X("XQQuery::ImportModule"), buf.getRawBuffer());
      }
      Janitor<InputSource> janIS(srcToUse);
      importModuleImpl(szUri, srcToUse, context);
  }
  else
  {
    XQException* lastExc=NULL;
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
      try {
        importModuleImpl(szUri, srcToUse, context);
        bFound=true;
        break;
      }
      catch(XQException& e) {
        if(lastExc!=NULL)
          delete lastExc;
        lastExc=new XQException(e);
      }
    }
    if(!bFound)
    {
      if(lastExc!=NULL)
      {
        XQException toThrow(*lastExc);
        delete lastExc;
        throw toThrow;
      }
      else
      {
        XMLBuffer buf(1023,context->getMemoryManager());
        buf.set(X("Cannot locate the module for namespace \""));
        buf.append(szUri);
        buf.append(X("\" [err:XQST0059]"));
        XQThrow(StaticErrorException,X("XQQuery::ImportModule"), buf.getRawBuffer());
      }
    }
    else if(lastExc!=NULL)
      delete lastExc;
  }
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

XQQuery::QueryResult::QueryResult(const XQQuery *query)
  : _query(query),
    _parent(0),
    _toDo(true)
{
}

Item::Ptr XQQuery::QueryResult::next(DynamicContext *context)
{
  if(_toDo) {
    _toDo = false;

    // define global variables
    for(ImportedModules::const_iterator it = _query->m_importedModules.begin(); it != _query->m_importedModules.end(); ++it)
    {
        it->first->execute(it->second)->next(it->second);
    }
    for(ImportedVariables::const_iterator it2 = _query->m_importedUserDefVars.begin(); it2 != _query->m_importedUserDefVars.end(); ++it2)
    {
        std::pair<bool,Sequence> value=it2->second->getVariableStore()->getGlobalVar(it2->first->getVariableURI(), it2->first->getVariableLocalName(), it2->second);
        assert(value.first);
        context->getVariableStore()->setGlobalVar(it2->first->getVariableURI(), it2->first->getVariableLocalName(), value.second, context);
    }
    for(GlobalVariables::const_iterator it3 = _query->m_userDefVars.begin(); it3 != _query->m_userDefVars.end(); ++it3)
      (*it3)->collapseTree(context)->toSequence(context);
    if(_query->getQueryBody() != NULL) {
      _parent = _query->getQueryBody()->collapseTree(context);
    }
  }

  Item::Ptr item = _parent->next(context);

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
  oss << _parent->asString(context, indent + 1);
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
    for(ImportedModules::const_iterator it = _query->m_importedModules.begin(); it != _query->m_importedModules.end(); ++it)
    {
        it->first->execute(it->second)->next(it->second);
    }
    for(ImportedVariables::const_iterator it2 = _query->m_importedUserDefVars.begin(); it2 != _query->m_importedUserDefVars.end(); ++it2)
    {
        std::pair<bool,Sequence> value=it2->second->getVariableStore()->getGlobalVar(it2->first->getVariableURI(), it2->first->getVariableLocalName(), it2->second);
        assert(value.first);
        context->getVariableStore()->setGlobalVar(it2->first->getVariableURI(), it2->first->getVariableLocalName(), value.second, context);
    }
    for(GlobalVariables::const_iterator it2 = _query->m_userDefVars.begin(); it2 != _query->m_userDefVars.end(); ++it2)
      (*it2)->collapseTree(context)->toSequence(context);

    if(_query->getQueryBody() != NULL) {
      toFill = _query->getQueryBody()->collapseTree(context)->toSequence(context);
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
