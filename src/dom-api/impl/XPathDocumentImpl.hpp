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

#ifndef __XPATHDOCUMENTIMPL_HPP
#define __XPATHDOCUMENTIMPL_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xercesc/util/XercesDefs.hpp>
#include <xercesc/dom/impl/DOMDocumentImpl.hpp>

class XQILLA_API XPathDocumentImpl : public XERCES_CPP_NAMESPACE_QUALIFIER DOMDocumentImpl
{
public:
	//Main constructor
	XPathDocumentImpl(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* memMgr);
	virtual ~XPathDocumentImpl();

    virtual XERCES_CPP_NAMESPACE_QUALIFIER DOMNode*             insertBefore(XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *newChild, XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *refChild);
    virtual XERCES_CPP_NAMESPACE_QUALIFIER DOMNode*             removeChild(XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *oldChild);
    virtual XERCES_CPP_NAMESPACE_QUALIFIER DOMNode*             replaceChild(XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *newChild, XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *oldChild);
    virtual XERCES_CPP_NAMESPACE_QUALIFIER DOMDocumentType*     getDoctype() const;
    virtual XERCES_CPP_NAMESPACE_QUALIFIER DOMElement*          getDocumentElement() const;

protected:
    XERCES_CPP_NAMESPACE_QUALIFIER DOMDocumentType*      fMyDocType;
    XERCES_CPP_NAMESPACE_QUALIFIER DOMElement*           fMyDocElement;

};



#endif
