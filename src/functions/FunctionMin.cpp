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
#include <xqilla/functions/FunctionMin.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/context/Collation.hpp>
#include <xqilla/context/impl/CodepointCollation.hpp>
#include "../operators/TotalOrderComparison.hpp"
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/exceptions/XPath2ErrorException.hpp>
#include <xqilla/exceptions/IllegalArgumentException.hpp>
#include <xqilla/items/ATStringOrDerived.hpp>
#include <xqilla/items/ATBooleanOrDerived.hpp>
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>

const XMLCh FunctionMin::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_m, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, 
  XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionMin::minArgs = 1;
const unsigned int FunctionMin::maxArgs = 2;

/**
 * fn:min($arg as xdt:anyAtomicType*) as xdt:anyAtomicType?
 * fn:min($arg as xdt:anyAtomicType*, $collation as string) as xdt:anyAtomicType?
**/

FunctionMin::FunctionMin(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : AggregateFunction(name, minArgs, maxArgs, "anyAtomicType*, string", args, memMgr)
{
  // TBD - could do better here - jpcs
  _src.getStaticType().flags = StaticResolutionContext::NUMERIC_TYPE | StaticResolutionContext::OTHER_TYPE;
}

Sequence FunctionMin::collapseTreeInternal(DynamicContext* context, int flags) const
{
    XPath2MemoryManager* memMgr = context->getMemoryManager();

    Sequence sequence(memMgr);  
    try {
        sequence = validateSequence(getParamNumber(1,context,ASTNode::UNORDERED), context);
    } catch (IllegalArgumentException &e) {
        XQThrow(IllegalArgumentException, X("FunctionMin::collapseTreeInternal"), X("Invalid argument to fn:min() function"));
    }

    // Return the empty sequence if the sequence is empty
    if(sequence.isEmpty()) {
        return Sequence(memMgr);
    }
    if(sequence.getLength()==1 && isNumericNaN(sequence.first()))
        return sequence;

    Collation* collation=NULL;
    if (getNumArgs()>1) {
        Sequence collArg = getParamNumber(2,context);
        const XMLCh* collName = collArg.first()->asString(context);
        try {
            context->getItemFactory()->createAnyURI(collName, context);
        } catch(XPath2ErrorException &e) {
            XQThrow(FunctionException, X("FunctionMin::collapseTreeInternal"), X("Invalid collationURI"));  
        }
        collation=context->getCollation(collName);
        if (collation==NULL)
            XQThrow(FunctionException,X("FunctionMin::collapseTreeInternal"),X("Collation object is not available"));
    }
    else
        collation=context->getDefaultCollation();
    if(collation==NULL)
        collation=context->getCollation(CodepointCollation::getCodepointCollationName());

    Sequence::iterator i = sequence.begin();
    Item::Ptr minItem = *i;

    if(((AnyAtomicType*)(const Item*)(*i))->getPrimitiveTypeIndex() == AnyAtomicType::STRING) {
        for (++i; i != sequence.end(); i++) {
          if(collation->compare((*i)->asString(context),minItem->asString(context))<0) {
            minItem = *i;
          }
        }
    } else {
        ATBooleanOrDerived::Ptr less;
        for (++i; i != sequence.end(); i++) {
            VectorOfASTNodes gtArgs = VectorOfASTNodes(XQillaAllocator<ASTNode*>(memMgr));
            XQSequence seq1(*i, context, memMgr);
            gtArgs.push_back(&seq1);
            XQSequence seq2(minItem, context, memMgr);
            gtArgs.push_back(&seq2);
            TotalOrderComparison gt(gtArgs, false, memMgr);
            try {
                less = (const ATBooleanOrDerived::Ptr )gt.collapseTree(context).next(context);
            } catch (IllegalArgumentException &e) {
                XQThrow(IllegalArgumentException, X("FunctionMin::collapseTreeInternal"), X("Invalid argument to fn:min() function"));
            } catch (XPath2ErrorException &e) {
                XQThrow(IllegalArgumentException, X("FunctionMin::collapseTreeInternal"), X("Invalid argument to fn:min() function"));
            }
            if(((const ATBooleanOrDerived*)less)->isTrue()) {
              minItem = *i;
            }
        }
    }
    return Sequence(minItem, memMgr);
}
