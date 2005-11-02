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

#ifndef _ATUNTYPEDATOMICIMPL_HPP
#define _ATUNTYPEDATOMICIMPL_HPP

#include <xercesc/util/XercesDefs.hpp>
#include <xqilla/items/ATUntypedAtomic.hpp>

#include <xqilla/framework/Pathan.hpp>
class DynamicContext;

class PATHAN_EXPORT ATUntypedAtomicImpl : public ATUntypedAtomic
{

public:

  /* constructor */
  ATUntypedAtomicImpl(const XMLCh*, const XMLCh*, const XMLCh* value, const StaticContext* context);

  virtual void *getInterface(const XMLCh *name) const;

  /* Get the namespace uri of the primitive type (basic type) of this type */
  virtual const XMLCh* getPrimitiveTypeURI() const;

  /* Get the name of the primitive type (basic type) of this type
   * (ie "decimal" for xs:decimal) */
  virtual const XMLCh* getPrimitiveTypeName() const;

  /* Get the namespace URI for this type */
  virtual const XMLCh* getTypeURI() const;

  /* Get the name of this type  (ie "integer" for xs:integer) */
  virtual const XMLCh* getTypeName() const;

  /* returns the XMLCh* (canonical) representation of this type */
  virtual const XMLCh* asString(const DynamicContext* context) const;

  /* returns true if the two objects' URI are equal (string comparison)
   * false otherwise */
  virtual bool equals(const AnyAtomicType::Ptr &target, const DynamicContext* context) const;
  
  /* Get the primitive index associated with this type */
  static AnyAtomicType::AtomicObjectType getTypeIndex(); 

  /* Get the primitive type name */
  static const XMLCh* getPrimitiveName();

  /* Get the primitive index associated with this type */
  virtual AnyAtomicType::AtomicObjectType getPrimitiveTypeIndex() const;

protected:
  
  /* If possible, cast this type to the target type */
  virtual AnyAtomicType::Ptr castAsInternal(AtomicObjectType targetIndex, const XMLCh* targetURI, const XMLCh* targetType, const DynamicContext* context) const;

private:

  /*The value of this URI*/
  const XMLCh* _value;
 
};

#endif // _ATUNTYPEDATOMICIMPL_HPP
