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

#include <sstream>

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/functions/XQUserFunction.hpp>
#include <xqilla/functions/FunctionConstructor.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/exceptions/XPath2TypeMatchException.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>
#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/ast/XQVariable.hpp>
#include <xqilla/context/VariableStore.hpp>
#include <xqilla/context/VariableTypeStore.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/ContextHelpers.hpp>
#include <xqilla/ast/XQTreatAs.hpp>
#include <xqilla/update/PendingUpdateList.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>
#include <xqilla/runtime/ClosureResult.hpp>
#include <xqilla/optimizer/ASTVisitor.hpp>

#include <xercesc/util/XMLString.hpp>
#include <xercesc/framework/XMLBuffer.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xercesc/validators/datatype/DatatypeValidator.hpp>

XERCES_CPP_NAMESPACE_USE;

 /* http://www.w3.org/2005/xquery-local-functions */
const XMLCh XQUserFunction::XMLChXQueryLocalFunctionsURI[] =
{
    chLatin_h,       chLatin_t,       chLatin_t, 
    chLatin_p,       chColon,         chForwardSlash, 
    chForwardSlash,  chLatin_w,       chLatin_w, 
    chLatin_w,       chPeriod,        chLatin_w,
    chDigit_3,       chPeriod,        chLatin_o, 
    chLatin_r,       chLatin_g,       chForwardSlash, 
    chDigit_2,       chDigit_0,       chDigit_0, 
    chDigit_5,       chForwardSlash,  chLatin_x,
    chLatin_q,       chLatin_u,       chLatin_e,
    chLatin_r,       chLatin_y,       chDash, 
    chLatin_l,       chLatin_o,       chLatin_c,
    chLatin_a,       chLatin_l,       chDash, 
    chLatin_f,       chLatin_u,       chLatin_n,
    chLatin_c,       chLatin_t,       chLatin_i,
    chLatin_o,       chLatin_n,       chLatin_s,
    chNull
};

XQUserFunction::XQUserFunction(const XMLCh *qname, ArgumentSpecs *argSpecs, ASTNode *body,
                               SequenceType *returnType, bool isUpdating, bool isGlobal,
                               XPath2MemoryManager *mm)
  : FuncFactory(argSpecs == 0 ? 0 : argSpecs->size(), mm),
    body_(body),
    exFunc_(NULL),
    qname_(qname),
    pattern_(0),
    templateInstance_(0),
    modes_(0),
    returnType_(returnType),
    argSpecs_(argSpecs),
    isGlobal_(isGlobal),
    isUpdating_(isUpdating),
    isTemplate_(false),
    src_(mm),
    staticTyped_(false),
    moduleDocCache_(NULL)
{
}

XQUserFunction::XQUserFunction(const XMLCh *qname, VectorOfASTNodes *pattern, ArgumentSpecs *argSpecs,
                               ASTNode *body, SequenceType *returnType, XPath2MemoryManager *mm)
  : FuncFactory(argSpecs == 0 ? 0 : argSpecs->size(), mm),
    body_(body),
    exFunc_(NULL),
    qname_(qname),
    pattern_(pattern),
    templateInstance_(0),
    modes_(0),
    returnType_(returnType),
    argSpecs_(argSpecs),
    isGlobal_(true),
    isUpdating_(false),
    isTemplate_(true),
    src_(mm),
    staticTyped_(false),
    moduleDocCache_(NULL)
{
}

ASTNode* XQUserFunction::createInstance(const VectorOfASTNodes &args, XPath2MemoryManager *mm) const
{
  return new (mm) XQUserFunctionInstance(this, args, mm);
}

void XQUserFunction::ArgumentSpec::staticResolution(StaticContext* context)
{
  if(qname_ != 0) {
    uri_ = context->getUriBoundToPrefix(XPath2NSUtils::getPrefix(qname_, context->getMemoryManager()), this);
    name_ = XPath2NSUtils::getLocalName(qname_);
  }

  seqType_->staticResolution(context);

  bool isPrimitive;
  seqType_->getStaticType(src_.getStaticType(), context, isPrimitive, seqType_);

  if(seqType_->getOccurrenceIndicator() == SequenceType::EXACTLY_ONE ||
     seqType_->getOccurrenceIndicator() == SequenceType::QUESTION_MARK) {
    src_.setProperties(StaticAnalysis::DOCORDER | StaticAnalysis::GROUPED |
                       StaticAnalysis::PEER | StaticAnalysis::SUBTREE | StaticAnalysis::SAMEDOC |
                       StaticAnalysis::ONENODE | StaticAnalysis::SELF);
  }
}

void XQUserFunction::Mode::staticResolution(StaticContext* context)
{
  if(qname_ != 0) {
    uri_ = context->getUriBoundToPrefix(XPath2NSUtils::getPrefix(qname_, context->getMemoryManager()), this);
    name_ = XPath2NSUtils::getLocalName(qname_);
  }
}

bool XQUserFunction::Mode::equals(const Mode *o) const
{
  if(o == 0) return state_ == DEFAULT;
  if(state_ == ALL || o->state_ == CURRENT) return true;

  return state_ == o->state_ && XPath2Utils::equals(uri_, o->uri_) &&
    XPath2Utils::equals(name_, o->name_);
}

void XQUserFunction::staticResolutionStage1(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  if(qname_ != 0) {
    const XMLCh *prefix = XPath2NSUtils::getPrefix(qname_, mm);
    name_ = XPath2NSUtils::getLocalName(qname_);

    if(prefix == 0 || *prefix == 0) {
      uri_ = context->getDefaultFuncNS();
    }
    else {
      uri_ = context->getUriBoundToPrefix(prefix, this);
    }
  }

  if(name_ != 0) {
    setURINameHash(uri_, name_);

    if(!isTemplate_) {
      if(XPath2Utils::equals(uri_, XMLUni::fgXMLURIName) ||
         XPath2Utils::equals(uri_, SchemaSymbols::fgURI_SCHEMAFORSCHEMA) ||
         XPath2Utils::equals(uri_, SchemaSymbols::fgURI_XSI) ||
         XPath2Utils::equals(uri_, XQFunction::XMLChFunctionURI) ||
         XPath2Utils::equals(uri_, FunctionConstructor::XMLChXPath2DatatypesURI)) {
        XQThrow(FunctionException, X("XQUserFunction::staticResolutionStage1"),
                X("A user defined function must not be in the namespaces xml, xsd, xsi, fn or xdt [err:XQST0045]"));
      }
      else if(uri_ == 0 || *uri_ == 0)
        XQThrow(FunctionException, X("XQUserFunction::staticResolutionStage1"),
                X("A user defined function must be defined in a namespace [err:XQST0060]"));
    }
  }

  // Check for the implementation of an external function
  if(body_ == NULL) {
    size_t nArgs = argSpecs_ ? argSpecs_->size() : 0;
    exFunc_ = context->lookUpExternalFunction(uri_, name_, nArgs);

    if(exFunc_ == NULL) {
      XMLBuffer buf;
      buf.set(X("External function '{"));
      buf.append(uri_);
      buf.append(X("}"));
      buf.append(name_);
      buf.append(X("' with "));
      XMLCh szNumBuff[20];
      XMLString::binToText((unsigned int)nArgs, szNumBuff, 19, 10);
      buf.append(szNumBuff);
      buf.append(X(" argument(s) has not been bound to an implementation"));
      XQThrow(FunctionException, X("XQUserFunction::staticResolutionStage1"), buf.getRawBuffer());
    }
  }

  // Resolve the parameter names
  if(argSpecs_) {
    ArgumentSpecs::iterator it;
    for(it = argSpecs_->begin(); it != argSpecs_->end (); ++it) {
      (*it)->staticResolution(context);
    }
    // check for duplicate parameters
    for(it = argSpecs_->begin(); argSpecs_->size() > 1 && it != argSpecs_->end()-1; ++it) {
      for(ArgumentSpecs::iterator it2 = it+1; it2 != argSpecs_->end (); ++it2) {
        if(XPath2Utils::equals((*it)->getURI(),(*it2)->getURI()) && 
           XPath2Utils::equals((*it)->getName(),(*it2)->getName())) {
          XMLBuffer buf;
          if(isTemplate_) {
            buf.set(X("Template "));
          } else {
            buf.set(X("User-defined function "));
          }
          if(name_ != 0) {
            buf.append(X("'{"));
            buf.append(uri_);
            buf.append(X("}"));
            buf.append(name_);
            buf.append(X("' "));
          }
          buf.append(X("has two parameters with the expanded QName '"));
          buf.append(X("{"));
          buf.append((*it)->getURI());
          buf.append(X("}"));
          buf.append((*it)->getName());
          buf.append(X("' [err:XQST0039]"));
          XQThrow(StaticErrorException, X("XQUserFunction::staticResolution"), buf.getRawBuffer());
        }
      }
    }
  }

  // Resolve the mode names
  if(modes_) {
    if(modes_->empty()) {
      XQThrow(StaticErrorException, X("XQUserFunction::staticResolution"),
              X("At least one mode must be specified for a template [err:XTSE0550]"));
    }

    ModeList::iterator it, it2;
    for(it = modes_->begin(); it != modes_->end(); ++it) {
      (*it)->staticResolution(context);

      // Check for "#all" with other values
      if((*it)->getState() == Mode::ALL && modes_->size() != 1) {
        XQThrow3(StaticErrorException, X("XQUserFunction::staticResolution"),
                 X("The mode #all must not be specified in addition to other modes [err:XTSE0550]"), *it);
      }

      // Check for duplicate modes
      it2 = it;
      for(++it2; it2 != modes_->end(); ++it2) {
        if((*it)->getState() == (*it2)->getState() &&
           XPath2Utils::equals((*it)->getName(), (*it2)->getName()) &&
           XPath2Utils::equals((*it)->getURI(), (*it2)->getURI())) {
          XMLBuffer buf;
          buf.append(X("The mode {"));
          buf.append((*it)->getURI());
          buf.append(X("}"));
          buf.append((*it)->getName());
          buf.append(X(" has been specified more than once [err:XTSE0550]"));
          XQThrow3(StaticErrorException, X("XQUserFunction::staticResolution"), buf.getRawBuffer(), *it2);
        }
      }
    }
  }

  // Set up a default StaticType and StaticAnalysis
  if(returnType_ != NULL) {
    returnType_->staticResolution(context);

    if(body_ != NULL) {
      body_ = returnType_->convertFunctionArg(body_, context, /*numericfunction*/false, returnType_);
    }

    bool isPrimitive;
    returnType_->getStaticType(src_.getStaticType(), context, isPrimitive, returnType_);
  }
  else {
    // Default type is item()*
    src_.getStaticType() = StaticType(StaticType::ITEM_TYPE, 0, StaticType::UNLIMITED);
  }

  if(isUpdating_) {
    src_.updating(true);
  }

  // TBD What about the other parts of the StaticAnalysis - jpcs
  src_.forceNoFolding(true);

  if(pattern_ != 0 && !pattern_->empty()) {
    // Set the pattern's initial static type to NODE_TYPE
    VectorOfASTNodes::iterator patIt = pattern_->begin();
    for(; patIt != pattern_->end(); ++patIt) {
      const_cast<StaticAnalysis&>((*patIt)->getStaticAnalysis()).getStaticType() = StaticType(StaticType::NODE_TYPE, 0, StaticType::UNLIMITED);
    }
  }

  if(isTemplate_) {
    // Build an instance of the template for us to call
    VectorOfASTNodes newArgs = VectorOfASTNodes(XQillaAllocator<ASTNode*>(mm));

    if(argSpecs_ != 0) {
      XQUserFunction::ArgumentSpecs::const_iterator argIt;
      for(argIt = argSpecs_->begin(); argIt != argSpecs_->end(); ++argIt) {
        XQVariable *argVar = new (mm) XQVariable((*argIt)->getURI(), (*argIt)->getName(), mm);
        argVar->setLocationInfo(*argIt);
        newArgs.push_back(argVar);
      }
    }

    templateInstance_ = new (mm) XQUserFunctionInstance(this, newArgs, mm);
    templateInstance_->setLocationInfo(this);
  }
}

void XQUserFunction::staticResolutionStage2(StaticContext *context)
{
  if(pattern_ != 0 && !pattern_->empty()) {
    VectorOfASTNodes::iterator patIt = pattern_->begin();
    for(; patIt != pattern_->end(); ++patIt) {
      (*patIt) = (*patIt)->staticResolution(context);
    }
  }
  if(templateInstance_) {
    templateInstance_->staticResolution(context);
  }
  if(body_ != NULL) {
    body_ = body_->staticResolution(context);
  }
}

class UDFStaticTyper : private ASTVisitor
{
public:
  UDFStaticTyper() : context_(0) {}

  void run(ASTNode *item, StaticContext *context)
  {
    context_ = context;
    optimize(item);
  }

private:
  virtual ASTNode *optimizeUserFunction(XQUserFunctionInstance *item)
  {
    // See if we can work out a better return type for the user defined function.
    // This call will just return if it's already been static typed
    const_cast<XQUserFunction*>(item->getFunctionDefinition())->staticTypingOnce(context_);

    return ASTVisitor::optimizeUserFunction(item);
  }

  virtual ASTNode *optimizeApplyTemplates(XQApplyTemplates *item)
  {
    // The XQApplyTemplates could call any template with a pattern -
    // so try to static type all of them before us

    const UserFunctions &templates = context_->getTemplateRules();

    UserFunctions::const_iterator inIt;
    for(inIt = templates.begin(); inIt != templates.end(); ++inIt) {
      if((*inIt)->getPattern() != 0)
        (*inIt)->staticTypingOnce(context_);
    }

    return ASTVisitor::optimizeApplyTemplates(item);
  }

  virtual ASTNode *optimizeCallTemplate(XQCallTemplate *item)
  {
    // The XQCallTemplate could call any template with a name -
    // so try to static type all of them before us

    const UserFunctions &templates = context_->getTemplateRules();

    UserFunctions::const_iterator inIt;
    for(inIt = templates.begin(); inIt != templates.end(); ++inIt) {
      if((*inIt)->getName() != 0)
        (*inIt)->staticTypingOnce(context_);
    }

    return ASTVisitor::optimizeCallTemplate(item);
  }

  StaticContext *context_;
};

void XQUserFunction::staticTypingOnce(StaticContext *context)
{
  // Avoid inifinite recursion for recursive functions
  // TBD Need to declare everything as being used - jpcs
  if(staticTyped_) return;
  staticTyped_ = true;
  staticTyping(context);
}

void XQUserFunction::staticTyping(StaticContext *context)
{
  // Nothing more to do for external functions
  if(body_ == NULL) return;

  XPath2MemoryManager *mm = context->getMemoryManager();

  if(isUpdating_ && returnType_ != NULL) {
    XQThrow(StaticErrorException, X("XQUserFunction::staticTyping"),
            X("It is a static error for an updating function to declare a return type [err:XUST0028]"));
  }

  // Find user defined functions and templates that are referenced in our body,
  // and try to call staticTyping() on them before us.
  UDFStaticTyper().run(body_, context);

  bool ciTypeSet = false;
  StaticType ciType = StaticType();
  if(pattern_ != NULL) {
    VectorOfASTNodes::iterator patIt = pattern_->begin();
    for(; patIt != pattern_->end(); ++patIt) {
      (*patIt) = (*patIt)->staticTyping(context);
      if(!ciTypeSet) {
        ciTypeSet = true;
        ciType = (*patIt)->getStaticAnalysis().getStaticType();
      }
      else ciType |= (*patIt)->getStaticAnalysis().getStaticType();
    }
    if(ciTypeSet) {
      ciType.setCardinality(1, 1);
    }
  }
  if(isTemplate_ && name_ != 0) {
    // Named template
    ciTypeSet = true;
    ciType = StaticType::ITEM_TYPE;
  }
  if(!isTemplate_ && name_ == 0) {
    // Inline function
    ciTypeSet = true;
    ciType = StaticType::ITEM_TYPE;
  }

  // define the new variables in a new scope and assign them the proper values
  VariableTypeStore *varStore = context->getVariableTypeStore();

  if(isGlobal_) varStore->addLocalScope();
  else varStore->addLogicalBlockScope();

  // Declare the parameters
  if(argSpecs_) {
    ArgumentSpecs::iterator it;
    for(it = argSpecs_->begin(); it != argSpecs_->end (); ++it) {
      varStore->declareVar((*it)->getURI(), (*it)->getName(), (*it)->getStaticAnalysis());
    }
  }

  StaticAnalysis bodySRC(mm);
  {
    // Declare the context item
    AutoContextItemTypeReset contextTypeReset(context, ciType);

    body_ = body_->staticTyping(context);
    bodySRC.copy(body_->getStaticAnalysis());
  }

  varStore->removeScope();

  if(isUpdating_) {
    if(!body_->getStaticAnalysis().isUpdating() && !body_->getStaticAnalysis().isPossiblyUpdating())
      XQThrow(StaticErrorException, X("XQUserFunction::staticTyping"),
              X("It is a static error for the body expression of a user defined updating function "
                "not to be an updating expression [err:XUST0002]"));
  }
  else {
    if(body_->getStaticAnalysis().isUpdating()) {
      if(isTemplate_) {
        XQThrow(StaticErrorException, X("XQUserFunction::staticTyping"),
                X("It is a static error for the body expression of a template "
                  "to be an updating expression [err:XUST0001]"));
      } else {
        XQThrow(StaticErrorException, X("XQUserFunction::staticTyping"),
                X("It is a static error for the body expression of a user defined function "
                  "to be an updating expression [err:XUST0001]"));
      }
    }
  }

  // Remove the parameter variables from the stored StaticAnalysis
  if(argSpecs_) {
    for(ArgumentSpecs::iterator it = argSpecs_->begin(); it != argSpecs_->end (); ++it) {
      if(!bodySRC.removeVariable((*it)->getURI(), (*it)->getName())) {
        // The parameter isn't used, so set it to null, so that we don't bother to evaluate it
        (*it)->setNotUsed();
      }
    }
  }

  // Swap bodySRC with our StaticAnalysis
  src_.clear();
  src_.copy(bodySRC);

  // Run staticTyping on the template instances
  if(templateInstance_ != 0) {
    StaticAnalysis templateVarSrc(mm);
    templateVarSrc.getStaticType() = StaticType::ITEM_TYPE;

    varStore->addLogicalBlockScope();

    if(argSpecs_ != 0) {
      XQUserFunction::ArgumentSpecs::const_iterator argIt;
      for(argIt = argSpecs_->begin(); argIt != argSpecs_->end(); ++argIt) {
        varStore->declareVar((*argIt)->getURI(), (*argIt)->getName(), templateVarSrc);
      }
    }

    // Turn off warnings here, since they are largely irrelevent to the user
    AutoMessageListenerReset reset(context);

    templateInstance_->staticTyping(context);

    varStore->removeScope();
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////

XQUserFunctionInstance::XQUserFunctionInstance(const XQUserFunction* funcDef, const VectorOfASTNodes& args, XPath2MemoryManager* expr) 
  : XQFunction(funcDef->getName(), 0, UNLIMITED,"",args, expr),
    addReturnCheck_(funcDef->body_ == NULL && funcDef->returnType_ != NULL),
    funcDef_(funcDef)
{
  _type = ASTNode::USER_FUNCTION;
  _fURI = funcDef->getURI();
}

Result XQUserFunctionInstance::getArgument(size_t index, DynamicContext *context) const
{
  if(index >= funcDef_->getMaxArgs()) return 0;

  return _args[index]->createResult(context);
}

Result XQUserFunctionInstance::createResult(DynamicContext* context, int flags) const
{
  if(funcDef_->body_ != NULL) {
    return new FunctionEvaluatorResult(this, context);
  } else {
    return new ExternalFunctionEvaluatorResult(this);
  }
}

ASTNode* XQUserFunctionInstance::staticResolution(StaticContext* context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  // We don't trust external functions, so check their return type
  if(addReturnCheck_) {
    addReturnCheck_ = false;
    XQTreatAs *treatAs = new (mm) XQTreatAs(this, funcDef_->returnType_, mm);
    treatAs->setLocationInfo(funcDef_->returnType_);
    return treatAs->staticResolution(context);
  }

  if(funcDef_->argSpecs_ != 0) {
    VectorOfASTNodes::iterator argIt = _args.begin();
    for(XQUserFunction::ArgumentSpecs::iterator defIt = funcDef_->argSpecs_->begin();
        defIt != funcDef_->argSpecs_->end() && argIt != _args.end(); ++defIt, ++argIt) {
      // The spec doesn't allow us to skip static errors, so we have to check even if
      // the parameter isn't used
      *argIt = (*defIt)->getType()->convertFunctionArg(*argIt, context, /*numericfunction*/false, *argIt);
      *argIt = (*argIt)->staticResolution(context);
    }
  }

  return this;
}

#include <iostream>

ASTNode *XQUserFunctionInstance::staticTyping(StaticContext *context)
{
  if(funcDef_->body_ != NULL) {
    _src.clear();
    _src.copy(funcDef_->src_);
  } else {
    // Force the type check to happen, by declaring our type as item()*
    _src.clear();
    _src.getStaticType() = StaticType::ITEM_TYPE;
    _src.forceNoFolding(true);
  }

  for(VectorOfASTNodes::iterator argIt = _args.begin(); argIt != _args.end(); ++argIt) {
    // The spec doesn't allow us to skip static errors, so we have to check even if
    // the parameter isn't used
    *argIt = (*argIt)->staticTyping(context);

    if((*argIt)->getStaticAnalysis().isUpdating()) {
      if(funcDef_->isTemplate()) {
        XQThrow(StaticErrorException, X("XQUserFunctionInstance::staticTyping"),
                X("It is a static error for the argument expression of a call template expression "
                  "to be an updating expression [err:XUST0001]"));
      } else {
        XQThrow(StaticErrorException, X("XQUserFunctionInstance::staticTyping"),
                X("It is a static error for the argument expression of a function call expression "
                  "to be an updating expression [err:XUST0001]"));
      }
    }

    // TBD Check all static errors in staticResolution, so we can skip static typing - jpcs
    // if((*defIt)->_qname || context->isDebuggingEnabled())
    _src.add((*argIt)->getStaticAnalysis());
  }

  // don't constant fold if it's an imported or an external function
  if(funcDef_->moduleDocCache_==NULL && funcDef_->body_ != NULL && !_src.isUsed() && !funcDef_->isTemplate()) {
    return constantFold(context);
  }
  return this;
}

void XQUserFunctionInstance::evaluateArguments(VarStoreImpl &scope, DynamicContext *context) const
{
  if(funcDef_->getArgumentSpecs() != 0) {
    // the variables should be evaluated in the calling context
    // (before the VariableStore::addLocalScope call: after this call, the variables that can be seen are only the local ones)
    VectorOfASTNodes::const_iterator argIt = _args.begin();
    for(XQUserFunction::ArgumentSpecs::const_iterator defIt = funcDef_->argSpecs_->begin();
        defIt != funcDef_->argSpecs_->end() && argIt != _args.end(); ++defIt, ++argIt) {
      if((*defIt)->isUsed()) {
        // TBD ClosureResult doesn't save RegexGroupStore - jpcs
        // TBD variable use count - jpcs
        scope.setVar((*defIt)->getURI(), (*defIt)->getName(), ClosureResult::create(*argIt, context));
      }
      else {
        // Skip evaluation of the parameter, since it isn't used, and debugging isn't enabled
      }
    }
  }
}

EventGenerator::Ptr XQUserFunctionInstance::generateEvents(EventHandler *events, DynamicContext *context,
                                                           bool preserveNS, bool preserveType) const
{
  if(funcDef_->getFunctionBody() == NULL) {
    return ASTNodeImpl::generateEvents(events, context, preserveNS, preserveType);
  }

  context->testInterrupt();

  VarStoreImpl scope(context->getMemoryManager(), funcDef_->isGlobal() ?
                     context->getGlobalVariableStore() : context->getVariableStore());
  evaluateArguments(scope, context);

  AutoDocumentCacheReset reset(context);
  if(funcDef_->getModuleDocumentCache())
    context->setDocumentCache(funcDef_->getModuleDocumentCache());

  AutoVariableStoreReset reset2(context, &scope);
  AutoRegexGroupStoreReset reset3(context);
  if(!funcDef_->isTemplate()) context->setRegexGroupStore(0);

  return new ClosureEventGenerator(funcDef_->getFunctionBody(), context, preserveNS, preserveType);
}

PendingUpdateList XQUserFunctionInstance::createUpdateList(DynamicContext *context) const
{
  context->testInterrupt();

  if(funcDef_->getFunctionBody() == NULL) {
    return funcDef_->getExternalFunction()->executeUpdate(this, context);
  }

  VarStoreImpl scope(context->getMemoryManager(), funcDef_->isGlobal() ?
                     context->getGlobalVariableStore() : context->getVariableStore());
  evaluateArguments(scope, context);

  AutoDocumentCacheReset reset(context);
  if(funcDef_->getModuleDocumentCache())
    context->setDocumentCache(funcDef_->getModuleDocumentCache());

  AutoVariableStoreReset reset2(context, &scope);
  AutoRegexGroupStoreReset reset3(context, 0);
  if(!funcDef_->isTemplate()) context->setRegexGroupStore(0);
  PendingUpdateList result = funcDef_->getFunctionBody()->createUpdateList(context);

  return result;
}

XQUserFunctionInstance::FunctionEvaluatorResult::FunctionEvaluatorResult(const XQUserFunctionInstance *di, DynamicContext *context)
  : ResultImpl(di),
    _di(di)
{
}

Item::Ptr XQUserFunctionInstance::FunctionEvaluatorResult::nextOrTail(Result &tail, DynamicContext *context)
{
  context->testInterrupt();

  VarStoreImpl scope(context->getMemoryManager(), _di->getFunctionDefinition()->isGlobal() ?
                     context->getGlobalVariableStore() : context->getVariableStore());
  _di->evaluateArguments(scope, context);

  AutoRegexGroupStoreReset reset3(context);
  if(!_di->getFunctionDefinition()->isTemplate()) context->setRegexGroupStore(0);

  AutoDocumentCacheReset reset(context);
  DocumentCache* docCache = _di->getFunctionDefinition()->getModuleDocumentCache();
  if(docCache)
    context->setDocumentCache(docCache);

  tail = ClosureResult::create(_di->getFunctionDefinition()->getFunctionBody(), context, &scope);
  return 0;

  // TBD Solve this problem again - jpcs
//   // if we had to switch document cache, check that the returned types are known also in the original context; if not, upgrade them to the base type
//   if(docCache!=NULL)
//   {
//     if(item!=NULLRCP && !reset.oldDC->isTypeDefined(item->getTypeURI(), item->getTypeName()))
//     {
//       if(item->isNode())
//       {
//         Node::Ptr node = item;
//         // TODO: change the annotation in the DOM elements and attributes
//       }
//       else if(item->isAtomicValue())
//       {
//         AnyAtomicType::Ptr atom = item;
//         const XMLCh* uri = atom->getTypeURI(), *name = atom->getTypeName();
//         while(!reset.oldDC->isTypeDefined(uri, name))
//         {
//             DatatypeValidator* pDV = docCache->getDatatypeValidator(uri, name);
//             assert(pDV!=NULL);
//             DatatypeValidator* pBaseDV = pDV->getBaseValidator();
//             if(pBaseDV==NULL)
//                 break;
//             uri = pBaseDV->getTypeUri();
//             name = pBaseDV->getTypeLocalName();
//         }
//         item = context->getItemFactory()->createDerivedFromAtomicType(uri, name, atom->asString(context), context);
//       }
//     }
//   }
//   return item;
}

XQUserFunctionInstance::ExternalFunctionEvaluatorResult::ExternalFunctionEvaluatorResult(const XQUserFunctionInstance *di)
  : ResultImpl(di),
    _di(di)
{
}

Item::Ptr XQUserFunctionInstance::ExternalFunctionEvaluatorResult::nextOrTail(Result &tail, DynamicContext *context)
{
  context->testInterrupt();

  tail = _di->getFunctionDefinition()->getExternalFunction()->execute(_di, context);
  return 0;
}

