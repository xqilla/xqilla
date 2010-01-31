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

#ifndef _FUNCTIONMATCHES_HPP
#define _FUNCTIONMATCHES_HPP

#include <xqilla/ast/ConstantFoldingFunction.hpp>
#include <xercesc/util/ParseException.hpp>


//#if defined(XERCES_HAS_CPP_NAMESPACE)
//XERCES_CPP_NAMESPACE_USE
//#endif

XERCES_CPP_NAMESPACE_BEGIN
//class ParseExcpetion;
class XMLException;
class RegularExpression;

XERCES_CPP_NAMESPACE_END


class XQILLA_API FunctionMatches : public ConstantFoldingFunction {
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionMatches(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);

  virtual ASTNode *staticTypingImpl(StaticContext *context);

  /** XPath function: returns true if string1 matches the regExp supplied as string2, otherwise returns false. **/
  Sequence createSequence(DynamicContext* context, int flags = 0) const;

  static bool matches(const XMLCh *input, const XMLCh *pattern, const XMLCh *options = 0);
  static bool matches(const XMLCh *input, XERCES_CPP_NAMESPACE_QUALIFIER RegularExpression* regExp);

  XERCES_CPP_NAMESPACE_QUALIFIER RegularExpression* getRegExp() {
    return regExp_;
  };
  void copyRegExp(FunctionMatches *source, XPath2MemoryManager* memMgr);

private:
  //if a regular expession is a constant, then we will store a compiled regexp here,
  //and also pattern, and options if presented. We need those values when copying this function
  XERCES_CPP_NAMESPACE_QUALIFIER RegularExpression *regExp_;
  const XMLCh *pattern_;
  const XMLCh *options_;
  //helper functions
  void checkRegexpOpts(const XMLCh* opts) const;
  void processParseException(XERCES_CPP_NAMESPACE_QUALIFIER ParseException &e, XPath2MemoryManager* memMgr) const;
  void processXMLException(XERCES_CPP_NAMESPACE_QUALIFIER XMLException &e) const;
};

#endif
