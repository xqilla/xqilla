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

#include <set>

#include <xqilla/context/UpdateFactory.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/MessageListener.hpp>
#include <xqilla/update/PendingUpdateList.hpp>
#include <xqilla/exceptions/ASTException.hpp>

class pucompare {
public:
  pucompare(const DynamicContext *context)
    : context_(context) {}

  bool operator()(const PendingUpdate *first, const PendingUpdate *second)
  {
    return first->getTarget()->uniqueLessThan(second->getTarget(), context_);
  }

private:
  const DynamicContext *context_;
};

typedef std::set<const PendingUpdate*, pucompare> PendingUpdateSet;

void UpdateFactory::applyUpdates(const PendingUpdateList &pul, DynamicContext *context, DocumentCache::ValidationMode valMode)
{
  valMode_ = valMode;

  // 1. Checks the update primitives on $pul for compatibility. Raises a dynamic error if any of the following conditions are detected:
  //    a. Two or more upd:rename primitives on the merged list have the same target node [err:XUDY0015].
  //    b. Two or more upd:replaceNode primitives on the merged list have the same target node [err:XUDY0016].
  //    c. Two or more upd:replaceValue primitives on the merged list have the same target node [err:XUDY0017].
  //    d. Two or more upd:replaceElementContent primitives on $pul have the same target node [err:XUDY0017].
  {
    PendingUpdateSet replaceNodeSet = PendingUpdateSet(pucompare(context));
    PendingUpdateSet replaceValueSet = PendingUpdateSet(pucompare(context));
    PendingUpdateSet renameSet = PendingUpdateSet(pucompare(context));

    MessageListener *mlistener = context->getMessageListener();

    for(PendingUpdateList::const_iterator i = pul.begin(); i != pul.end(); ++i) {
      switch(i->getType()) {
      case PendingUpdate::REPLACE_ELEMENT_CONTENT:
      case PendingUpdate::REPLACE_VALUE: {
        std::pair<PendingUpdateSet::iterator, bool> res = replaceValueSet.insert(&(*i));
        if(!res.second) {
          if(mlistener != 0) {
            mlistener->warning(X("In the context of this expression"), *res.first);
          }
          XQThrow3(ASTException, X("UApplyUpdates::createSequence"),
                   X("Incompatible updates - two replace value expressions have the same target node [err:XUDY0017]"), &(*i));
        }
        break;
      }
      case PendingUpdate::REPLACE_ATTRIBUTE:
      case PendingUpdate::REPLACE_NODE: {
        std::pair<PendingUpdateSet::iterator, bool> res = replaceNodeSet.insert(&(*i));
        if(!res.second) {
          if(mlistener != 0) {
            mlistener->warning(X("In the context of this expression"), *res.first);
          }
          XQThrow3(ASTException, X("UApplyUpdates::createSequence"),
                   X("Incompatible updates - two replace expressions have the same target node [err:XUDY0016]"), &(*i));
        }
        break;
      }
      case PendingUpdate::RENAME: {
        std::pair<PendingUpdateSet::iterator, bool> res = renameSet.insert(&(*i));
        if(!res.second) {
          if(mlistener != 0) {
            mlistener->warning(X("In the context of this expression"), *res.first);
          }
          XQThrow3(ASTException, X("UApplyUpdates::createSequence"),
                   X("Incompatible updates - two rename expressions have the same target node [err:XUDY0015]"), &(*i));
        }
        break;
      }
      case PendingUpdate::PUT:
      case PendingUpdate::INSERT_INTO:
      case PendingUpdate::INSERT_ATTRIBUTES:
      case PendingUpdate::PUDELETE:
      case PendingUpdate::INSERT_BEFORE:
      case PendingUpdate::INSERT_AFTER:
      case PendingUpdate::INSERT_INTO_AS_FIRST:
      case PendingUpdate::INSERT_INTO_AS_LAST:
        break;
      }
    }
  }

  PendingUpdateList::const_iterator i;
  // We apply PUT first, to catch the duplicate puts properly
  for(i = pul.begin(); i != pul.end(); ++i) {
    switch(i->getType()) {
    case PendingUpdate::PUT:
      applyPut(*i, context);
      break;
    case PendingUpdate::INSERT_INTO:
    case PendingUpdate::INSERT_ATTRIBUTES:
    case PendingUpdate::REPLACE_VALUE:
    case PendingUpdate::RENAME:
    case PendingUpdate::PUDELETE:
    case PendingUpdate::REPLACE_ELEMENT_CONTENT:
    case PendingUpdate::REPLACE_ATTRIBUTE:
    case PendingUpdate::REPLACE_NODE:
    case PendingUpdate::INSERT_BEFORE:
    case PendingUpdate::INSERT_AFTER:
    case PendingUpdate::INSERT_INTO_AS_FIRST:
    case PendingUpdate::INSERT_INTO_AS_LAST:
      break;
    }
  }

#

  // 2. The semantics of all the update primitives on $pul are made effective, in the following order:
  //    a. First, all upd:insertInto, upd:insertAttributes, upd:replaceValue, and upd:rename primitives are applied.
  for(i = pul.begin(); i != pul.end(); ++i) {
    switch(i->getType()) {
    case PendingUpdate::INSERT_INTO:
      applyInsertInto(*i, context);
      break;
    case PendingUpdate::INSERT_ATTRIBUTES:
      applyInsertAttributes(*i, context);
      break;
    case PendingUpdate::REPLACE_VALUE:
      applyReplaceValue(*i, context);
      break;
    case PendingUpdate::RENAME:
      applyRename(*i, context);
      break;
    case PendingUpdate::PUDELETE:
    case PendingUpdate::PUT:
    case PendingUpdate::REPLACE_ELEMENT_CONTENT:
    case PendingUpdate::REPLACE_ATTRIBUTE:
    case PendingUpdate::REPLACE_NODE:
    case PendingUpdate::INSERT_BEFORE:
    case PendingUpdate::INSERT_AFTER:
    case PendingUpdate::INSERT_INTO_AS_FIRST:
    case PendingUpdate::INSERT_INTO_AS_LAST:
      break;
    }
  }

  //    b. Next, all upd:insertBefore, upd:insertAfter, upd:insertIntoAsFirst, and upd:insertIntoAsLast primitives are applied.
  for(i = pul.begin(); i != pul.end(); ++i) {
    switch(i->getType()) {
    case PendingUpdate::INSERT_BEFORE:
      applyInsertBefore(*i, context);
      break;
    case PendingUpdate::INSERT_AFTER:
      applyInsertAfter(*i, context);
      break;
    case PendingUpdate::INSERT_INTO_AS_FIRST:
      applyInsertAsFirst(*i, context);
      break;
    case PendingUpdate::INSERT_INTO_AS_LAST:
      applyInsertAsLast(*i, context);
      break;

    case PendingUpdate::PUT:
    case PendingUpdate::INSERT_INTO:
    case PendingUpdate::INSERT_ATTRIBUTES:
    case PendingUpdate::REPLACE_VALUE:
    case PendingUpdate::RENAME:
    case PendingUpdate::PUDELETE:
    case PendingUpdate::REPLACE_ELEMENT_CONTENT:
    case PendingUpdate::REPLACE_ATTRIBUTE:
    case PendingUpdate::REPLACE_NODE:
      break;
    }
  }

  //    c. Next, all upd:replaceNode primitives are applied.
  for(i = pul.begin(); i != pul.end(); ++i) {
    switch(i->getType()) {
    case PendingUpdate::REPLACE_NODE:
      applyReplaceNode(*i, context);
      break;
    case PendingUpdate::REPLACE_ATTRIBUTE:
      applyReplaceAttribute(*i, context);
      break;

    case PendingUpdate::INSERT_BEFORE:
    case PendingUpdate::INSERT_AFTER:
    case PendingUpdate::INSERT_INTO_AS_FIRST:
    case PendingUpdate::INSERT_INTO_AS_LAST:
    case PendingUpdate::PUT:
    case PendingUpdate::INSERT_INTO:
    case PendingUpdate::INSERT_ATTRIBUTES:
    case PendingUpdate::REPLACE_VALUE:
    case PendingUpdate::RENAME:
    case PendingUpdate::PUDELETE:
    case PendingUpdate::REPLACE_ELEMENT_CONTENT:
      break;
    }
  }

  //    d. Next, all upd:replaceElementContent primitives are applied.
  for(i = pul.begin(); i != pul.end(); ++i) {
    switch(i->getType()) {
    case PendingUpdate::REPLACE_ELEMENT_CONTENT:
      applyReplaceElementContent(*i, context);
      break;

    case PendingUpdate::REPLACE_NODE:
    case PendingUpdate::REPLACE_ATTRIBUTE:
    case PendingUpdate::INSERT_BEFORE:
    case PendingUpdate::INSERT_AFTER:
    case PendingUpdate::INSERT_INTO_AS_FIRST:
    case PendingUpdate::INSERT_INTO_AS_LAST:
    case PendingUpdate::PUT:
    case PendingUpdate::INSERT_INTO:
    case PendingUpdate::INSERT_ATTRIBUTES:
    case PendingUpdate::REPLACE_VALUE:
    case PendingUpdate::RENAME:
    case PendingUpdate::PUDELETE:
      break;
    }
  }

  //    e. Finally, all upd:delete primitives are applied.
  for(i = pul.begin(); i != pul.end(); ++i) {
    switch(i->getType()) {
    case PendingUpdate::PUDELETE:
      applyDelete(*i, context);
      break;
    case PendingUpdate::INSERT_INTO:
    case PendingUpdate::INSERT_ATTRIBUTES:
    case PendingUpdate::REPLACE_VALUE:
    case PendingUpdate::RENAME:
    case PendingUpdate::PUT:
    case PendingUpdate::REPLACE_ELEMENT_CONTENT:
    case PendingUpdate::REPLACE_ATTRIBUTE:
    case PendingUpdate::REPLACE_NODE:
    case PendingUpdate::INSERT_BEFORE:
    case PendingUpdate::INSERT_AFTER:
    case PendingUpdate::INSERT_INTO_AS_FIRST:
    case PendingUpdate::INSERT_INTO_AS_LAST:
      break;
    }
  }

  // 3. If, as a net result of the above steps, the children property of some node contains adjacent text nodes, these adjacent text
  //    nodes are merged into a single text node. The string-value of the resulting text node is the concatenated string-values of the
  //    adjacent text nodes, with no intervening space added. The node identity of the resulting text node is implementation-dependent.
  //    * Handled in the called methods

  // 4. If, as a net result of the above steps, the children property of some node contains an empty text node, that empty text node is
  //    deleted from the children property.
  //    * Handled in the called methods

  // 5. For each document or element node $top that was marked for revalidation by one of the earlier steps, upd:revalidate($top) is
  //    invoked.

  // 6. If the resulting XDM instance violates any constraint specified in [XQuery/XPath Data Model (XDM)], a dynamic error is raised
  //    [err:XUDY0021].
  //
  //    Note:
  //    For example, a data model constraint violation might occur if multiple attributes with the same parent have the same qualified
  //    name (see Section 6.2.1 OverviewDM.)
  // TBD Where else does this occur? - jpcs

  // 7. The upd:applyUpdates operation is atomic with respect to the data model. In other words, if upd:applyUpdates terminates
  //    normally, the resulting XDM instance reflects the result of all update primitives; but if upd:applyUpdates raises an error, the
  //    resulting XDM instance reflects no changes. Atomicity is guaranteed only with respect to operations on XDM instances, and only
  //    with respect to error conditions specified in this document.
  //
  //    Note:
  //    The results of implementation-dependent error conditions such as exceeding resource limits are beyond the scope of this
  //    specification.

  // 8. Propagation of XDM changes to an underlying persistent store is beyond the scope of this specification. For example, the effect
  //    on persistent storage of deleting a node that has no parent is beyond the scope of this specification.
  completeUpdate(context);
}

