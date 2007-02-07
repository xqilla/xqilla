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

#ifndef _SEQUENCEBUILDER_HPP
#define _SEQUENCEBUILDER_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/events/EventHandler.hpp>

#include <xercesc/util/XMemory.hpp>

class DynamicContext;
class Sequence;

class XQILLA_API SequenceBuilder : public EventHandler, public XERCES_CPP_NAMESPACE_QUALIFIER XMemory
{
public:
  virtual ~SequenceBuilder() {}

  virtual Sequence getSequence() const = 0;
};

#endif
