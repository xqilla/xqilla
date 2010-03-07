/*
 * Copyright (c) 2001, 2008,
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004, 2010,
 *     Oracle and/or its affiliates. All rights reserved.
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
 */

#include <xqilla/simple-api/XQilla.hpp>
#include <xqilla/simple-api/XQQuery.hpp>
#include <xqilla/exceptions/ContextException.hpp>
#include <xqilla/utils/XQillaPlatformUtils.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/XQException.hpp>
#include <xqilla/fastxdm/FastXDMConfiguration.hpp>
#include <xqilla/optimizer/QueryPathTreeGenerator.hpp>
#include <xqilla/optimizer/PartialEvaluator.hpp>
#include <xqilla/optimizer/StaticTyper.hpp>
#include <xqilla/optimizer/CoreTranslator.hpp>
#include <xqilla/debug/DebugHookDecorator.hpp>
#include <xqilla/utils/PrintAST.hpp>
#include "../lexer/XQLexer.hpp"
#include "../lexer/XSLT2Lexer.hpp"

#include <xqilla/context/impl/XQContextImpl.hpp>

#include <xercesc/util/XMLURL.hpp>
#include <xercesc/framework/MemBufInputSource.hpp>
#include <xercesc/framework/URLInputSource.hpp>
#include <xercesc/framework/LocalFileInputSource.hpp>
#include <xercesc/util/Janitor.hpp>

XERCES_CPP_NAMESPACE_USE;

XQilla::XQilla(MemoryManager *memMgr)
{
  XQillaPlatformUtils::initialize(memMgr);
}

XQilla::~XQilla()
{
  XQillaPlatformUtils::terminate();
}

Optimizer *XQilla::createOptimizer(DynamicContext *context, unsigned int flags)
{
  Optimizer *optimizer = 0;

  if((flags & NO_STATIC_RESOLUTION) == 0) {
//     optimizer = new PrintASTOptimizer("Initial", context, optimizer);
    optimizer = new CoreTranslator(context, optimizer);
//     optimizer = new PrintASTOptimizer("After core translation", context, optimizer);
    optimizer = new StaticResolver(context, optimizer);
//     optimizer = new PrintASTOptimizer("After static resolution", context, optimizer);
    optimizer = new StaticTyper(context, optimizer);
//     optimizer = new PrintASTOptimizer("After static typing", context, optimizer);

    if((flags & NO_OPTIMIZATION) == 0) {
      optimizer = new PartialEvaluator(context, optimizer);
//       optimizer = new PrintASTOptimizer("After partial evaluation", context, optimizer);
      optimizer = new StaticTyper(context, optimizer);
//       optimizer = new PrintASTOptimizer("After static typing (2)", context, optimizer);
      optimizer = new QueryPathTreeGenerator(context, optimizer);
    }
    if((flags & DEBUG_QUERY) != 0) {
      optimizer = new DebugHookDecorator(context, optimizer);
    }
  }

  return optimizer;
}

XQQuery* XQilla::parse(const XMLCh* inputQuery, DynamicContext* context,
                       const XMLCh* queryFile, unsigned int flags,
                       MemoryManager *memMgr)
{
  if(context != 0 && (context->getLanguage() & XQilla::XSLT2) != 0) {
    MemBufInputSource src((XMLByte*)inputQuery, XMLString::stringLen(inputQuery) * sizeof(XMLCh), queryFile);
    src.setEncoding(XMLUni::fgUTF16EncodingString);
    return parse(src, context, flags, memMgr);
  }

  bool contextOwned = (flags & NO_ADOPT_CONTEXT) == 0;
  if(context == 0) {
    contextOwned = true;
    context = createContext(XQilla::XQUERY, 0, memMgr);
  }

  Janitor<XQQuery> query(new (memMgr) XQQuery(inputQuery, context, contextOwned, memMgr));
  query->setFile(queryFile);

  XQLexer lexer(context->getMemoryManager(), queryFile, inputQuery, context->getLanguage());

  XQParserArgs args(&lexer, query.get());
  XQParser::yyparse(&args);

  AutoDelete<Optimizer> optGuard(createOptimizer(context, flags));
  if(optGuard.get())
    optGuard->startOptimize(args._query);

  return query.release();
}

XQQuery* XQilla::parse(const InputSource& querySrc, DynamicContext* context,
                       unsigned int flags, MemoryManager *memMgr)
{
  if(context == 0 || (context->getLanguage() & XQilla::XSLT2) == 0) {
    XMLBuffer moduleText;
    try {
      if(!readQuery(querySrc, memMgr, moduleText)) {
        XMLBuffer buf;
        buf.set(X("Cannot read query content from "));
        buf.append(querySrc.getSystemId());
        buf.append(X(" [err:XQST0059]"));
        XQThrow2(ContextException,X("XQilla::parse"), buf.getRawBuffer());
      }
    }
    catch(XMLException& e) {
      XMLBuffer buf;
      buf.set(X("Exception reading query content: "));
      buf.append(e.getMessage());
      XQThrow2(ContextException,X("XQilla::parse"), buf.getRawBuffer());
    }

    return parse(moduleText.getRawBuffer(), context, querySrc.getSystemId(), flags, memMgr);
  }

  bool contextOwned = (flags & NO_ADOPT_CONTEXT) == 0;

  Janitor<XQQuery> query(new (memMgr) XQQuery(0, context, contextOwned, memMgr));
  query->setFile(querySrc.getSystemId());

#ifdef HAVE_FAXPP
  FAXPPXSLT2Lexer lexer(context, querySrc, context->getLanguage());
#else
  XercesXSLT2Lexer lexer(context, querySrc, context->getLanguage());
#endif

  XQParserArgs args(&lexer, query.get());
  XQParser::yyparse(&args);

  AutoDelete<Optimizer> optGuard(createOptimizer(context, flags));
  if(optGuard.get())
    optGuard->startOptimize(args._query);

  return query.release();
}

XQQuery* XQilla::parseFromURI(const XMLCh* queryFile, DynamicContext* context,
                              unsigned int flags, MemoryManager *memMgr)
{
  Janitor<InputSource> srcToFill(0);
  try {
    XMLURL urlTmp(queryFile);
    if(urlTmp.isRelative())
      throw MalformedURLException(__FILE__, __LINE__, XMLExcepts::URL_NoProtocolPresent);
    srcToFill.reset(new (memMgr) URLInputSource(urlTmp));
  }
  catch(const MalformedURLException&) {
    srcToFill.reset(new (memMgr) LocalFileInputSource(queryFile));
  }
  return parse(*srcToFill.get(), context, flags, memMgr);
}

static FastXDMConfiguration _gDefaultConfiguration;

DynamicContext *XQilla::createContext(Language language, XQillaConfiguration *conf,
                                      MemoryManager *memMgr)
{
  if(conf == 0) conf = &_gDefaultConfiguration;
  DynamicContext *result = new (memMgr) XQContextImpl(conf, language, memMgr);
  conf->populateStaticContext(result);
  return result;
}

bool XQilla::readQuery(const XMLCh* queryFile, MemoryManager* memMgr, XMLBuffer& queryText)
{
    Janitor<InputSource> srcToFill(NULL);
    try {
      XMLURL urlTmp(queryFile);
      if (urlTmp.isRelative())
        throw MalformedURLException(__FILE__, __LINE__, XMLExcepts::URL_NoProtocolPresent);
      srcToFill.reset(new (memMgr) URLInputSource(urlTmp));
    }
    catch(const MalformedURLException&) {
      srcToFill.reset(new (memMgr) LocalFileInputSource(queryFile));
    }
    return readQuery(*srcToFill.get(), memMgr, queryText);
}

bool XQilla::readQuery(const InputSource& querySrc, MemoryManager* memMgr, XMLBuffer& queryText)
{
  return XPath2Utils::readSource(querySrc, memMgr, queryText, /*sniffEncoding*/true);
}

void XQilla::compileDelayedModule(const XMLCh* queryFile, MemoryManager* memMgr)
{
  XMLBuffer buffer;
  if(!readQuery(queryFile, memMgr, buffer)) {
    XMLBuffer buf;
    buf.set(X("Cannot read query content from "));
    buf.append(queryFile);
    buf.append(X(" [err:XQST0059]"));
    XQThrow2(ContextException,X("XQilla::compileDelayedModule"), buf.getRawBuffer());
  }

  Janitor<InputSource> srcToFill(new (memMgr) LocalFileInputSource(queryFile));

  DynamicContext *context = XQilla::createContext(XQilla::XQUERY, 0, memMgr);
  AutoDelete<XQQuery> query(new (memMgr) XQQuery(0, context, true, memMgr));

  XPath2MemoryManager *mm = context->getMemoryManager();
  query->setFile(queryFile);
  
  XQLexer lexer(mm, _LANG_DELAYEDMODULE_, queryFile, 1, 1, buffer.getRawBuffer());
  XQParserArgs args(&lexer, query.get());
  XQParser::yyparse(&args);
}
