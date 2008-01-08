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

#include <xqilla/ast/XQFunctionCall.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>

#include <xercesc/util/XMLString.hpp>
#include <xercesc/framework/XMLBuffer.hpp>

XERCES_CPP_NAMESPACE_USE;

XQFunctionCall::XQFunctionCall(const XMLCh *qname, VectorOfASTNodes *args, XPath2MemoryManager *mm)
  : ASTNodeImpl(mm),
    qname_(qname),
    args_(args ? args : new (mm) VectorOfASTNodes(XQillaAllocator<ASTNode*>(mm)))
{
  setType(ASTNode::FUNCTION_CALL);
}

ASTNode* XQFunctionCall::staticResolution(StaticContext *context) 
{
  const XMLCh *prefix = XPath2NSUtils::getPrefix(qname_, context->getMemoryManager());
  const XMLCh *name = XPath2NSUtils::getLocalName(qname_);

  const XMLCh *uri = 0;
  if(prefix == 0 || *prefix == 0) {
    uri = context->getDefaultFuncNS();
  }
  else {
    uri = context->getUriBoundToPrefix(prefix, this);
  }

  ASTNode *result = context->lookUpFunction(uri, name, *args_);
  if(result == 0) {
    XMLBuffer buf;
    buf.set(X("A function called {"));
    buf.append(uri);
    buf.append(X("}"));
    buf.append(name);
    buf.append(X(" with "));
    XMLCh szNumBuff[20];
    XMLString::binToText(args_ ? (unsigned int)args_->size() : 0, szNumBuff, 19, 10);
    buf.append(szNumBuff);
    buf.append(X(" arguments is not defined [err:XPST0017]"));

    XQThrow(StaticErrorException, X("XQFunctionCall::staticResolution"), buf.getRawBuffer());
  }
  result->setLocationInfo(this);
  return result->staticResolution(context);
}

ASTNode *XQFunctionCall::staticTyping(StaticContext *context)
{
  // Should never happen
  return this;
}

Result XQFunctionCall::createResult(DynamicContext* context, int flags) const
{
  // Should never happen
  return 0;
}
