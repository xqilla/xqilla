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

void UpdateFactory::applyUpdates(const PendingUpdateList &pul, DynamicContext *context)
{

  // 1.Checks the update primitives on $pul for compatibility. Signals an incompatability if any of the following conditions are detected:
  //    a. Two or more upd:replaceNode primitives on $pul have the same target node.
  //    b. Two or more upd:replaceValue primitives on $pul have the same target node.
  //    c. Two or more upd:replaceElementContent primitives on $pul have the same target node.
  //    d. Two or more upd:rename primitives on $pul have the same target node.
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
          XQThrow3(ASTException, X("UApplyUpdates::collapseTreeInternal"),
                   X("Incompatible updates - two replace value expressions have the same target node [err:TBD]"), &(*i));
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
          XQThrow3(ASTException, X("UApplyUpdates::collapseTreeInternal"),
                   X("Incompatible updates - two replace expressions have the same target node [err:TBD]"), &(*i));
        }
        break;
      }
      case PendingUpdate::RENAME: {
        std::pair<PendingUpdateSet::iterator, bool> res = renameSet.insert(&(*i));
        if(!res.second) {
          if(mlistener != 0) {
            mlistener->warning(X("In the context of this expression"), *res.first);
          }
          XQThrow3(ASTException, X("UApplyUpdates::collapseTreeInternal"),
                   X("Incompatible updates - two rename expressions have the same target node [err:TBD]"), &(*i));
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

  // We apply PUT first, to catch the duplicate puts properly
  for(PendingUpdateList::const_iterator i = pul.begin(); i != pul.end(); ++i) {
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

  // 2. The semantics of all the update primitives on $pul are made effective, in the following order:
  //    a. First, all upd:insertInto, upd:insertAttributes, upd:replaceValue, upd:rename, and upd:delete primitives are applied.
  for(PendingUpdateList::const_iterator i = pul.begin(); i != pul.end(); ++i) {
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
      applyDelete(*i, context);
      break;
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
  for(PendingUpdateList::const_iterator i = pul.begin(); i != pul.end(); ++i) {
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
  for(PendingUpdateList::const_iterator i = pul.begin(); i != pul.end(); ++i) {
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
  for(PendingUpdateList::const_iterator i = pul.begin(); i != pul.end(); ++i) {
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

  //    e. Finally, for each node marked for deletion by one of the update primitives listed above, let $N be the node that is marked
  //       for deletion, and let $P be its parent node. The following actions are applied:
  //          i. The parent property of $N is set to empty.
  //         ii. If $N is an attribute node, the attributes property of $P is modified to remove $N.
  //        iii. If $N is a non-attribute node, the children property of $P is modified to remove $N.
  //         iv. If $N is an element, attribute, or text node, and $P is an element node, then upd:removeType($P) is invoked.
  completeDeletions(context);

  // 3. If, as a net result of the above steps, the children property of some node contains adjacent text nodes, these adjacent text
  //    nodes are merged into a single text node. The string-value of the resulting text node is the concatenated string-values of the
  //    adjacent text nodes, with no intervening space added. The nodeid of the resulting text node is implementation-dependent.
  //    * Handled in the called methods

  // 4. For each document or element node $top that was marked for revalidation by one of the earlier steps, upd:revalidate($top) is
  //    invoked.
  completeRevalidation(context);

  // 5. If the resulting XDM instance violates any consistency constraint specified in [XQuery/XPath Data Model (XDM)], an error is
  //    signaled [err:TBD].
  //    * Handled in the called methods

  // 6. The upd:applyUpdates operation is atomic with respect to the data model. In other words, if upd:applyUpdates terminates
  //    normally, the resulting XDM instance reflects the result of all update primitives; but if upd:applyUpdates raises an error, the
  //    resulting XDM instance reflects no changes. Propagation of XDM changes to an underlying physical representation is beyond the
  //    scope of this specification.
  completeUpdate(context);
}

