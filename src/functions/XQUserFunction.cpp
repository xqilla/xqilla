/*
 * Copyright (c) 2001-2007
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2007
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
#include <xqilla/context/VariableStore.hpp>
#include <xqilla/context/VariableTypeStore.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/ContextHelpers.hpp>
#include <xqilla/ast/XQTreatAs.hpp>
#include <xqilla/update/PendingUpdateList.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>

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

XQUserFunction::XQUserFunction(const XMLCh *qname, ArgumentSpecs *argSpecs, ASTNode *body, SequenceType *returnType, bool isUpdating, XPath2MemoryManager *mm)
  : body_(body),
    exFunc_(NULL),
    name_(NULL),
    qname_(qname),
    uri_(NULL),
    uriname_(NULL),
    returnType_(returnType),
    argSpecs_(argSpecs),
    isUpdating_(isUpdating),
    src_(mm),
    calculatingSRC_(false),
    moduleDocCache_(NULL)
{
}

size_t XQUserFunction::getMinArgs() const
{
  return (argSpecs_ == 0 ? 0 : argSpecs_->size());
}

size_t XQUserFunction::getMaxArgs() const
{
  return (argSpecs_ == 0 ? 0 : argSpecs_->size());
}

ASTNode* XQUserFunction::createInstance(const VectorOfASTNodes &args, XPath2MemoryManager *mm) const
{
  return new (mm) Instance(this, args, mm);
}

void XQUserFunction::ArgumentSpec::staticResolution(StaticContext* context)
{
  uri_ = context->getUriBoundToPrefix(XPath2NSUtils::getPrefix(qname_, context->getMemoryManager()), this);
  name_ = XPath2NSUtils::getLocalName(qname_);

  bool isPrimitive;
  seqType_->getItemType()->getStaticType(src_.getStaticType(), context, isPrimitive, seqType_);
}

void XQUserFunction::staticResolutionStage1(StaticContext *context)
{
  const XMLCh *prefix = XPath2NSUtils::getPrefix(qname_, context->getMemoryManager());
  name_ = XPath2NSUtils::getLocalName(qname_);

  if(prefix == 0 || *prefix == 0) {
    uri_ = context->getDefaultFuncNS();
  }
  else {
    uri_ = context->getUriBoundToPrefix(prefix, this);
  }

  XMLBuffer uriname;
  uriname.set(name_);
  uriname.append(uri_);
  uriname_ = context->getMemoryManager()->getPooledString(uriname.getRawBuffer());

  context->addCustomFunction(this);

  if(XPath2Utils::equals(uri_, XMLUni::fgXMLURIName) ||
     XPath2Utils::equals(uri_, SchemaSymbols::fgURI_SCHEMAFORSCHEMA) ||
     XPath2Utils::equals(uri_, SchemaSymbols::fgURI_XSI) ||
     XPath2Utils::equals(uri_, XQFunction::XMLChFunctionURI) ||
     XPath2Utils::equals(uri_, FunctionConstructor::XMLChXPath2DatatypesURI)) {
    XQThrow(FunctionException, X("XQUserFunction::staticResolutionStage1"), X("A user defined function must not be in the namespaces xml, xsd, xsi, fn or xdt [err:XQST0045]"));
  }
  else if(uri_ == 0 || *uri_ == 0)
    XQThrow(FunctionException, X("XQUserFunction::staticResolutionStage1"), X("A user defined function must be defined in a namespace [err:XQST0060]"));

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
    for (it = argSpecs_->begin(); it != argSpecs_->end (); ++it) {
      (*it)->staticResolution(context);
    }
    // check for duplicate parameters
    for (it = argSpecs_->begin(); it != argSpecs_->end ()-1; ++it) {
      for (ArgumentSpecs::iterator it2 = it+1; it2 != argSpecs_->end (); ++it2) {
        if(XPath2Utils::equals((*it)->getURI(),(*it2)->getURI()) && 
           XPath2Utils::equals((*it)->getName(),(*it2)->getName())) {
          XMLBuffer buf;
          buf.set(X("User-defined function '"));
          buf.append(name_);
          buf.append(X("' has two parameters with the expanded QName '"));
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

  // Set up a default StaticType and StaticAnalysis
  if(returnType_ != NULL) {
    if(body_ != NULL) {
      body_ = returnType_->convertFunctionArg(body_, context, /*numericfunction*/false, returnType_);
    }

    const SequenceType::ItemType *itemType = returnType_->getItemType();
    if(itemType != 0) {
      bool isPrimitive;
      itemType->getStaticType(src_.getStaticType(), context, isPrimitive, returnType_);
    }
    else {
      src_.getStaticType().flags = 0;
    }
  }
  else {
    // Default type is item()*
    src_.getStaticType().flags = StaticType::ITEM_TYPE;
  }

  if(isUpdating_) {
    src_.updating(true);
  }

  src_.forceNoFolding(true);
}

void XQUserFunction::staticResolutionStage2(StaticContext *context)
{
  if(body_ != NULL) {
    body_ = body_->staticResolution(context);
  }
}

void XQUserFunction::staticTyping(StaticContext *context)
{
  // Nothing more to do for external functions
  if(body_ == NULL) return;

  // Avoid inifinite recursion for recursive functions
  if(calculatingSRC_) return;
  calculatingSRC_ = true;

  XPath2MemoryManager *mm = context->getMemoryManager();

  if(isUpdating_ && returnType_ != NULL) {
    XQThrow(StaticErrorException, X("XQUserFunction::staticTyping"),
              X("It is a static error for an updating function to declare a return type [err:XUST0028]"));
  }

  // define the new variables in a new scope and assign them the proper values
  VariableTypeStore* varStore = context->getVariableTypeStore();
  varStore->addLocalScope();

  // Declare the parameters
  if(argSpecs_) {
    ArgumentSpecs::iterator it;
    for(it = argSpecs_->begin(); it != argSpecs_->end (); ++it) {
      varStore->declareVar((*it)->getURI(), (*it)->getName(), (*it)->getStaticAnalysis());
    }
  }

  StaticAnalysis bodySRC(mm);
  body_ = body_->staticTyping(context);
  bodySRC.copy(body_->getStaticAnalysis());

  if(isUpdating_) {
    if(!body_->getStaticAnalysis().isUpdating() && !body_->getStaticAnalysis().isPossiblyUpdating())
      XQThrow(StaticErrorException, X("XQUserFunction::staticTyping"),
              X("It is a static error for the body expression of a user defined updating function "
                "not to be an updating expression [err:XUST0002]"));
  }
  else {
    if(body_->getStaticAnalysis().isUpdating())
      XQThrow(StaticErrorException, X("XQUserFunction::staticTyping"),
              X("It is a static error for the body expression of a user defined function "
                "to be an updating expression [err:XUST0001]"));
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

  varStore->removeScope();

  calculatingSRC_ = false;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

XQUserFunction::Instance::Instance(const XQUserFunction* funcDef, const VectorOfASTNodes& args, XPath2MemoryManager* expr) 
  : XQFunction(funcDef->getName(), 0, UNLIMITED,"",args, expr),
    addReturnCheck_(funcDef->body_ == NULL && funcDef->returnType_ != NULL),
    funcDef_(funcDef)
{
  setType(ASTNode::USER_FUNCTION);
  _fURI = funcDef->getURI();
}

Result XQUserFunction::Instance::getArgument(size_t index, DynamicContext *context) const
{
  if(index >= funcDef_->getMaxArgs()) return 0;

  return _args[index]->createResult(context);
}

Result XQUserFunction::Instance::createResult(DynamicContext* context, int flags) const
{
  if(funcDef_->body_ != NULL) {
    return new FunctionEvaluatorResult(this, context);
  } else {
    return new ExternalFunctionEvaluatorResult(this);
  }
}

ASTNode* XQUserFunction::Instance::staticResolution(StaticContext* context)
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
    for(ArgumentSpecs::iterator defIt = funcDef_->argSpecs_->begin();
        defIt != funcDef_->argSpecs_->end() && argIt != _args.end(); ++defIt, ++argIt) {
      // The spec doesn't allow us to skip static errors, so we have to check even if
      // the parameter isn't used
      *argIt = (*defIt)->getType()->convertFunctionArg(*argIt, context, /*numericfunction*/false, *argIt);
      *argIt = (*argIt)->staticResolution(context);
    }
  }

  return this;
}

ASTNode* XQUserFunction::Instance::staticTyping(StaticContext* context)
{
  _src.clear();

  if(funcDef_->body_ != NULL) {
    // See if we can work out a better return type for the user defined function.
    // This call will just return if staticTyping is in our call stack.
    const_cast<XQUserFunction*>(funcDef_)->staticTyping(context);
    _src.copy(funcDef_->src_);
  } else {
    // Force the type check to happen, by declaring our type as item()*
    _src.getStaticType() = StaticType::ITEM_TYPE;
    _src.forceNoFolding(true);
  }

  for(VectorOfASTNodes::iterator argIt = _args.begin(); argIt != _args.end(); ++argIt) {
    // The spec doesn't allow us to skip static errors, so we have to check even if
    // the parameter isn't used
    *argIt = (*argIt)->staticTyping(context);

    if((*argIt)->getStaticAnalysis().isUpdating()) {
      XQThrow(StaticErrorException, X("XQUserFunction::Instance::staticTyping"),
              X("It is a static error for the argument expression of a function call expression "
                "to be an updating expression [err:XUST0001]"));
    }

    // TBD Check all static errors in staticResolution, so we can skip static typing - jpcs
    // if((*defIt)->_qname || context->isDebuggingEnabled())
    _src.add((*argIt)->getStaticAnalysis());
  }

  // don't constant fold if it's an imported or an external function
  if(funcDef_->moduleDocCache_==NULL && funcDef_->body_ != NULL && !_src.isUsed()) {
    return constantFold(context);
  }
  return this;
}

void XQUserFunction::Instance::evaluateArguments(VarStoreImpl &scope, DynamicContext *context) const
{
  typedef std::pair<XQUserFunction::ArgumentSpec*, Result> ArgBinding;
  typedef std::vector<ArgBinding> VectorOfArgBindings;

  VectorOfArgBindings varValues;
  if(funcDef_->getArgumentSpecs() != 0) {
    // the variables should be evaluated in the calling context
    // (before the VariableStore::addLocalScope call: after this call, the variables that can be seen are only the local ones)
    VectorOfASTNodes::const_iterator argIt = _args.begin();
    for(ArgumentSpecs::const_iterator defIt = funcDef_->argSpecs_->begin();
        defIt != funcDef_->argSpecs_->end() && argIt != _args.end(); ++defIt, ++argIt) {
      if((*defIt)->isUsed()) {
        // TBD Can we use ClosureResult instead of calling toSequence()? - jpcs
        varValues.push_back(ArgBinding(*defIt, (*argIt)->createResult(context)->toSequence(context)));
      }
      else {
        // Skip evaluation of the parameter, since it isn't used, and debugging isn't enabled
      }
    }
  }
  // define the new variables in the new scope and assign them the proper values
  for(VectorOfArgBindings::iterator it2 = varValues.begin(); it2 != varValues.end(); ++it2) {
    // TBD variable use count - jpcs
    scope.setVar(it2->first->getURI(), it2->first->getName(), it2->second);
  }
}

void XQUserFunction::Instance::generateEvents(EventHandler *events, DynamicContext *context,
                                              bool preserveNS, bool preserveType) const
{
  if(funcDef_->getFunctionBody() == NULL) {
    ASTNodeImpl::generateEvents(events, context, preserveNS, preserveType);
    return;
  }

  context->testInterrupt();

  VarStoreImpl scope(context->getMemoryManager(), context->getGlobalVariableStore());
  evaluateArguments(scope, context);

  AutoDocumentCacheReset reset(context);
  if(funcDef_->getModuleDocumentCache())
    context->setDocumentCache(funcDef_->getModuleDocumentCache());

  AutoVariableStoreReset reset2(context, &scope);
  funcDef_->getFunctionBody()->generateEvents(events, context, preserveNS, preserveType);
}

PendingUpdateList XQUserFunction::Instance::createUpdateList(DynamicContext *context) const
{
  context->testInterrupt();

  if(funcDef_->getFunctionBody() == NULL) {
    return funcDef_->getExternalFunction()->executeUpdate(this, context);
  }

  VarStoreImpl scope(context->getMemoryManager(), context->getGlobalVariableStore());
  evaluateArguments(scope, context);

  AutoDocumentCacheReset reset(context);
  if(funcDef_->getModuleDocumentCache())
    context->setDocumentCache(funcDef_->getModuleDocumentCache());

  AutoVariableStoreReset reset2(context, &scope);
  PendingUpdateList result = funcDef_->getFunctionBody()->createUpdateList(context);

  return result;
}

XQUserFunction::Instance::FunctionEvaluatorResult::FunctionEvaluatorResult(const Instance *di, DynamicContext *context)
  : ResultImpl(di),
    _di(di),
    _toDo(true),
    _scope(context->getMemoryManager(), context->getGlobalVariableStore()),
    _result(0)
{
}

Item::Ptr XQUserFunction::Instance::FunctionEvaluatorResult::next(DynamicContext *context)
{
  context->testInterrupt();

  AutoDocumentCacheReset reset(context);
  DocumentCache* docCache = _di->getFunctionDefinition()->getModuleDocumentCache();
  AutoVariableStoreReset reset2(context);

  if(_toDo) {
    _toDo = false;
    _di->evaluateArguments(_scope, context);

    if(docCache)
      context->setDocumentCache(docCache);
    context->setVariableStore(&_scope);
    _result = _di->getFunctionDefinition()->getFunctionBody()->createResult(context);
  }
  else {
    if(docCache)
      context->setDocumentCache(docCache);
    context->setVariableStore(&_scope);
  }

  Item::Ptr item = _result->next(context);

  // if we had to switch document cache, check that the returned types are known also in the original context; if not, upgrade them to the base type 
  if(docCache!=NULL)
  {
    if(item!=NULLRCP && !reset.oldDC->isTypeDefined(item->getTypeURI(), item->getTypeName()))
    {
      if(item->isNode())
      {
        Node::Ptr node = item;
        // TODO: change the annotation in the DOM elements and attributes
      }
      else
      {
        AnyAtomicType::Ptr atom = item;
        const XMLCh* uri = atom->getTypeURI(), *name = atom->getTypeName();
        while(!reset.oldDC->isTypeDefined(uri, name))
        {
            DatatypeValidator* pDV = docCache->getDatatypeValidator(uri, name);
            assert(pDV!=NULL);
            DatatypeValidator* pBaseDV = pDV->getBaseValidator();
            if(pBaseDV==NULL)
                break;
            uri = pBaseDV->getTypeUri();
            name = pBaseDV->getTypeLocalName();
        }
        item = context->getItemFactory()->createDerivedFromAtomicType(uri, name, atom->asString(context), context);
      }
    }
  }
  return item;
}

std::string XQUserFunction::Instance::FunctionEvaluatorResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<functionevaluator/>" << std::endl;

  return oss.str();
}

XQUserFunction::Instance::ExternalFunctionEvaluatorResult::ExternalFunctionEvaluatorResult(const Instance *di)
  : ResultImpl(di),
    _di(di),
    _toDo(true),
    _result(0)
{
}

Item::Ptr XQUserFunction::Instance::ExternalFunctionEvaluatorResult::next(DynamicContext *context)
{
  context->testInterrupt();	

  if(_toDo) {
    _toDo = false;
    _result = _di->getFunctionDefinition()->getExternalFunction()->execute(_di, context);
  }

  Item::Ptr item = _result->next(context);
  if(item.isNull()) {
    _result = 0;
  }
  return item;
}

std::string XQUserFunction::Instance::ExternalFunctionEvaluatorResult::asString(DynamicContext *context, int indent) const
{
  return "";
}
