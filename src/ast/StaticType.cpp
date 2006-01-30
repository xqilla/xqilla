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

#include <xqilla/ast/StaticType.hpp>
#include <xqilla/context/ItemFactory.hpp>
#include <xqilla/context/StaticContext.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/functions/FunctionConstructor.hpp>

unsigned int StaticType::getFlagsFor(const XMLCh *uri, const XMLCh *name, const StaticContext *context)
{
  if(XPath2Utils::equals(name, AnyAtomicType::fgDT_ANYATOMICTYPE) &&
     XPath2Utils::equals(uri, FunctionConstructor::XMLChXPath2DatatypesURI)) {
    return ANY_ATOMIC_TYPE;
  }
  else {
    return getFlagsFor(context->getItemFactory()->getPrimitiveTypeIndex(uri, name));
  }
}

unsigned int StaticType::getFlagsFor(AnyAtomicType::AtomicObjectType primitiveType)
{
  switch(primitiveType) {
  case AnyAtomicType::DECIMAL:
  case AnyAtomicType::DOUBLE:
  case AnyAtomicType::FLOAT: {
    return StaticType::NUMERIC_TYPE;
  }
  case AnyAtomicType::UNTYPED_ATOMIC: {
    return StaticType::UNTYPED_ATOMIC_TYPE;
  }
  case AnyAtomicType::ANY_URI: {
    return StaticType::ANY_URI_TYPE;
  }
  default: {
    return StaticType::OTHER_TYPE;
  }
  }
  return 0;
}

void StaticType::typeUnion(const StaticType &st)
{
  flags |= st.flags;
}

bool StaticType::isNodesOnly() const
{
  return (flags & ~NODE_TYPE) == 0;
}
