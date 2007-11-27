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

#include <xqilla/optimizer/Optimizer.hpp>
#include <xqilla/ast/ASTNode.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/simple-api/XQQuery.hpp>

using namespace std;

Optimizer::Optimizer(Optimizer *parent)
  : parent_(parent)
{}

Optimizer::~Optimizer()
{
  if(parent_ != 0) {
    delete parent_;
  }
}

void Optimizer::resetInternal()
{
}

void Optimizer::startOptimize(XQQuery *query)
{
  if(parent_ != 0) {
    parent_->startOptimize(query);
  }
  
  optimize(query);
}

ASTNode *Optimizer::startOptimize(ASTNode *item)
{
  if(parent_ != 0) {
    item = parent_->startOptimize(item);
  }
  return optimize(item);
}

void Optimizer::reset()
{
  if(parent_ != 0) {
    parent_->reset();
  }
  resetInternal();
}

void StaticResolver::optimize(XQQuery *query)
{
  query->staticResolution(xpc_);
}

ASTNode *StaticResolver::optimize(ASTNode *item)
{
  return item->staticResolution(xpc_);
}

void StaticTyper::optimize(XQQuery *query)
{
  const ImportedModules &modules = query->getImportedModules();
  for(ImportedModules::const_iterator it = modules.begin();
      it != modules.end(); ++it) {
    (*it)->staticTyping(const_cast<DynamicContext*>((*it)->getStaticContext()));
  }

  query->staticTyping(xpc_);
}

ASTNode *StaticTyper::optimize(ASTNode *item)
{
  return item->staticTyping(xpc_);
}
