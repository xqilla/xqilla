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

#include "../config/xqilla_config.h"
#include <xqilla/functions/FunctionDistinctValues.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/operators/Equals.hpp>
#include <xqilla/context/Collation.hpp>
#include <xqilla/context/impl/CodepointCollation.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/exceptions/IllegalArgumentException.hpp>
#include <xqilla/exceptions/XPath2ErrorException.hpp>
#include <xqilla/items/ATDoubleOrDerived.hpp>
#include <xqilla/items/ATFloatOrDerived.hpp>
#include <xqilla/items/ATStringOrDerived.hpp>
#include <xqilla/items/ATUntypedAtomic.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/functions/FunctionConstructor.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/context/ItemFactory.hpp>

#include <xercesc/validators/schema/SchemaSymbols.hpp>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

const XMLCh FunctionDistinctValues::name[] = {
  chLatin_d, chLatin_i, chLatin_s, 
  chLatin_t, chLatin_i, chLatin_n, 
  chLatin_c, chLatin_t, chDash, 
  chLatin_v, chLatin_a, chLatin_l, 
  chLatin_u, chLatin_e, chLatin_s, 
  chNull 
};
const unsigned int FunctionDistinctValues::minArgs = 1;
const unsigned int FunctionDistinctValues::maxArgs = 2;

/**
 * fn:distinct-values($arg as xdt:anyAtomicType*) as xdt:anyAtomicType*
 * fn:distinct-values($arg as xdt:anyAtomicType*, $collation as xs:string) as xdt:anyAtomicType*
**/

FunctionDistinctValues::FunctionDistinctValues(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : XQFunction(name, minArgs, maxArgs, "anyAtomicType*, string", args, memMgr)
{
}

ASTNode* FunctionDistinctValues::staticResolution(StaticContext *context)
{
  bool allConstant = true;
  for(VectorOfASTNodes::iterator i = _args.begin(); i != _args.end(); ++i) {
    *i = (*i)->staticResolution(context);
    _src.add((*i)->getStaticResolutionContext());
    if(!(*i)->isConstant()) {
      allConstant = false;
    }
  }

  _src.getStaticType() = _args.front()->getStaticResolutionContext().getStaticType();
  if(_src.getStaticType().flags & StaticResolutionContext::NODE_TYPE) {
    _src.getStaticType().flags &= ~StaticResolutionContext::NODE_TYPE;
    _src.getStaticType().flags |= StaticResolutionContext::NUMERIC_TYPE | StaticResolutionContext::OTHER_TYPE;
  }

  if(allConstant) {
    return constantFold(context);
  }
  else {
    return resolvePredicates(context);
  }
}

Result FunctionDistinctValues::createResult(DynamicContext* context, int flags) const
{
  return new DistinctValueResult(this, context);
}

FunctionDistinctValues::DistinctValueResult::DistinctValueResult(const FunctionDistinctValues *fdv, DynamicContext *context)
  : ResultImpl(context),
    fdv_(fdv),
    parent_(0),
    collation_(0),
    toDo_(true),
    seenNan_(false),
    alreadySeen_(context->getMemoryManager())
{
}

Item::Ptr FunctionDistinctValues::DistinctValueResult::next(DynamicContext *context)
{
  if(toDo_) {
    toDo_ = false;
    parent_ = fdv_->getParamNumber(1, context, ASTNode::UNORDERED);

    if(fdv_->getNumArgs() > 1) {
        const XMLCh* collName = fdv_->getParamNumber(2, context).next(context)->asString(context);
        try {
            context->getItemFactory()->createAnyURI(collName, context);
        } catch(XPath2ErrorException &e) {
            DSLthrow(FunctionException, X("FunctionDistinctValues::DistinctValueResult::next"), X("Invalid collationURI"));  
        }
        collation_ = context->getCollation(collName);
        if(collation_ == NULL)
            DSLthrow(FunctionException,X("FunctionDistinctValues::DistinctValueResult::next"),X("Collation object is not available"));
    }
    else
        collation_ = context->getDefaultCollation();
    if(collation_ == NULL)
        collation_ = context->getCollation(CodepointCollation::getCodepointCollationName());
  }

  AnyAtomicType::Ptr item;
  while(true) {
    item = (const AnyAtomicType::Ptr )parent_.next(context);
    if(item == NULLRCP) {
      parent_ = 0;
      return 0;
    }

    AnyAtomicType::Ptr toCompare = item;
    if(item->getPrimitiveTypeIndex() == AnyAtomicType::UNTYPED_ATOMIC) {
      toCompare = item->castAs(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING, context);
    }
    else if(item->getPrimitiveTypeIndex() == AnyAtomicType::DOUBLE) {
      ATDoubleOrDerived* dbl = (ATDoubleOrDerived*)item.get();
      if(dbl->isZero() && dbl->isNegative()) {
        toCompare = context->getItemFactory()->createDouble(0.0, context);
      }
      else if(dbl->isNaN()) {
        if(!seenNan_) {
          seenNan_ = true;
          return item;
        }
        continue;
      }
    }
    else if(item->getPrimitiveTypeIndex() == AnyAtomicType::FLOAT) {
      ATFloatOrDerived* flt = (ATFloatOrDerived*)item.get();
      if(flt->isZero() && flt->isNegative()) {
        toCompare = context->getItemFactory()->createFloat(0.0, context);
      }
      else if(flt->isNaN()) {
        if(!seenNan_) {
          seenNan_ = true;
          return item;
        }
        continue;
      }
    }

    bool bFound = false;
    Sequence::iterator it = alreadySeen_.begin();
    for(;it != alreadySeen_.end(); ++it) {
      AnyAtomicType::Ptr other = (const AnyAtomicType::Ptr )*it;
      try {
        bFound = Equals::equals(other, toCompare, collation_, context);
      } catch (::IllegalArgumentException &e) {
        // if eq is not defined, they are different
      } catch (XPath2ErrorException &e) {
        // if eq is not defined, they are different
      }
      if(bFound) break;
    }
    if(!bFound) {
      alreadySeen_.addItem(toCompare);
      return item;
    }
  }

  return 0;
}

std::string FunctionDistinctValues::DistinctValueResult::asString(DynamicContext *context, int indent) const
{
  return "<FunctionDistinctValues_DistinctValueResult/>";
}
