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

#ifndef _XQILLA_07637_HPP
#define _XQILLA_07637_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xercesc/framework/MemoryManager.hpp>
#include <xercesc/util/PlatformUtils.hpp>
#include <xercesc/util/XMemory.hpp>

class DynamicContext;
class XQQuery;
class XPath2MemoryManager;

XERCES_CPP_NAMESPACE_BEGIN
class InputSource;
class XMLBuffer;
XERCES_CPP_NAMESPACE_END

/**
 * Provides factory methods for creating XQQuery and DynamicContext objects.
 * 
 * This class calls XQillaPlatformUtils::initialize() when it is constructed, and
 * XQillaPlatformUtils::terminate() when it destructs, so there is no need to seperately
 * initialize or terminate either Xerces or XQilla.
 */
class XQILLA_API XQilla : public XERCES_CPP_NAMESPACE_QUALIFIER XMemory
{
public:
  /// Flags used by the XQilla methods. These are used by bitwise OR-ing (|) their values together.
  enum Flags {
    NO_STATIC_RESOLUTION = 0x1, ///< Don't perform static resolution
    NO_ADOPT_CONTEXT = 0x2 ///< Don't adopt the context and delete it when the XQQuery is deleted
  };

  /**
   * Constructs the object. In the process, XQillaPlatformUtils::initialize() is
   * called to initialize XQilla and Xerces.
   *
   * @param memMgr If provided, this is the MemoryManager used to initialize Xerces.
   */
  XQilla(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr = 0);

  /**
   * Destructs the object. In the process, XQillaPlatformUtils::terminate() is
   * called to terminate XQilla and Xerces.
   */
  ~XQilla();

	/** @name Parsing Methods */
	// @{

  /**
   * Parse the XQuery expression contained in the given query string.
   *
   * @param query A string containing the XQuery expression to parse.
   * @param context If specified, the context to use for parsing this expression. A
   * default context is used if this parameter is 0.
   * @param queryFile The name of the file that query originates in. This is passed
   * back to the user in an XQException if an error occurs.
   * @param flags A bitwise OR of the Flags constants, that control aspects of how
   * the XQQuery object is created.
   * @param memMgr If specified, the memory manager used to create the XQQuery object.
   *
   * @return The object that represents the parsed expression.
   *
   * @exception XQException If a parse error occurs.
   */
  XQQuery* parseXQuery(const XMLCh* query,
                       DynamicContext* context = 0,
                       const XMLCh* queryFile = NULL,
                       unsigned int flags = 0,
                       XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr =
                       XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager);

  /**
   * Parse the XQuery expression from the given InputSource.
   *
   * @param querySrc An InputSource which the XQuery expression will be parsed from.
   * @param context If specified, the context to use for parsing this expression. A
   * default context is used if this parameter is 0.
   * @param flags A bitwise OR of the Flags constants, that control aspects of how
   * the XQQuery object is created.
   * @param memMgr If specified, the memory manager used to create the XQQuery object.
   *
   * @return The object that represents the parsed expression.
   *
   * @exception XQException If a parse error occurs.
   */
  XQQuery* parseXQuery(const XERCES_CPP_NAMESPACE_QUALIFIER InputSource& querySrc,
                       DynamicContext* context = 0,
                       unsigned int flags = 0,
                       XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr =
                       XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager);

  /**
   * Parse the XQuery expression residing at the given URL.
   *
   * @param queryFile The URL of the XQuery expression to parse.
   * @param context If specified, the context to use for parsing this expression. A
   * default context is used if this parameter is 0.
   * @param flags A bitwise OR of the Flags constants, that control aspects of how
   * the XQQuery object is created.
   * @param memMgr If specified, the memory manager used to create the XQQuery object.
   *
   * @return The object that represents the parsed expression.
   *
   * @exception XQException If a parse error occurs.
   */
  XQQuery* parseXQueryFromURI(const XMLCh* queryFile,
                              DynamicContext* context = 0,
                              unsigned int flags = 0,
                              XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr =
                              XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager);

  /**
   * Parse the XPath 2 expression contained in the given query string.
   *
   * @param query A string containing the XPath 2 expression to parse.
   * @param context If specified, the context to use for parsing this expression. A
   * default context is used if this parameter is 0.
   * @param queryFile The name of the file that query originates in. This is passed
   * back to the user in an XQException if an error occurs.
   * @param flags A bitwise OR of the Flags constants, that control aspects of how
   * the XQQuery object is created.
   * @param memMgr If specified, the memory manager used to create the XQQuery object.
   *
   * @return The object that represents the parsed expression.
   *
   * @exception XQException If a parse error occurs.
   */
  XQQuery* parseXPath2(const XMLCh* query,
                       DynamicContext* context = 0,
                       const XMLCh* queryFile = NULL,
                       unsigned int flags = 0,
                       XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr =
                       XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager);

  /**
   * Parse the XPath 2 expression from the given InputSource.
   *
   * @param querySrc An InputSource which the XPath 2 expression will be parsed from.
   * @param context If specified, the context to use for parsing this expression. A
   * default context is used if this parameter is 0.
   * @param flags A bitwise OR of the Flags constants, that control aspects of how
   * the XQQuery object is created.
   * @param memMgr If specified, the memory manager used to create the XQQuery object.
   *
   * @return The object that represents the parsed expression.
   *
   * @exception XQException If a parse error occurs.
   */
  XQQuery* parseXPath2(const XERCES_CPP_NAMESPACE_QUALIFIER InputSource& querySrc,
                       DynamicContext* context = 0,
                       unsigned int flags = 0,
                       XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr =
                       XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager);

  /**
   * Parse the XPath 2 expression residing at the given URL.
   *
   * @param queryFile The URL of the XPath 2 expression to parse.
   * @param context If specified, the context to use for parsing this expression. A
   * default context is used if this parameter is 0.
   * @param flags A bitwise OR of the Flags constants, that control aspects of how
   * the XQQuery object is created.
   * @param memMgr If specified, the memory manager used to create the XQQuery object.
   *
   * @return The object that represents the parsed expression.
   *
   * @exception XQException If a parse error occurs.
   */
  XQQuery* parseXPath2FromURI(const XMLCh* queryFile,
                              DynamicContext* context = 0,
                              unsigned int flags = 0,
                              XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr =
                              XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager);
	//@}

	/** @name Factory Methods */
	// @{

  /**
   * Creates a context suitable for parsing an expression with.
   * @param memMgr The memory manager used to create the DynamicContext.
   * @return An implementation of DynamicContext
   */
  DynamicContext *createContext(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr =
                                XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager);

	//@}

private:
  static bool readQuery(const XMLCh* queryFile, 
                        XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* memMgr, 
                        XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer& queryText);
  static bool readQuery(const XERCES_CPP_NAMESPACE_QUALIFIER InputSource& querySrc, 
                        XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* memMgr, 
                        XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer& queryText);
};

#endif
