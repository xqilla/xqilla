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

#include <xqilla/exceptions/XQException.hpp>

#include <xercesc/util/XMLString.hpp>
#include <xqilla/utils/UTF8Str.hpp>
#include <iostream>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

XQException::XQException(const XMLCh *reason, const XMLCh* file, unsigned int line, unsigned int column, const char *cppFile, unsigned int cppLine)
  : m_type(XMLString::transcode("XQException")),
    m_error(XMLString::replicate(reason)),
    m_cppFunction(XMLString::transcode("XQuery")),
    m_cppFile(cppFile),
    m_cppLine(cppLine),
    m_xqLine(line),
    m_xqColumn(column),
    m_xqFile(XMLString::replicate(file))
{
}

XQException::XQException(const XMLCh* const type, const XMLCh* const functionName, const XMLCh* const reason, const char *cppFile, unsigned int cppLine)
  : m_type(XMLString::replicate(type)),
    m_error(XMLString::replicate(reason)),
    m_cppFunction(XMLString::replicate(functionName)),
    m_cppFile(cppFile),
    m_cppLine(cppLine),
    m_xqLine(0),
    m_xqColumn(0),
    m_xqFile(0)
{
}

XQException::XQException(const XQException &o)
  : m_type(XMLString::replicate(o.m_type)),
    m_error(XMLString::replicate(o.m_error)),
    m_cppFunction(XMLString::replicate(o.m_cppFunction)),
    m_cppFile(o.m_cppFile),
    m_cppLine(o.m_cppLine),
    m_xqLine(o.m_xqLine),
    m_xqColumn(o.m_xqColumn),
    m_xqFile(XMLString::replicate(o.m_xqFile))
{
}

XQException::~XQException()
{
  XMLString::release(&m_type);
  XMLString::release(&m_error);
  XMLString::release(&m_cppFunction);
  XMLString::release(&m_xqFile);
}

void XQException::setXQueryPosition(const XMLCh *file, unsigned int line, unsigned int column)
{
  XMLString::release(&m_xqFile);
  m_xqFile = XMLString::replicate(file);
  m_xqLine = line;
  m_xqColumn = column;
}

void XQException::printDebug(const XMLCh* const context) const
{
  std::cerr << std::endl;
  std::cerr << "===================" << std::endl;
  std::cerr << UTF8(context) << std::endl << std::endl;
  std::cerr << "Type: " << UTF8(m_type) << std::endl;
  std::cerr << "Reason: " << UTF8(m_error) << std::endl;
  std::cerr << "XQuery Location: " << UTF8(m_xqFile) << ":" << m_xqLine << ":" << m_xqColumn << std::endl;
  std::cerr << "C++ Location: " << UTF8(m_cppFunction) << ", " << m_cppFile << ":" << m_cppLine << std::endl;
  std::cerr << "===================" << std::endl;

}
