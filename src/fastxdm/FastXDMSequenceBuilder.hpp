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

#ifndef _FASTXDMSEQUENCEBUILDER_HPP
#define _FASTXDMSEQUENCEBUILDER_HPP

#include <xqilla/events/SequenceBuilder.hpp>
#include <xqilla/runtime/Sequence.hpp>

#include "FastXDMDocument.hpp"

class FastXDMSequenceBuilder : public SequenceBuilder
{
public:
  FastXDMSequenceBuilder(const DynamicContext *context);

  virtual void startDocumentEvent(const XMLCh *documentURI, const XMLCh *encoding);
  virtual void endDocumentEvent();
  virtual void startElementEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname);
  virtual void endElementEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname,
                               const XMLCh *typeURI, const XMLCh *typeName);
  virtual void piEvent(const XMLCh *target, const XMLCh *value);
  virtual void textEvent(const XMLCh *value);
  virtual void textEvent(const XMLCh *chars, unsigned int length);
  virtual void commentEvent(const XMLCh *value);
  virtual void attributeEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname, const XMLCh *value,
                              const XMLCh *typeURI, const XMLCh *typeName);
  virtual void namespaceEvent(const XMLCh *prefix, const XMLCh *uri);
  virtual void atomicItemEvent(const XMLCh *value, const XMLCh *typeURI, const XMLCh *typeName);
  virtual void endEvent();

  virtual Sequence getSequence() const { return seq_; }

private:
  const DynamicContext *context_;
  unsigned int level_;
  FastXDMDocument::Ptr document_;
  Sequence seq_;
};

#endif
