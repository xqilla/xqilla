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

//////////////////////////////////////////////////////////////////////
// XQEvaluator.h: interface for the XQEvaluator class.
//////////////////////////////////////////////////////////////////////

#if !defined(AFXQ_XQEVALUATOR_H__D608B994_E090_4206_9473_81F3D7350410__INCLUDED_)
#define AFXQ_XQEVALUATOR_H__D608B994_E090_4206_9473_81F3D7350410__INCLUDED_

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/simple-api/XQQuery.hpp>

class DynamicContext;

XERCES_CPP_NAMESPACE_BEGIN
    class InputSource;
    class XMLBuffer;
XERCES_CPP_NAMESPACE_END

class XQILLA_API XQEvaluator
{
public:
    static XQQuery* parse(const XMLCh* query, DynamicContext* context, bool staticallyResolve = true, const XMLCh* queryFile=NULL);
    static XQQuery* parse(const XERCES_CPP_NAMESPACE_QUALIFIER InputSource& querySrc, DynamicContext* context, bool staticallyResolve = true);
    static XQQuery* parseFromURI(const XMLCh* queryFile, DynamicContext* context, bool staticallyResolve = true);
    static bool readQuery(const XMLCh* queryFile, 
                          XPath2MemoryManager* memMgr, 
                          XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer& queryText);
    static bool readQuery(const XERCES_CPP_NAMESPACE_QUALIFIER InputSource& querySrc, 
                          XPath2MemoryManager* memMgr, 
                          XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer& queryText);
};

#endif // !defined(AFXQ_XQEVALUATOR_H__D608B994_E090_4206_9473_81F3D7350410__INCLUDED_)
