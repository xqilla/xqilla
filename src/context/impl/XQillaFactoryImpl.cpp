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

#include "../config/xqilla_config.h"
#include <assert.h>

#include <xqilla/context/impl/XQillaFactoryImpl.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/functions/FunctionConstructor.hpp>
#include <xqilla/items/impl/ATBooleanOrDerivedImpl.hpp>
#include <xqilla/items/impl/ATDecimalOrDerivedImpl.hpp>
#include <xqilla/items/impl/ATDoubleOrDerivedImpl.hpp>
#include <xqilla/items/impl/ATFloatOrDerivedImpl.hpp>
#include <xqilla/items/impl/ATQNameOrDerivedImpl.hpp>
#include <xqilla/items/impl/NodeImpl.hpp>
#include <xqilla/items/ATDurationOrDerived.hpp>
#include <xqilla/items/ATUntypedAtomic.hpp>
#include <xqilla/utils/XPath2Utils.hpp>

#include <xercesc/util/XMLString.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xercesc/validators/datatype/DatatypeValidator.hpp>
#include <xercesc/dom/DOM.hpp>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

XQillaFactoryImpl::XQillaFactoryImpl(const DocumentCache* dc, MemoryManager* memMgr)
  : datatypeLookup_(dc, memMgr)
{
}

XQillaFactoryImpl::~XQillaFactoryImpl()
{
}

AnyAtomicType::AtomicObjectType XQillaFactoryImpl::getPrimitiveTypeIndex(const XMLCh* typeURI, const XMLCh* typeName) const
{
  bool isPrimitive;
  const DatatypeFactory* dtf = datatypeLookup_.lookupDatatype(typeURI, typeName, isPrimitive);
  return dtf->getPrimitiveTypeIndex();
}

ATQNameOrDerived::Ptr XQillaFactoryImpl::createQName(const XMLCh* uri,
	const XMLCh *prefix,
	const XMLCh* name, 
	const DynamicContext* context
	) {
  return createQNameOrDerived(
    SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_QNAME,
    uri,
    prefix,
    name,
    context
    );
}

ATDoubleOrDerived::Ptr XQillaFactoryImpl::createDouble(const MAPM value, const DynamicContext* context) {
  return createDoubleOrDerived(
    SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_DOUBLE,
    value, context);
}

ATDoubleOrDerived::Ptr XQillaFactoryImpl::createDouble(const XMLCh* value, const DynamicContext* context) {
  return datatypeLookup_.getDoubleFactory()->createInstance(value, context);
}

ATFloatOrDerived::Ptr XQillaFactoryImpl::createFloat(const MAPM value, const DynamicContext* context) {
  return createFloatOrDerived(
    SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_FLOAT,
    value, context);
}

ATFloatOrDerived::Ptr XQillaFactoryImpl::createFloat(const XMLCh* value, const DynamicContext* context) {
  return datatypeLookup_.getFloatFactory()->createInstance(value, context);
}

ATDecimalOrDerived::Ptr XQillaFactoryImpl::createDecimal(const MAPM value, const DynamicContext* context) {
  return createDecimalOrDerived(
    SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_DECIMAL,
    value, context);
}

ATDecimalOrDerived::Ptr XQillaFactoryImpl::createDecimal(const XMLCh* value, const DynamicContext* context) {
  return datatypeLookup_.getDecimalFactory()->createInstance(value, context);
}

ATDecimalOrDerived::Ptr XQillaFactoryImpl::createInteger(const int value, const DynamicContext* context) {
  return context->getMemoryManager()->createInteger(value);
}

ATDecimalOrDerived::Ptr XQillaFactoryImpl::createInteger(const MAPM value, const DynamicContext* context) {
  return createDecimalOrDerived(
    SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_INTEGER,
    value, context);
}

ATBooleanOrDerived::Ptr XQillaFactoryImpl::createBoolean(bool value, const DynamicContext* context) {
  return createBooleanOrDerived(
    SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_BOOLEAN,
    value, context);  
}

ATBooleanOrDerived::Ptr XQillaFactoryImpl::createBoolean(const XMLCh* value, const DynamicContext* context) {
  return datatypeLookup_.getBooleanFactory()->createInstance(value, context);
}

ATDecimalOrDerived::Ptr XQillaFactoryImpl::createNonNegativeInteger(const MAPM value, const DynamicContext* context) {
  return createDecimalOrDerived(
    SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
    SchemaSymbols::fgDT_NONNEGATIVEINTEGER,
    value, context);
}
      
ATDurationOrDerived::Ptr XQillaFactoryImpl::createDayTimeDuration(const XMLCh* value, const DynamicContext* context) {
  return datatypeLookup_.getDurationFactory()->
    createInstance(FunctionConstructor::XMLChXPath2DatatypesURI, 
                   ATDurationOrDerived::fgDT_DAYTIMEDURATION, value, context);
}

ATDurationOrDerived::Ptr XQillaFactoryImpl::createYearMonthDuration(const XMLCh* value, const DynamicContext* context) {
  return datatypeLookup_.getDurationFactory()->
    createInstance(FunctionConstructor::XMLChXPath2DatatypesURI, 
                   ATDurationOrDerived::fgDT_YEARMONTHDURATION, value, context);
}

ATDateOrDerived::Ptr XQillaFactoryImpl::createDate(const XMLCh* value, const DynamicContext* context) {
  return datatypeLookup_.getDateFactory()->createInstance(value, context);
}

ATDateTimeOrDerived::Ptr XQillaFactoryImpl::createDateTime(const XMLCh* value, const DynamicContext* context) {
  return datatypeLookup_.getDateTimeFactory()->createInstance(value, context);
}

ATTimeOrDerived::Ptr XQillaFactoryImpl::createTime(const XMLCh* value, const DynamicContext* context) {
  return datatypeLookup_.getTimeFactory()->createInstance(value, context);
}

ATAnyURIOrDerived::Ptr XQillaFactoryImpl::createAnyURI(const XMLCh* value, const DynamicContext* context) {
  return datatypeLookup_.getAnyURIFactory()->createInstance(value, context);
}

ATStringOrDerived::Ptr XQillaFactoryImpl::createString(const XMLCh* value, const DynamicContext* context) {
  return datatypeLookup_.getStringFactory()->createInstance(value, context);
}

//////////////////////////
// All creation methods //
//////////////////////////


AnyAtomicType::Ptr XQillaFactoryImpl::createDerivedFromAtomicType(AnyAtomicType::AtomicObjectType typeIndex, const XMLCh* typeURI,
                                                                  const XMLCh* typeName, const XMLCh* value, const DynamicContext* context)
{
  return datatypeLookup_.lookupDatatype(typeIndex)->createInstance(typeURI, typeName, value, context);
}

AnyAtomicType::Ptr XQillaFactoryImpl::createDerivedFromAtomicType(const XMLCh* typeURI,
                                                                  const XMLCh* typeName, 
                                                                  const XMLCh* value, const DynamicContext* context) {
  bool isPrimitive;
  const DatatypeFactory* dtf = datatypeLookup_.lookupDatatype(typeURI, typeName, isPrimitive);
  if(isPrimitive) {
    return dtf->createInstance(value, context);
  }
  else {
    return dtf->createInstance(typeURI, typeName, value, context);
  }
}

/** create a xs:boolean */
ATBooleanOrDerived::Ptr XQillaFactoryImpl::createBooleanOrDerived(const XMLCh* typeURI, 
                                                                  const XMLCh* typeName,
                                                                  const XMLCh* value, 
                                                                  const DynamicContext* context) {
  return (const ATBooleanOrDerived::Ptr)datatypeLookup_.getBooleanFactory()->createInstance(typeURI, typeName, value, context);
}

/** create a xs:boolean with a bool value */
ATBooleanOrDerived::Ptr XQillaFactoryImpl::createBooleanOrDerived(const XMLCh* typeURI, 
                                                                  const XMLCh* typeName,
                                                                  bool value, 
                                                                  const DynamicContext* context) {
  // No need to validate
  return new ATBooleanOrDerivedImpl(typeURI, typeName, value, context);
}

/** create a xs:date */
ATDateOrDerived::Ptr XQillaFactoryImpl::createDateOrDerived(const XMLCh* typeURI, 
                                                            const XMLCh* typeName,
                                                            const XMLCh* value, 
                                                            const DynamicContext* context){
  return (const ATDateOrDerived::Ptr)datatypeLookup_.getDateFactory()->createInstance(typeURI, typeName, value, context);
}


/** create a xs:dateTime */
ATDateTimeOrDerived::Ptr XQillaFactoryImpl::createDateTimeOrDerived(const XMLCh* typeURI, 
                                                                    const XMLCh* typeName,
                                                                    const XMLCh* value,
                                                                    const DynamicContext* context){
  return (const ATDateTimeOrDerived::Ptr)datatypeLookup_.getDateTimeFactory()->createInstance(typeURI, typeName, value, context);
}

/** create a xs:decimal */
ATDecimalOrDerived::Ptr XQillaFactoryImpl::createDecimalOrDerived(const XMLCh* typeURI, 
                                                                  const XMLCh* typeName,
                                                                  const XMLCh* value,
                                                                  const DynamicContext* context){
  return (const ATDecimalOrDerived::Ptr)datatypeLookup_.getDecimalFactory()->createInstance(typeURI, typeName, value, context);
}

/** create a xs:decimal with a MAPM */
ATDecimalOrDerived::Ptr XQillaFactoryImpl::createDecimalOrDerived(const XMLCh* typeURI, 
                                                                  const XMLCh* typeName,
                                                                  const MAPM value,
                                                                  const DynamicContext* context){
  // No need to validate
  return new ATDecimalOrDerivedImpl(typeURI, typeName, value, context);
}


/** create a xs:double */  
ATDoubleOrDerived::Ptr XQillaFactoryImpl::createDoubleOrDerived(const XMLCh* typeURI, 
                                                                const XMLCh* typeName,
                                                                const XMLCh* value, 
                                                                const DynamicContext* context){
  if(XPath2Utils::equals(value, Numeric::NAN_string)) {
    value= Numeric::NaN_string;
  }
  return (const ATDoubleOrDerived::Ptr)datatypeLookup_.getDoubleFactory()->createInstance(typeURI, typeName, value, context);
}

/** create a xs:double with a MAPM */
ATDoubleOrDerived::Ptr XQillaFactoryImpl::createDoubleOrDerived(const XMLCh* typeURI, 
                                                                const XMLCh* typeName,
                                                                const MAPM value, 
                                                                const DynamicContext* context){
  // No need to validate
  return  new ATDoubleOrDerivedImpl(typeURI, typeName, value, context);
}


/** create a xs:duration */
ATDurationOrDerived::Ptr XQillaFactoryImpl::createDurationOrDerived(const XMLCh* typeURI, 
                                                                    const XMLCh* typeName,
                                                                    const XMLCh* value, 
                                                                    const DynamicContext* context){
  return (const ATDurationOrDerived::Ptr)datatypeLookup_.getDurationFactory()->createInstance(typeURI, typeName, value, context);
}

/** create a xs:float */
ATFloatOrDerived::Ptr XQillaFactoryImpl::createFloatOrDerived(const XMLCh* typeURI, 
                                                              const XMLCh* typeName,
                                                              const XMLCh* value, 
                                                              const DynamicContext* context){
  if(XMLString::equals(value, Numeric::NAN_string)) {
    value= Numeric::NaN_string;
  }
  return (const ATFloatOrDerived::Ptr)datatypeLookup_.getFloatFactory()->createInstance(typeURI, typeName, value, context);

}

/** create a xs:float with a MAPM */
ATFloatOrDerived::Ptr XQillaFactoryImpl::createFloatOrDerived(const XMLCh* typeURI, 
                                                              const XMLCh* typeName,
                                                              const MAPM value, 
                                                              const DynamicContext* context) {
  // No need to validate
  return  new ATFloatOrDerivedImpl(typeURI, typeName, value, context);
}

/** create a xs:gDay */
ATGDayOrDerived::Ptr XQillaFactoryImpl::createGDayOrDerived(const XMLCh* typeURI, 
                                                            const XMLCh* typeName,
                                                            const XMLCh* value, 
                                                            const DynamicContext* context) {
  return (const ATGDayOrDerived::Ptr)datatypeLookup_.getGDayFactory()->createInstance(typeURI, typeName, value, context);
}

/** create a xs:gMonth */
ATGMonthOrDerived::Ptr XQillaFactoryImpl::createGMonthOrDerived(const XMLCh* typeURI, 
                                                                const XMLCh* typeName,
                                                                const XMLCh* value, 
                                                                const DynamicContext* context) {
  return (const ATGMonthOrDerived::Ptr)datatypeLookup_.getGMonthFactory()->createInstance(typeURI, typeName, value, context);

}


/** create a xs:gMonthDay */
ATGMonthDayOrDerived::Ptr XQillaFactoryImpl::createGMonthDayOrDerived(const XMLCh* typeURI, 
                                                                      const XMLCh* typeName,
                                                                      const XMLCh* value, 
                                                                      const DynamicContext* context) {
  return (const ATGMonthDayOrDerived::Ptr)datatypeLookup_.getGMonthDayFactory()->createInstance(typeURI, typeName, value, context);
}

/** create a xs:gYear */
ATGYearOrDerived::Ptr XQillaFactoryImpl::createGYearOrDerived(const XMLCh* typeURI, 
                                                              const XMLCh* typeName,
                                                              const XMLCh* value, 
                                                              const DynamicContext* context) {
  return (const ATGYearOrDerived::Ptr)datatypeLookup_.getGYearFactory()->createInstance(typeURI, typeName, value, context);
}


/** create a xs:gYearMonth */
ATGYearMonthOrDerived::Ptr XQillaFactoryImpl::createGYearMonthOrDerived(const XMLCh* typeURI, 
                                                                        const XMLCh* typeName,
                                                                        const XMLCh* value, 
                                                                        const DynamicContext* context) {
  return (const ATGYearMonthOrDerived::Ptr)datatypeLookup_.getGYearMonthFactory()->createInstance(typeURI, typeName, value, context);
}

/** create a xs:QName with two parameters */
ATQNameOrDerived::Ptr XQillaFactoryImpl::createQNameOrDerived(const XMLCh* typeURI, 
	const XMLCh* typeName,
	const XMLCh* uri,
	const XMLCh* prefix,
	const XMLCh* name, 
	const DynamicContext* context) {

  ATQNameOrDerivedImpl* tmp =  new ATQNameOrDerivedImpl(typeURI, typeName, uri, prefix, name, context);
  
  const DatatypeFactory* dtf_anyURI = datatypeLookup_.getAnyURIFactory();
  if(dtf_anyURI->checkInstance(uri, context)) {
    const DatatypeFactory* dtf_NCName = datatypeLookup_.getStringFactory();
    if (dtf_NCName->checkInstance(SchemaSymbols::fgURI_SCHEMAFORSCHEMA, SchemaSymbols::fgDT_NCNAME, name, context)) {
      return tmp;
    } else {
      // this call will obviously fail, but it is better for error reporting, 
      // since we actually get the XMLException's error message 
      return (const ATQNameOrDerived::Ptr )dtf_NCName->
        createInstance(SchemaSymbols::fgURI_SCHEMAFORSCHEMA, SchemaSymbols::fgDT_NCNAME, name, context);
    }
  } else {
    // this call will obviously fail, but it is better for error reporting, 
    // since we actually get the XMLException's error message 
    return (const ATQNameOrDerived::Ptr )dtf_anyURI->createInstance(uri, context);
  }
}


/** create a xs:string */
ATStringOrDerived::Ptr XQillaFactoryImpl::createStringOrDerived(const XMLCh* typeURI, 
                                                                const XMLCh* typeName,
                                                                const XMLCh* value, 
                                                                const DynamicContext* context) {
  return (const ATStringOrDerived::Ptr)datatypeLookup_.getStringFactory()->createInstance(typeURI, typeName, value, context);
}

/** create a xs:time */
ATTimeOrDerived::Ptr XQillaFactoryImpl::createTimeOrDerived(const XMLCh* typeURI, 
                                                            const XMLCh* typeName,
                                                            const XMLCh* value, 
                                                            const DynamicContext* context){
  return (const ATTimeOrDerived::Ptr)datatypeLookup_.getTimeFactory()->createInstance(typeURI, typeName, value, context);
}

/** create an xdt:untypedAtomic */
ATUntypedAtomic::Ptr XQillaFactoryImpl::createUntypedAtomic(const XMLCh* value, const DynamicContext* context) {
  return (const ATUntypedAtomic::Ptr)datatypeLookup_.getUntypedAtomicFactory()->createInstance(value, context);
}
