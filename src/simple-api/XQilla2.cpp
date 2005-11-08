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
 * Please see the file LICENSE for more information.
 *
 * $Id$
 */

//////////////////////////////////////////////////////////////////////
// XQEvaluator.cpp: implementation of the XQEvaluator class.
//////////////////////////////////////////////////////////////////////

#include <xqilla/simple-api/XQilla.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/simple-api/XQQuery.hpp>
#include <xqilla/context/XQDebugCallback.hpp>
#include <xqilla/exceptions/ContextException.hpp>
#include <xqilla/exceptions/XQException.hpp>
#include "../lexer/LexerDOMStringStream.hpp"
#define yyFlexLexer xxFlexLexer
#include "../lexer/XPathFlexLexer.hpp"
#undef yyFlexLexer
#include "../parser/XPath2ParserControl.hpp"

#include <xercesc/framework/URLInputSource.hpp>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

//Bison hooks
extern int XPathyyparse(void *);

XQQuery* XQilla::parseXPath2(const XMLCh* inputQuery, DynamicContext* context/*=0*/,
                             const XMLCh* queryFile/*=NULL*/, unsigned int flags/*=0*/,
                             MemoryManager *memMgr)
{
  bool contextOwned = (flags & NO_ADOPT_CONTEXT) == 0;
  if(context == 0) {
    contextOwned = true;
    context = createContext();
  }

  XQQuery *query = new (memMgr) XQQuery(inputQuery, context, contextOwned, memMgr);
  query->setFile(queryFile);

  try {
    LexerDOMStringStream lexerStream(inputQuery);
    xxFlexLexer lexer(&lexerStream, &std::cout);

    XPathParserControl args;
    args.context = context;
    args.lexer = &lexer;
    args.memMgr = context->getMemoryManager();

    XPathyyparse((void *)&args);
    query->setQueryBody(args.result);

    // Perform static resolution, if requested
    if((flags & NO_STATIC_RESOLUTION) == 0) {
      query->staticResolution(context);
    }
  }
  catch(XQException& e) {
    // parsing errors and staticResolution don't invoke ReportFirstError, so do it here
    if(context->getDebugCallback() && context->isDebuggingEnabled()) 
      context->getDebugCallback()->ReportFirstError(context, e.getError(), queryFile, e.m_nLine);
    throw XQException(e.getError(),e.m_szFile?e.m_szFile:queryFile,e.m_nLine,e.m_nColumn);
  }
  catch(DSLException& e) {
    if(context->getDebugCallback() && context->isDebuggingEnabled()) 
      context->getDebugCallback()->ReportFirstError(context, e.getError(), queryFile, 0);
    throw XQException(e.getError(),queryFile,0,0);
  }

  return query;
}

XQQuery* XQilla::parseXPath2(const InputSource& querySrc, DynamicContext* context/*=0*/,
                             unsigned int flags/*=0*/, MemoryManager *memMgr)
{
  XMLBuffer moduleText;
  if(!readQuery(querySrc, memMgr, moduleText)) {
    DSLthrow(ContextException,X("XQilla::parse"), X("Exception reading query content"));
  }

  return parseXPath2(moduleText.getRawBuffer(), context, querySrc.getSystemId(), flags, memMgr);
}

XQQuery* XQilla::parseXPath2FromURI(const XMLCh* queryFile, DynamicContext* context/*=0*/,
                                    unsigned int flags/*=0*/, MemoryManager *memMgr)
{
  XMLBuffer moduleText;
  if(!readQuery(queryFile, memMgr, moduleText)) {
    DSLthrow(ContextException,X("XQilla::parseFromUri"), X("Exception reading query content"));
  }

  return parseXPath2(moduleText.getRawBuffer(), context, queryFile, flags, memMgr);
}
