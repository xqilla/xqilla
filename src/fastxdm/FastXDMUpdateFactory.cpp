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

#include "../config/xqilla_config.h"

#include "FastXDMUpdateFactory.hpp"
#include "FastXDMDocumentCacheImpl.hpp"
// #include "FastXDMNodeImpl.hpp

#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/MessageListener.hpp>
#include <xqilla/exceptions/ASTException.hpp>
#include <xqilla/update/PendingUpdateList.hpp>
#include <xqilla/dom-api/impl/XQillaNSResolverImpl.hpp>

#include <xercesc/framework/LocalFileFormatTarget.hpp>
#include <xercesc/util/XMLUniDefs.hpp>
#include <xercesc/framework/XMLBuffer.hpp>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

static const XMLCh file_scheme[] = { chLatin_f, chLatin_i, chLatin_l, chLatin_e, 0 };
static const XMLCh utf8_str[] = { chLatin_u, chLatin_t, chLatin_f, chDash, chDigit_8, 0 };

void FastXDMUpdateFactory::applyPut(const PendingUpdate &update, DynamicContext *context)
{
  assert(false);
}

void FastXDMUpdateFactory::applyInsertInto(const PendingUpdate &update, DynamicContext *context)
{
  assert(false);
}

void FastXDMUpdateFactory::applyInsertAttributes(const PendingUpdate &update, DynamicContext *context)
{
  assert(false);
}

void FastXDMUpdateFactory::applyReplaceValue(const PendingUpdate &update, DynamicContext *context)
{
  assert(false);
}

void FastXDMUpdateFactory::applyRename(const PendingUpdate &update, DynamicContext *context)
{
  assert(false);
}

void FastXDMUpdateFactory::applyDelete(const PendingUpdate &update, DynamicContext *context)
{
  assert(false);
}

void FastXDMUpdateFactory::applyInsertBefore(const PendingUpdate &update, DynamicContext *context)
{
  assert(false);
}

void FastXDMUpdateFactory::applyInsertAfter(const PendingUpdate &update, DynamicContext *context)
{
  assert(false);
}

void FastXDMUpdateFactory::applyInsertAsFirst(const PendingUpdate &update, DynamicContext *context)
{
  assert(false);
}

void FastXDMUpdateFactory::applyInsertAsLast(const PendingUpdate &update, DynamicContext *context)
{
  assert(false);
}

void FastXDMUpdateFactory::applyReplaceNode(const PendingUpdate &update, DynamicContext *context)
{
  assert(false);
}

void FastXDMUpdateFactory::applyReplaceAttribute(const PendingUpdate &update, DynamicContext *context)
{
  assert(false);
}

void FastXDMUpdateFactory::applyReplaceElementContent(const PendingUpdate &update, DynamicContext *context)
{
  assert(false);
}

void FastXDMUpdateFactory::completeDeletions(DynamicContext *context)
{
  assert(false);
}

void FastXDMUpdateFactory::completeRevalidation(DynamicContext *context)
{
  assert(false);
}

void FastXDMUpdateFactory::completeUpdate(DynamicContext *context)
{
  assert(false);
}

