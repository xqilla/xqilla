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

#include <xercesc/util/XMLUniDefs.hpp>

class Result;
class PendingUpdateList;
class DynamicContext;
class XPath2MemoryManager;

class XQILLA_API ExternalFunction
{
public:
  class XQILLA_API Arguments
  {
  public:
    virtual ~Arguments() {}

    /// Return the result for the argument index specified. Arguments indexes are zero based.
    virtual Result getArgument(size_t index, DynamicContext *context) const = 0;
  };

  virtual ~ExternalFunction() {}

  const XMLCh *getURI() const { return uri_; }
  const XMLCh *getName() const { return name_; }
  const XMLCh *getURINameHash() const { return uriName_; }
  unsigned int getNumberOfArguments() const { return numArgs_; }

  /// Execute the (non-updating) function
  virtual Result execute(const Arguments *args, DynamicContext *context) const;
  /// Execute the updating function
  virtual PendingUpdateList executeUpdate(const Arguments *args, DynamicContext *context) const;

protected:
  ExternalFunction(const XMLCh *uri, const XMLCh *name, unsigned int numberOfArgs, XPath2MemoryManager *mm);

  const XMLCh *uri_;
  const XMLCh *name_;
  const XMLCh *uriName_;
  unsigned int numArgs_;
};

#endif

