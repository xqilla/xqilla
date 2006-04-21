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

#include "../../config/xqilla_config.h"
#include "ATNotationOrDerivedImpl.hpp"
#include <xqilla/exceptions/IllegalArgumentException.hpp>
#include <xqilla/exceptions/NamespaceLookupException.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/context/DynamicContext.hpp>

ATNotationOrDerivedImpl::
ATNotationOrDerivedImpl(const XMLCh* typeURI, const XMLCh* typeName, const XMLCh* value, const StaticContext* context): 
    ATNotationOrDerived(),
    _typeName(typeName),
    _typeURI(typeURI) { 
    
  _notation = context->getMemoryManager()->getPooledString(value);
      
  const XMLCh* prefix = XPath2NSUtils::getPrefix(_notation, context->getMemoryManager());
  const XMLCh* uri;
  if(prefix==0 || *prefix==0)
    uri = 0;
  else 
  {
    try
    {
      uri = context->getUriBoundToPrefix(prefix);
    }
    catch(NamespaceLookupException&)
    {
      XQThrow(StaticErrorException, X("ATNotationOrDerivedImpl::ATNotationOrDerivedImpl"),X("No namespace for prefix [err:XPST0081]"));
    }
  }

  // _uri will be null if there is no default NS
  _uri = context->getMemoryManager()->getPooledString(uri);
  _name = context->getMemoryManager()->getPooledString(XPath2NSUtils::getLocalName(_notation));
}

void *ATNotationOrDerivedImpl::getInterface(const XMLCh *name) const
{
  if(name == Item::gXQilla) {
    return (void*)this;
  }
  return 0;
}

/* Get the name of the primitive type (basic type) of this type
 * (ie "decimal" for xs:decimal) */
const XMLCh* ATNotationOrDerivedImpl::getPrimitiveTypeName() const {
  return this->getPrimitiveName();
}

const XMLCh* ATNotationOrDerivedImpl::getPrimitiveName()  {
  return XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgNotationString;
}

/* Get the name of this type  (ie "integer" for xs:integer) */
const XMLCh* ATNotationOrDerivedImpl::getTypeName() const {
  return _typeName;
}

/* Get the namespace URI for this type */
const XMLCh* ATNotationOrDerivedImpl::getTypeURI() const {
  return _typeURI; 
}

AnyAtomicType::AtomicObjectType ATNotationOrDerivedImpl::getTypeIndex() {
  return AnyAtomicType::NOTATION;
} 

/* returns the XMLCh* (canonical) representation of this type */
const XMLCh* ATNotationOrDerivedImpl::asString(const DynamicContext* context) const {
  return _notation;
}

/* returns true if the two objects are equal (string comparison)
   * false otherwise */
bool ATNotationOrDerivedImpl::equals(const AnyAtomicType::Ptr &target, const DynamicContext* context) const {
  if(this->getPrimitiveTypeIndex() != target->getPrimitiveTypeIndex()) {
    XQThrow(IllegalArgumentException,X("ATNotationOrDerivedImpl::equals"), X("Equality operator for given types not supported"));
  }
  ATNotationOrDerivedImpl* other=(ATNotationOrDerivedImpl*)target->getInterface(Item::gXQilla);
  return XPath2Utils::equals(other->_uri, _uri) && XPath2Utils::equals(other->_name, _name) ;
}

AnyAtomicType::AtomicObjectType ATNotationOrDerivedImpl::getPrimitiveTypeIndex() const {
  return this->getTypeIndex();
}
