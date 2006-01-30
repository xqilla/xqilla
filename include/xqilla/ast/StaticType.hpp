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

#ifndef _STATICTYPE_HPP
#define _STATICTYPE_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/items/AnyAtomicType.hpp>

/**
 * Class that represents the static type of a sub-expression
 */
class XQILLA_API StaticType {
public:
  /**
   * Flags that determine what item types are returned from a sub-expression
   */
  enum StaticTypeFlags {
    NODE_TYPE           = 0x01, ///< Results can contain nodes
    NUMERIC_TYPE        = 0x02, ///< Results can contain numeric items
    UNTYPED_ATOMIC_TYPE = 0x04, ///< Results can contain untypedAtomic items
    ANY_URI_TYPE        = 0x08, ///< Results can contain anyURI items
    OTHER_TYPE          = 0x10, ///< Results can contain other items

    TYPED_ATOMIC_TYPE = (NUMERIC_TYPE | ANY_URI_TYPE | OTHER_TYPE),
    ANY_ATOMIC_TYPE = (TYPED_ATOMIC_TYPE | UNTYPED_ATOMIC_TYPE),
    ITEM_TYPE = (NODE_TYPE | ANY_ATOMIC_TYPE)
  };

  static unsigned int getFlagsFor(const XMLCh *uri, const XMLCh *name, const StaticContext *context);
  static unsigned int getFlagsFor(AnyAtomicType::AtomicObjectType primitiveType);

  void typeUnion(const StaticType &st);
  bool isNodesOnly() const;

  unsigned int flags;
};

#endif
