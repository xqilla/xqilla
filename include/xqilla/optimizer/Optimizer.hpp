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

#ifndef _OPTIMIZER_HPP
#define _OPTIMIZER_HPP

class ASTNode;
class DynamicContext;

class XQQuery;

class Optimizer
{
public:
  Optimizer(Optimizer *parent = 0);
  virtual ~Optimizer();

  void startOptimize(XQQuery *query);
  ASTNode *startOptimize(ASTNode *item);
  void reset();

protected:
  virtual void optimize(XQQuery *query) = 0;
  virtual ASTNode *optimize(ASTNode *item) = 0;
  virtual void resetInternal();

private:
  Optimizer(const Optimizer &o);
  Optimizer &operator=(const Optimizer &o);

  Optimizer *parent_;
};

class StaticResolver : public Optimizer
{
public:
  StaticResolver(DynamicContext *xpc, Optimizer *parent = 0)
    : Optimizer(parent), xpc_(xpc) {}
  virtual ~StaticResolver() {}

protected:
  virtual void optimize(XQQuery *query);
  virtual ASTNode *optimize(ASTNode *item);
  virtual void resetInternal() {}

private:
  DynamicContext *xpc_;
};

class StaticTyper : public Optimizer
{
public:
  StaticTyper(DynamicContext *xpc, Optimizer *parent = 0)
    : Optimizer(parent), xpc_(xpc) {}
  virtual ~StaticTyper() {}

protected:
  virtual void optimize(XQQuery *query);
  virtual ASTNode *optimize(ASTNode *item);
  virtual void resetInternal() {}

private:
  DynamicContext *xpc_;
};

#endif
