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

#ifndef _EXTERNALFUNCTION_HPP
#define _EXTERNALFUNCTION_HPP

#include <xqilla/framework/XQillaExport.hpp>

class Result;
class DynamicContext;

class XQILLA_API ExternalFunction
{
public:
  class XQILLA_API Arguments
  {
  public:
    virtual ~Arguments() {}

    /// Return the result for the argument index specified. Arguments indexes are zero based.
    virtual Result getArgument(unsigned int index, DynamicContext *context) const = 0;
  };

  virtual ~ExternalFunction() {}

  virtual const XMLCh *getName() const = 0;
  virtual const XMLCh *getURI() const = 0;
  virtual const XMLCh *getQName() const = 0;
  virtual unsigned int getNumberOfArguments() const = 0;

  /// Execute the function
  virtual Result execute(const Arguments *args, DynamicContext *context) const = 0;
};

#endif

