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

#include <xqilla/framework/XQillaExport.hpp>

#include <xercesc/validators/datatype/AnySimpleTypeDatatypeValidator.hpp>
#include <xercesc/validators/datatype/DatatypeValidator.hpp>
#include <xercesc/util/RefHashTableOf.hpp>
#include <xercesc/util/RefArrayVectorOf.hpp>
#include <xercesc/util/XercesDefs.hpp>
#include <xercesc/framework/MemoryManager.hpp>
#include <xercesc/util/PlatformUtils.hpp>

class KVStringPair;

class XQILLA_API AnyAtomicTypeDatatypeValidator : public XERCES_CPP_NAMESPACE_QUALIFIER AnySimpleTypeDatatypeValidator {

public:
  // constructor
  AnyAtomicTypeDatatypeValidator(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* const manager  = XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager);

  // destructor
  virtual ~AnyAtomicTypeDatatypeValidator();

  virtual XERCES_CPP_NAMESPACE_QUALIFIER DatatypeValidator* newInstance(
      XERCES_CPP_NAMESPACE_QUALIFIER RefHashTableOf<XERCES_CPP_NAMESPACE_QUALIFIER KVStringPair>* const facets,
      XERCES_CPP_NAMESPACE_QUALIFIER RefArrayVectorOf<XMLCh>* const enums, 
      const int finalSet, 
      XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* const manager);

};

