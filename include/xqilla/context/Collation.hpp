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

#ifndef COLLATION_HPP
#define COLLATION_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xercesc/util/XercesDefs.hpp>

class Sequence;
class DynamicContext;

class XQILLA_API Collation
{
public:
  virtual ~Collation() {};

  virtual const XMLCh* getCollationName() const = 0;
  virtual Sequence sort(Sequence data, const DynamicContext* context) const = 0;
  virtual int compare(const XMLCh* const string1, const XMLCh* const string2) const = 0;

protected:
  Collation() {}
};

#endif
