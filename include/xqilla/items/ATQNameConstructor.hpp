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

#ifndef _ATQNAMECONSTUCTOR_HPP
#define _ATQNAMECONSTUCTOR_HPP

#include <xqilla/items/ItemConstructor.hpp>
#include <xercesc/util/XercesDefs.hpp>

class XQILLA_API ATQNameConstructor : public ItemConstructor {
public:
  ATQNameConstructor(const XMLCh* typeURI,
		     const XMLCh* typeName,
		     const XMLCh* uri,
             const XMLCh* prefix,
		     const XMLCh* localname);

  virtual bool isNumeric() const;

  virtual Item::Ptr createItem(const DynamicContext* context) const;
  virtual std::string asString(const DynamicContext* context) const;

private:
  const XMLCh *_typeURI;
  const XMLCh *_typeName;
  const XMLCh *_uri;
  const XMLCh *_prefix;
  const XMLCh *_localname;
};

#endif
