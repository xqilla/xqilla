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

#if !defined(AFXQ_CODEPOINTCOLLATION_H__6BA76C4A_0A5B_480B_9870_86A89A118100__INCLUDED_)
#define AFXQ_CODEPOINTCOLLATION_H__6BA76C4A_0A5B_480B_9870_86A89A118100__INCLUDED_

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

#endif // !defined(AFXQ_CODEPOINTCOLLATION_H__6BA76C4A_0A5B_480B_9870_86A89A118100__INCLUDED_)
