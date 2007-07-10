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

#ifndef CODEPOINTCOLLATION_HPP
#define CODEPOINTCOLLATION_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/context/impl/CollationImpl.hpp>

class XPath2MemoryManager;

class XQILLA_API CodepointCollation : public CollationHelper {
public:
	CodepointCollation();

  static const XMLCh* getCodepointCollationName();
	virtual const XMLCh* getCollationName() const;
	virtual int compare(const XMLCh* string1, const XMLCh* string2) const;
};

#endif
