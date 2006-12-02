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

#ifndef _MESSAGELISTENER_HPP
#define _MESSAGELISTENER_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xercesc/util/XercesDefs.hpp>

class LocationInfo;
class DynamicContext;
class Sequence;

/** 
 * A class used to listen for warnings or trace information
 */
class XQILLA_API MessageListener {
public:
  /* virtual destructor, does nothing */
  virtual ~MessageListener() {};

  /**
   * Called to report a warning message
   */
  virtual void warning(const XMLCh *message, const LocationInfo *location) = 0;

  /**
   * Called to report a trace message
   */
  virtual void trace(const XMLCh *label, const Sequence &sequence, const LocationInfo *location, const DynamicContext *context) = 0;

};
#endif
