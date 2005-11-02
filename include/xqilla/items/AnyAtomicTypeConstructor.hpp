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

#ifndef _ANYATOMICTYPECONSTUCTOR_HPP
#define _ANYATOMICTYPECONSTUCTOR_HPP

#include <xqilla/items/ItemConstructor.hpp>
#include <xercesc/util/XercesDefs.hpp>

class PATHAN_EXPORT AnyAtomicTypeConstructor : public ItemConstructor {
public:
  AnyAtomicTypeConstructor(const XMLCh* typeURI,
                           const XMLCh* typeName,
                           const XMLCh* value,
                           bool numeric);

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

