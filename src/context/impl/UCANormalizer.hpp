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

#if !defined(AFXQ_NORMALIZER_H__6BA76C4A_0A5B_480B_9870_86A89A118100__INCLUDED_)
#define AFXQ_NORMALIZER_H__6BA76C4A_0A5B_480B_9870_86A89A118100__INCLUDED_

#include <xqilla/framework/Pathan.hpp>
#include <xercesc/util/XercesDefs.hpp>
#include <map>

class XPath2MemoryManager;

class PATHAN_EXPORT Normalizer 
{
protected:
	static wchar_t* g_decompose[];
	static std::map<int,int> g_composeMap;
	static unsigned char g_canonicalClass[];
	static unsigned int g_isCompatibility[];

	static const XMLCh* getRecursiveDecomposition(bool bCanonical, XMLCh ch, XPath2MemoryManager* memMgr);
	static const XMLCh* internalDecompose(bool bCanonical, const XMLCh* source, XPath2MemoryManager* memMgr);

  /**
   * NOTE: The returned buffer is dynamically allocated and is the
   * responsibility of the caller to delete it when not longer needed.
   */
  static XMLCh* internalCompose(const XMLCh* source, XPath2MemoryManager* memMgr);

  static int getCanonicalClass(XMLCh ch);
  static XMLCh getPairwiseComposition(XMLCh first, XMLCh second);

public:
	static XMLCh* NormalizeC(const XMLCh* source, XPath2MemoryManager* memMgr);
	static const XMLCh* NormalizeD(const XMLCh* source, XPath2MemoryManager* memMgr);
	static XMLCh* NormalizeKC(const XMLCh* source, XPath2MemoryManager* memMgr);
	static const XMLCh* NormalizeKD(const XMLCh* source, XPath2MemoryManager* memMgr);
};

#endif // !defined(AFXQ_NORMALIZER_H__6BA76C4A_0A5B_480B_9870_86A89A118100__INCLUDED_)
