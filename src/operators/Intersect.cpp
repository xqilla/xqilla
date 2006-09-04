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

#include "../config/xqilla_config.h"
#include <assert.h>
#include <xqilla/operators/Intersect.hpp>
#include <xqilla/exceptions/XPath2ErrorException.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/ast/XQDocumentOrder.hpp>

/*static*/ const XMLCh Intersect::name[]={ XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_r, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_c, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chNull };

Intersect::Intersect(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : XQOperator(name, args, memMgr),
    sortAdded_(false)
{
}

ASTNode* Intersect::staticResolution(StaticContext *context)
{
  if(!sortAdded_) {
    sortAdded_ = true;
    // Wrap ourselves in a document order sort
    XPath2MemoryManager *mm = context->getMemoryManager();
    ASTNode *result = new (mm) XQDocumentOrder(this, mm);
    result->setLocationInfo(this);
    return result->staticResolution(context);
  }

  _src.getStaticType().flags = StaticType::NODE_TYPE;

  return resolveASTNodes(_args, context, true);
}

Sequence Intersect::collapseTreeInternal(DynamicContext* context, int flags) const
{
	Sequence param1 = _args[0]->collapseTree(context, flags)->toSequence(context);
	if(!checkSequenceIsNodes(param1)) {
		XQThrow(XPath2ErrorException,X("Intersect::collapseTreeInternal"), X("The operator 'intersect' has been called with a parameter that is not just nodes [err:XPTY0004]"));
	}
	Sequence param2 = _args[1]->collapseTree(context, flags)->toSequence(context);
	if(!checkSequenceIsNodes(param2)) {
		XQThrow(XPath2ErrorException,X("Intersect::collapseTreeInternal"), X("The operator 'intersect' has been called with a parameter that is not just nodes [err:XPTY0004]"));
	}

	XPath2MemoryManager* memMgr = context->getMemoryManager();
	Sequence result(param1.getLength(),memMgr);

	Sequence::const_iterator p1It = param1.begin();
	Sequence::const_iterator p2It;
	Sequence::const_iterator end1 = param1.end();
	Sequence::const_iterator end2 = param2.end();

	for(;p1It != end1; ++p1It) {
		for(p2It = param2.begin();p2It != end2; ++p2It) {
			if(((Node*)(const Item*)(*p1It))->equals((const Node::Ptr )*p2It)) {
				result.addItem(*p2It);
			}
		}
	}

  return result;
}
