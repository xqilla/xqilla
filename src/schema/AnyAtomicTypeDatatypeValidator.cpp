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
#include <xqilla/schema/AnyAtomicTypeDatatypeValidator.hpp>
#include <xercesc/validators/datatype/DatatypeValidator.hpp>
#include <xercesc/util/RefHashTableOf.hpp>
#include <xercesc/util/RefArrayVectorOf.hpp>
#include <xercesc/util/XercesDefs.hpp>


AnyAtomicTypeDatatypeValidator::AnyAtomicTypeDatatypeValidator(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* const manager) :  XERCES_CPP_NAMESPACE_QUALIFIER AnySimpleTypeDatatypeValidator(manager) {
}

AnyAtomicTypeDatatypeValidator::~AnyAtomicTypeDatatypeValidator () {
}

XERCES_CPP_NAMESPACE_QUALIFIER DatatypeValidator* AnyAtomicTypeDatatypeValidator::newInstance
(
      XERCES_CPP_NAMESPACE_QUALIFIER RefHashTableOf<XERCES_CPP_NAMESPACE_QUALIFIER KVStringPair>* const facets
    , XERCES_CPP_NAMESPACE_QUALIFIER RefArrayVectorOf<XMLCh>* const      enums
    , const int                           finalSet
    , XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* const                manager
)
{
  return new (manager) AnyAtomicTypeDatatypeValidator(manager);
}
