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

#include "../config/xqilla_config.h"
#include <xqilla/framework/ReferenceCounted.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>

// ReferenceCounted::ReferenceCounted(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *mm)
//   : _ref_count(0),
//     _ref_mm(mm)
// {
//   // Do nothing
// }

// ReferenceCounted::~ReferenceCounted()
// {
//   // Do nothing
// }

// void ReferenceCounted::incrementRefCount() const
// {
//   ++const_cast<unsigned int&>(_ref_count);
// }

// void ReferenceCounted::decrementRefCount() const
// {
//   if(--const_cast<unsigned int&>(_ref_count) == 0) {
//     if(_ref_mm == 0) {
//       delete this;
//     }
//     else {
//       this->~ReferenceCounted();
//       operator delete((void*)this, _ref_mm);
//     }
//   }
// }
