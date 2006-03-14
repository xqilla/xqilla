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
    NODE_TYPE                = 0x00000001, ///< Results can contain nodes

    ANY_SIMPLE_TYPE          = 0x00000002,
    ANY_URI_TYPE             = 0x00000004,
    BASE_64_BINARY_TYPE      = 0x00000008,
    BOOLEAN_TYPE             = 0x00000010,
    DATE_TYPE                = 0x00000020,
    DATE_TIME_TYPE           = 0x00000040,
    DAY_TIME_DURATION_TYPE   = 0x00000080,
    DECIMAL_TYPE             = 0x00000100,
    DOUBLE_TYPE              = 0x00000200,
    DURATION_TYPE            = 0x00000400,
    FLOAT_TYPE               = 0x00000800,
    G_DAY_TYPE               = 0x00001000,
    G_MONTH_TYPE             = 0x00002000,
    G_MONTH_DAY_TYPE         = 0x00004000,
    G_YEAR_TYPE              = 0x00008000,
    G_YEAR_MONTH_TYPE        = 0x00010000,
    HEX_BINARY_TYPE          = 0x00020000,
    NOTATION_TYPE            = 0x00040000,
    QNAME_TYPE               = 0x00080000,
    STRING_TYPE              = 0x00100000,
    TIME_TYPE                = 0x00200000,
    UNTYPED_ATOMIC_TYPE      = 0x00400000,
    YEAR_MONTH_DURATION_TYPE = 0x00800000,

    NUMERIC_TYPE        = DECIMAL_TYPE | FLOAT_TYPE | DOUBLE_TYPE,

    TYPED_ATOMIC_TYPE = (NUMERIC_TYPE | ANY_SIMPLE_TYPE | ANY_URI_TYPE | BASE_64_BINARY_TYPE | BOOLEAN_TYPE | DATE_TYPE | DATE_TIME_TYPE | DAY_TIME_DURATION_TYPE | DURATION_TYPE | G_DAY_TYPE | G_MONTH_TYPE | G_MONTH_DAY_TYPE | G_YEAR_TYPE | G_YEAR_MONTH_TYPE | HEX_BINARY_TYPE | NOTATION_TYPE | QNAME_TYPE | STRING_TYPE | TIME_TYPE | YEAR_MONTH_DURATION_TYPE),
    ANY_ATOMIC_TYPE = (TYPED_ATOMIC_TYPE | UNTYPED_ATOMIC_TYPE),
    ITEM_TYPE = (NODE_TYPE | ANY_ATOMIC_TYPE)
  };

  StaticType() : flags(0) {}

  static unsigned int getFlagsFor(const XMLCh *uri, const XMLCh *name, const StaticContext *context,
                                  bool &isExact);
  static unsigned int getFlagsFor(AnyAtomicType::AtomicObjectType primitiveType);

  void typeUnion(const StaticType &st);
  bool isNodesOnly() const;

  bool containsType(unsigned int type) const;
  bool isType(unsigned int type) const;

  unsigned int flags;
};

#endif
