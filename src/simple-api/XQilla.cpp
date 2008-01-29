/*
 * Copyright (c) 2001-2008
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2008
 *     Oracle. All rights reserved.
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

#include <xqilla/simple-api/XQilla.hpp>
#include <xqilla/simple-api/XQQuery.hpp>
#include <xqilla/exceptions/ContextException.hpp>
#include <xqilla/utils/XQillaPlatformUtils.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/XQException.hpp>
#include <xqilla/fastxdm/FastXDMConfiguration.hpp>
#include <xqilla/optimizer/QueryPathTreeGenerator.hpp>
#include "../lexer/XQLexer.hpp"

#include <xqilla/context/impl/XQContextImpl.hpp>

#include <xercesc/util/XMLURL.hpp>
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

XQQuery* XQilla::parse(const XMLCh* inputQuery, DynamicContext* context,
                       const XMLCh* queryFile, unsigned int flags,
                       MemoryManager *memMgr)
{
  bool contextOwned = (flags & NO_ADOPT_CONTEXT) == 0;
  if(context == 0) {
    contextOwned = true;
    context = createContext(XQilla::XQUERY, 0, memMgr);
  }

  Janitor<XQQuery> query(new (memMgr) XQQuery(inputQuery, context, contextOwned, memMgr));

  XQLexer lexer(context->getMemoryManager(), queryFile, inputQuery, context->getLanguage());

  XQParserArgs args;
  args._context = context;
  args._lexer = &lexer;
  args._query = query.get();
  args._query->setFile(queryFile);

  XQParser::yyparse(&args);

  // Perform static resolution, if requested
  if((flags & NO_STATIC_RESOLUTION) == 0) {
    StaticResolver *sr = new StaticResolver(context);
    QueryPathTreeGenerator *qpt = new QueryPathTreeGenerator(context, sr);
    AutoDelete<Optimizer> optimizer(qpt);
    optimizer->startOptimize(args._query);
  }

  return query.release();
}

XQQuery* XQilla::parse(const InputSource& querySrc, DynamicContext* context,
                       unsigned int flags, MemoryManager *memMgr)
{
  XMLBuffer moduleText;
  try {
    if(!readQuery(querySrc, memMgr, moduleText)) {
      XMLBuffer buf(1023,context->getMemoryManager());
      buf.set(X("Cannot read query content from "));
      buf.append(querySrc.getSystemId());
      buf.append(X(" [err:XQST0059]"));
      XQThrow2(ContextException,X("XQilla::parse"), buf.getRawBuffer());
    }
  }
  catch(XMLException& e) {
    XMLBuffer buf(1023,context->getMemoryManager());
    buf.set(X("Exception reading query content: "));
    buf.append(e.getMessage());
    XQThrow2(ContextException,X("XQilla::parse"), buf.getRawBuffer());
  }

  return parse(moduleText.getRawBuffer(), context, querySrc.getSystemId(), flags, memMgr);
}

XQQuery* XQilla::parseFromURI(const XMLCh* queryFile, DynamicContext* context,
                              unsigned int flags, MemoryManager *memMgr)
{
  XMLBuffer moduleText;
  try {
    if(!readQuery(queryFile, memMgr, moduleText)) {
      XMLBuffer buf(1023,context->getMemoryManager());
      buf.set(X("Cannot read query content from "));
      buf.append(queryFile);
      buf.append(X(" [err:XQST0059]"));
      XQThrow2(ContextException,X("XQilla::parseFromURI"), buf.getRawBuffer());
    }
  }
  catch(XMLException& e) {
    XMLBuffer buf(1023,context->getMemoryManager());
    buf.set(X("Exception reading query content: "));
    buf.append(e.getMessage());
    XQThrow2(ContextException,X("XQilla::parseFromURI"), buf.getRawBuffer());
  }

  return parse(moduleText.getRawBuffer(), context, queryFile, flags, memMgr);
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
