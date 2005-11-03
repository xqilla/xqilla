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
// XQException.h: interface for the XQException class.
//////////////////////////////////////////////////////////////////////

#if !defined(AFXQ_XQEXCEPTION_H__446AD191_E9D0_4658_BD8C_032D29DA123E__INCLUDED_)
#define AFXQ_XQEXCEPTION_H__446AD191_E9D0_4658_BD8C_032D29DA123E__INCLUDED_

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/exceptions/DSLException.hpp>
#include <xqilla/utils/XStr.hpp>

class XQILLA_API XQException : public DSLException
{
public:

  XQException(const XMLCh *reason, const XMLCh* file, unsigned int line, unsigned int column)
    : DSLException(X("XQException"), X("XQuery"), reason, __FILE__, __LINE__), m_nLine(line), m_nColumn(column), m_szFile(file) {};

  unsigned int m_nLine, m_nColumn;
  const XMLCh* m_szFile;
};

#endif // !defined(AFXQ_XQEXCEPTION_H__446AD191_E9D0_4658_BD8C_032D29DA123E__INCLUDED_)

