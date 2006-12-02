/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Oracle. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

#include "../config/xqilla_config.h"
#include "FunctionLookupImpl.hpp"
#include <xqilla/functions/FuncFactory.hpp>
#include <xqilla/functions/ExternalFunction.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>

FunctionLookupImpl::FunctionLookupImpl(bool update, XPath2MemoryManager* memMgr)
  : _uriPool(17, memMgr),
    _funcTable(197, false, memMgr),
    _exFuncTable(7, false, memMgr),
    _memMgr(memMgr)
{
  createTable(update);
}

FunctionLookupImpl::~FunctionLookupImpl()
{
}

void FunctionLookupImpl::replaceFunction(FuncFactory *func)
{
    unsigned int nMax=func->getMaxArgs();
    unsigned int uriId=_uriPool.addOrFind(func->getURI());
    for(unsigned int i=func->getMinArgs(); i<=nMax; i++)
    {
        unsigned int secondaryKey=uriId | (i << 16);
        _funcTable.put((void*)func->getName(), secondaryKey, func);
    }
}

void FunctionLookupImpl::insertFunction(FuncFactory *func)
{
    unsigned int nMax=func->getMaxArgs();
    unsigned int uriId=_uriPool.addOrFind(func->getURI());
    for(unsigned int i=func->getMinArgs(); i<=nMax; i++)
    {
        unsigned int secondaryKey=uriId | (i << 16);
        if(_funcTable.containsKey((void*)func->getName(), secondaryKey))
        {
            XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer buf(1023,_memMgr);
            buf.set(X("Multiple functions have the same expanded QName {"));
            buf.append(func->getURI());
            buf.append(X("}"));
            buf.append(func->getName());
            buf.append(X("/"));
            XMLCh szInt[10];
            XERCES_CPP_NAMESPACE_QUALIFIER XMLString::binToText(i,szInt,9,10,_memMgr);
            buf.append(szInt);
            buf.append(X(" [err:XQST0034]."));
            XQThrow2(StaticErrorException,X("FunctionLookupImpl::insertFunction"), buf.getRawBuffer());
        }
        _funcTable.put((void*)func->getName(), secondaryKey, func);
    }
}

ASTNode* FunctionLookupImpl::lookUpFunction(const XMLCh* URI, const XMLCh* fname,
                                             const VectorOfASTNodes &args, XPath2MemoryManager* memMgr) const
{
    if(!_uriPool.exists(URI))
      return NULL;  
    unsigned int secondaryKey=_uriPool.getId(URI) | (args.size() << 16);
    const FuncFactory* pFactory=_funcTable.get((void*)fname, secondaryKey);
    if(pFactory)
        return pFactory->createInstance(args, memMgr);
    return NULL;
}

void FunctionLookupImpl::insertExternalFunction(const ExternalFunction *func)
{
  unsigned int secondaryKey = _uriPool.addOrFind(func->getURI()) | (func->getNumberOfArguments() << 16);
  _exFuncTable.put((void*)func->getName(), secondaryKey, func);
}

const ExternalFunction *FunctionLookupImpl::lookUpExternalFunction(const XMLCh* URI, const XMLCh* fname, unsigned int numArgs) const
{
  if(!_uriPool.exists(URI)) return NULL;  
  unsigned int secondaryKey = _uriPool.getId(URI) | (numArgs << 16);
  return _exFuncTable.get((void*)fname, secondaryKey);
}

bool equalNsAndName1(const std::pair<const XMLCh*,const XMLCh*>& first, const std::pair<const XMLCh*,const XMLCh*>& second)
{
    return (XERCES_CPP_NAMESPACE::XMLString::equals(first.first, second.first) &&
           XERCES_CPP_NAMESPACE::XMLString::equals(first.second, second.second));
}

std::vector< std::pair<const XMLCh*,const XMLCh*> > FunctionLookupImpl::getFunctions() const
{
  std::vector< std::pair<const XMLCh*,const XMLCh*> > retVal;
  XERCES_CPP_NAMESPACE_QUALIFIER RefHash2KeysTableOfEnumerator<FuncFactory> iterator(const_cast<XERCES_CPP_NAMESPACE_QUALIFIER RefHash2KeysTableOf< FuncFactory >* >(&_funcTable));
  while(iterator.hasMoreElements())
  {
    FuncFactory& entry=iterator.nextElement();
    retVal.push_back(std::pair<const XMLCh*,const XMLCh*>(entry.getURI(), entry.getName()));
  }
  retVal.erase(std::unique(retVal.begin(), retVal.end(), equalNsAndName1), retVal.end());
  return retVal;
}

std::vector< FuncFactory* > FunctionLookupImpl::getFunctionFactories() const
{
  std::vector< FuncFactory* > retVal;
  XERCES_CPP_NAMESPACE_QUALIFIER RefHash2KeysTableOfEnumerator<FuncFactory> iterator(const_cast<XERCES_CPP_NAMESPACE_QUALIFIER RefHash2KeysTableOf< FuncFactory >* >(&_funcTable));
  while(iterator.hasMoreElements())
  {
    FuncFactory& entry=iterator.nextElement();
    retVal.push_back(&entry);
  }
  retVal.erase(std::unique(retVal.begin(), retVal.end()), retVal.end());
  return retVal;
}


//////////////////////////////////////////////////////////////////////////

#include "FuncFactoryTemplate.hpp"
#include <xqilla/functions/FunctionAbs.hpp>
#include <xqilla/functions/FunctionAvg.hpp>
#include <xqilla/functions/FunctionBaseURI.hpp>
#include <xqilla/functions/FunctionBoolean.hpp>
#include <xqilla/functions/FunctionCeiling.hpp>
#include <xqilla/functions/FunctionCollection.hpp>
#include <xqilla/functions/FunctionCompare.hpp>
#include <xqilla/functions/FunctionCodepointEqual.hpp>
#include <xqilla/functions/FunctionConcat.hpp>
#include <xqilla/functions/FunctionConstructor.hpp>
#include <xqilla/functions/FunctionContains.hpp>
#include <xqilla/functions/FunctionCount.hpp>
#include <xqilla/functions/FunctionCurrentDate.hpp>
#include <xqilla/functions/FunctionCurrentDateTime.hpp>
#include <xqilla/functions/FunctionCurrentTime.hpp>
#include <xqilla/functions/FunctionData.hpp>
#include <xqilla/functions/FunctionDateTime.hpp>
#include <xqilla/functions/FunctionDeepEqual.hpp>
#include <xqilla/functions/FunctionDefaultCollation.hpp>
#include <xqilla/functions/FunctionDistinctValues.hpp>
#include <xqilla/functions/FunctionDoc.hpp>
#include <xqilla/functions/FunctionDocAvailable.hpp>
#include <xqilla/functions/FunctionDocumentURI.hpp>
#include <xqilla/functions/FunctionEmpty.hpp>
#include <xqilla/functions/FunctionEncodeForUri.hpp>
#include <xqilla/functions/FunctionEndsWith.hpp>
#include <xqilla/functions/FunctionError.hpp>
#include <xqilla/functions/FunctionEscapeHtmlUri.hpp>
#include <xqilla/functions/FunctionExactlyOne.hpp>
#include <xqilla/functions/FunctionExists.hpp>
#include <xqilla/functions/FunctionQName.hpp>
#include <xqilla/functions/FunctionFalse.hpp>
#include <xqilla/functions/FunctionFloor.hpp>
#include <xqilla/functions/FunctionInScopePrefixes.hpp>
#include <xqilla/functions/FunctionPrefixFromQName.hpp>
#include <xqilla/functions/FunctionLocalNameFromQName.hpp>
#include <xqilla/functions/FunctionNamespaceURIFromQName.hpp>
#include <xqilla/functions/FunctionNamespaceURIForPrefix.hpp>
#include <xqilla/functions/FunctionId.hpp>
#include <xqilla/functions/FunctionIdref.hpp>
#include <xqilla/functions/FunctionImplicitTimezone.hpp>
#include <xqilla/functions/FunctionIndexOf.hpp>
#include <xqilla/functions/FunctionInsertBefore.hpp>
#include <xqilla/functions/FunctionIriToUri.hpp>
#include <xqilla/functions/FunctionLang.hpp>
#include <xqilla/functions/FunctionLast.hpp>
#include <xqilla/functions/FunctionLocalname.hpp>
#include <xqilla/functions/FunctionLowerCase.hpp>
#include <xqilla/functions/FunctionMatches.hpp>
#include <xqilla/functions/FunctionMax.hpp>
#include <xqilla/functions/FunctionMin.hpp>
#include <xqilla/functions/FunctionName.hpp>
#include <xqilla/functions/FunctionNamespaceUri.hpp>
#include <xqilla/functions/FunctionNilled.hpp>
#include <xqilla/functions/FunctionNodeName.hpp>
#include <xqilla/functions/FunctionNormalizeSpace.hpp>
#include <xqilla/functions/FunctionNormalizeUnicode.hpp>
#include <xqilla/functions/FunctionNot.hpp>
#include <xqilla/functions/FunctionNumber.hpp>
#include <xqilla/functions/FunctionOneOrMore.hpp>
#include <xqilla/functions/FunctionPosition.hpp>
#include <xqilla/functions/FunctionRemove.hpp>
#include <xqilla/functions/FunctionReplace.hpp>
#include <xqilla/functions/FunctionResolveQName.hpp>
#include <xqilla/functions/FunctionResolveURI.hpp>
#include <xqilla/functions/FunctionReverse.hpp>
#include <xqilla/functions/FunctionRoot.hpp>
#include <xqilla/functions/FunctionRound.hpp>
#include <xqilla/functions/FunctionRoundHalfToEven.hpp>
#include <xqilla/functions/FunctionStartsWith.hpp>
#include <xqilla/functions/FunctionStaticBaseURI.hpp>
#include <xqilla/functions/FunctionString.hpp>
#include <xqilla/functions/FunctionStringJoin.hpp>
#include <xqilla/functions/FunctionStringLength.hpp>
#include <xqilla/functions/FunctionStringToCodepoints.hpp>
#include <xqilla/functions/FunctionCodepointsToString.hpp>
#include <xqilla/functions/FunctionSubsequence.hpp>
#include <xqilla/functions/FunctionSubstring.hpp>
#include <xqilla/functions/FunctionSubstringAfter.hpp>
#include <xqilla/functions/FunctionSubstringBefore.hpp>
#include <xqilla/functions/FunctionSum.hpp>
#include <xqilla/functions/FunctionTokenize.hpp>
#include <xqilla/functions/FunctionTrace.hpp>
#include <xqilla/functions/FunctionTranslate.hpp>
#include <xqilla/functions/FunctionTrue.hpp>
#include <xqilla/functions/FunctionUnordered.hpp>
#include <xqilla/functions/FunctionUpperCase.hpp>
#include <xqilla/functions/FunctionZeroOrOne.hpp>
#include <xqilla/functions/FunctionYearsFromDuration.hpp>
#include <xqilla/functions/FunctionMonthsFromDuration.hpp>
#include <xqilla/functions/FunctionDaysFromDuration.hpp>
#include <xqilla/functions/FunctionHoursFromDuration.hpp>
#include <xqilla/functions/FunctionMinutesFromDuration.hpp>
#include <xqilla/functions/FunctionSecondsFromDuration.hpp>
#include <xqilla/functions/FunctionYearFromDateTime.hpp>
#include <xqilla/functions/FunctionMonthFromDateTime.hpp>
#include <xqilla/functions/FunctionDayFromDateTime.hpp>
#include <xqilla/functions/FunctionHoursFromDateTime.hpp>
#include <xqilla/functions/FunctionMinutesFromDateTime.hpp>
#include <xqilla/functions/FunctionSecondsFromDateTime.hpp>
#include <xqilla/functions/FunctionTimezoneFromDateTime.hpp>
#include <xqilla/functions/FunctionYearFromDate.hpp>
#include <xqilla/functions/FunctionMonthFromDate.hpp>
#include <xqilla/functions/FunctionDayFromDate.hpp>
#include <xqilla/functions/FunctionTimezoneFromDate.hpp>
#include <xqilla/functions/FunctionHoursFromTime.hpp>
#include <xqilla/functions/FunctionMinutesFromTime.hpp>
#include <xqilla/functions/FunctionSecondsFromTime.hpp>
#include <xqilla/functions/FunctionTimezoneFromTime.hpp>
#include <xqilla/functions/FunctionAdjustDateTimeToTimezone.hpp>
#include <xqilla/functions/FunctionAdjustDateToTimezone.hpp>
#include <xqilla/functions/FunctionAdjustTimeToTimezone.hpp>

#include <xqilla/update/FunctionPut.hpp>

void FunctionLookupImpl::createTable(bool update)
{
  // From the XPath2 Function & Operators list

  // Accessors:
  //   fn:node-name
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionNodeName>());
  //   fn:nilled
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionNilled>());
  //   fn:string
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionString>());
  //   fn:data
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionData>());
  //   fn:base-uri
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionBaseURI>());
  //   fn:document-uri
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionDocumentURI>());


  // Debug Functions:
  //   fn:error
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionError>());
  //   fn:trace
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionTrace>());

  // Special Constructor Functions:
  //   fn:dateTime
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionDateTime>());

  // Functions on numeric values:
  //   fn:abs
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionAbs>());
  //   fn:ceiling
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionCeiling>());
  //   fn:floor
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionFloor>());
  //   fn:round
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionRound>());
  //   fn:round-half-to-even
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionRoundHalfToEven>());

  // Functions on strings
  //   fn:codepoints-to-string
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionCodepointsToString>());
  //   fn:string-to-codepoints
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionStringToCodepoints>());
  //   fn:compare
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionCompare>());
  //   fn:codepoint-equal
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionCodepointEqual>());
  //   fn:concat
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionConcat>());
  //   fn:string-join
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionStringJoin>());
  //   fn:substring
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionSubstring>());
  //   fn:string-length
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionStringLength>());
  //   fn:normalize-space
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionNormalizeSpace>());
  //   fn:normalize-unicode
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionNormalizeUnicode>());
  //   fn:upper-case
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionUpperCase>());
  //   fn:lower-case
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionLowerCase>());
  //   fn:translate
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionTranslate>());
  //   fn:encode-for-uri
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionEncodeForUri>());
  //   fn:iri-to-uri
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionIriToUri>());
  //   fn:escape-html-uri
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionEscapeHtmlUri>());
  //   fn:contains
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionContains>());
  //   fn:starts-with
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionStartsWith>());
  //   fn:ends-with
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionEndsWith>());
  //   fn:substring-before
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionSubstringBefore>());
  //   fn:substring-after
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionSubstringAfter>());

  //   fn:matches
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionMatches>());
  //   fn:replace
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionReplace>());
  //   fn:tokenize
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionTokenize>());

  // Functions on boolean values
  //   fn:true
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionTrue>());
  //   fn:false
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionFalse>());
  //   fn:not
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionNot>());

  // Functions on date values
  //   fn:years-from-duration
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionYearsFromDuration>());
  //   fn:months-from-duration
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionMonthsFromDuration>());
  //   fn:days-from-duration
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionDaysFromDuration>());
  //   fn:hours-from-duration
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionHoursFromDuration>());
  //   fn:minutes-from-duration
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionMinutesFromDuration>());
  //   fn:seconds-from-duration
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionSecondsFromDuration>());
  //   fn:year-from-dateTime
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionYearFromDateTime>());
  //   fn:month-from-dateTime
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionMonthFromDateTime>());
  //   fn:day-from-dateTime
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionDayFromDateTime>());
  //   fn:hours-from-dateTime
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionHoursFromDateTime>());
  //   fn:minutes-from-dateTime
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionMinutesFromDateTime>());
  //   fn:seconds-from-dateTime
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionSecondsFromDateTime>());
  //   fn:timezone-from-dateTime
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionTimezoneFromDateTime>());
  //   fn:year-from-date
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionYearFromDate>());
  //   fn:month-from-date
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionMonthFromDate>());
  //   fn:day-from-date
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionDayFromDate>());
  //   fn:timezone-from-date
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionTimezoneFromDate>());
  //   fn:hours-from-time
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionHoursFromTime>());
  //   fn:minutes-from-time
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionMinutesFromTime>());
  //   fn:seconds-from-time
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionSecondsFromTime>());
  //   fn:timezone-from-time
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionTimezoneFromTime>());
  //   fn:adjust-dateTime-to-timezone
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionAdjustDateTimeToTimezone>());
  //   fn:adjust-date-to-timezone
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionAdjustDateToTimezone>());
  //   fn:adjust-time-to-timezone
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionAdjustTimeToTimezone>());

  // Functions on QName values
  //   fn:resolve-QName
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionResolveQName>());
  //   fn:QName
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionQName>());
  //   fn:prefix-from-QName
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionPrefixFromQName>());
  //   fn:local-name-from-QName
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionLocalNameFromQName>());
  //   fn:namespace-uri-from-QName
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionNamespaceURIFromQName>());
  //   fn:namespace-uri-for-prefix
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionNamespaceURIForPrefix>());
  //   fn:in-scope-prefixes
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionInScopePrefixes>());

  // Functions on anyURI values
  //   fn:resolve-URI
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionResolveURI>());

  // Functions on nodes
  //   fn:name
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionName>());
  //   fn:local-name
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionLocalname>());
  //   fn:namespace-uri
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionNamespaceUri>());
  //   fn:number
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionNumber>());
  //   fn:lang
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionLang>());
  //   fn:root
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionRoot>());

  // Functions on sequences
  //   fn::zero-or-one
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionZeroOrOne>());
  //   fn::one-or-more
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionOneOrMore>());
  //   fn::exactly-one
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionExactlyOne>());
  //   fn:boolean
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionBoolean>());
  //   fn:index-of
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionIndexOf>());
  //   fn:empty
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionEmpty>());
  //   fn:exists
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionExists>());
  //   fn:distinct-values
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionDistinctValues>());
  //   fn:insert-before
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionInsertBefore>());
  //   fn:remove
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionRemove>());
  //   fn:reverse
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionReverse>());
  //   fn:subsequence
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionSubsequence>());
  //   fn:unordered
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionUnordered>());
  
  //   fn:deep-equal
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionDeepEqual>());

  //   fn:count
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionCount>());
  //   fn:avg
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionAvg>());
  //   fn:max
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionMax>());
  //   fn:min
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionMin>());
  //   fn:sum
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionSum>());

  //   fn:id
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionId>());
  //   fn:idref
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionIdref>());
  //   fn:doc
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionDoc>());
  //   fn:doc-available
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionDocAvailable>());
  //   fn:collection
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionCollection>());
  
  // Context functions
  //   fn:position
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionPosition>());
  //   fn:last
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionLast>());
  //   fn:current-dateTime
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionCurrentDateTime>());
  //   fn:current-date
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionCurrentDate>());
  //   fn:current-time
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionCurrentTime>());
  //   fn:implicit-timezone
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionImplicitTimezone>());
  //   fn:default-collation
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionDefaultCollation>());
  //   fn:static-base-uri
  insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionStaticBaseURI>());

  if(update) {
    // Update functions
    //   fn:put
    insertFunction(new (_memMgr) FuncFactoryTemplate<FunctionPut>());
  }

}
