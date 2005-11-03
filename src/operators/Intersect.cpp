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
#include <assert.h>
#include <xqilla/operators/Intersect.hpp>
#include <xqilla/exceptions/XPath2ErrorException.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/Node.hpp>

/*static*/ const XMLCh Intersect::name[]={ XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_r, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_c, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chNull };

Intersect::Intersect(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : XQOperator(name, args, memMgr)
{
  _src.setProperties(StaticResolutionContext::DOCORDER | StaticResolutionContext::GROUPED);
  _src.getStaticType().flags = StaticResolutionContext::NODE_TYPE;
}

Sequence Intersect::collapseTreeInternal(DynamicContext* context, int flags) const
{
	Sequence param1 = _args[0]->collapseTree(context, flags & ASTNode::UNORDERED).toSequence(context);
	if(!checkSequenceIsNodes(param1)) {
		DSLthrow(XPath2ErrorException,X("Intersect::collapseTreeInternal"), X("The operator 'intersect' has been called with a parameter that is not just nodes"));
	}
	Sequence param2 = _args[1]->collapseTree(context, flags & ASTNode::UNORDERED).toSequence(context);
	if(!checkSequenceIsNodes(param2)) {
		DSLthrow(XPath2ErrorException,X("Intersect::collapseTreeInternal"), X("The operator 'intersect' has been called with a parameter that is not just nodes"));
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

    //Sort the nodes into document order
    if(!(context->getNodeSetOrdering()==StaticContext::ORDERING_UNORDERED || flags & ASTNode::UNORDERED))
        result.sortIntoDocumentOrder(context);
    return result;
}
