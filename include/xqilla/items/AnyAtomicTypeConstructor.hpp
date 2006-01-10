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

#ifndef _ANYATOMICTYPECONSTUCTOR_HPP
#define _ANYATOMICTYPECONSTUCTOR_HPP

#include <xqilla/items/ItemConstructor.hpp>
#include <xercesc/util/XercesDefs.hpp>

class XQILLA_API AnyAtomicTypeConstructor : public ItemConstructor {
public:
  AnyAtomicTypeConstructor(const XMLCh* typeURI,
                           const XMLCh* typeName,
                           const XMLCh* value,
                           bool numeric);
  virtual ~AnyAtomicTypeConstructor() {}

  virtual bool isNumeric() const;

  virtual Item::Ptr createItem(const DynamicContext* context) const;
  virtual std::string asString(const DynamicContext* context) const;

private:
  const XMLCh *_typeURI;
  const XMLCh *_typeName;
  const XMLCh *_value;
  bool _numeric;
};

#endif

