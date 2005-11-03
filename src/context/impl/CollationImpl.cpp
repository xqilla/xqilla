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
#include <xqilla/context/impl/CollationImpl.hpp>
#include <xqilla/items/ATStringOrDerived.hpp>
#include <xqilla/items/Item.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/ItemFactory.hpp>

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CollationImpl::CollationImpl(XPath2MemoryManager* memMgr, CollationHelper* helper)
{
  _memMgr=memMgr;
    _helper=helper;
}

const XMLCh* CollationImpl::getCollationName() const
{
    return _helper->getCollationName();
}

int CollationImpl::compare(const XMLCh* const string1, const XMLCh* const string2) const
{
    return _helper->compare(string1,string2);
}
    
Sequence CollationImpl::sort(Sequence data, const DynamicContext* context) const
{
  // build a sequence made of strings
  Sequence stringSeq = Sequence(data.getLength(), context->getMemoryManager());
  for(Sequence::iterator it=data.begin(); it!=data.end(); ++it) {
    const XMLCh *str = (*it)->asString(context);
    stringSeq.addItem(context->getItemFactory()->createString(str, context));
  }

  stringSeq.sortWithCollation(this, context);

  return stringSeq;
}
