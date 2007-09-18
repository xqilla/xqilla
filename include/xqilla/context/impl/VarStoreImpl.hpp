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

#ifndef _VARSTOREIMPL_HPP
#define _VARSTOREIMPL_HPP

#include <xqilla/context/VariableStore.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/runtime/ResultBuffer.hpp>

#include <xercesc/util/StringPool.hpp>
#include <xercesc/util/RefHash2KeysTableOf.hpp>

class DynamicContext;
class StaticAnalysis;

/** Default implementation of VariableStore that stores variable values in a hash map, and
    proxies calls to a parent VariableStore if the value is not found in it's map. */
class XQILLA_API VarStoreImpl : public VariableStore
{
public:
  VarStoreImpl(XPath2MemoryManager *memMgr, const VariableStore *parent = 0);
  VarStoreImpl(const StaticAnalysis &src, const VariableStore *varStore, XPath2MemoryManager *mm);

  virtual Result getVar(const XMLCh *namespaceURI, const XMLCh *name) const;
  void setVar(const XMLCh *namespaceURI, const XMLCh *name, const Result &value, unsigned int readCount = ResultBufferImpl::UNLIMITED_COUNT);
  void clear();

  void cacheVariableStore(const StaticAnalysis &src, const VariableStore *toCache);

private:
  typedef XERCES_CPP_NAMESPACE_QUALIFIER RefHash2KeysTableOf<ResultBuffer> VariableHash;

  XERCES_CPP_NAMESPACE_QUALIFIER XMLStringPool uriPool_;
  VariableHash store_;

  const VariableStore *parent_;
  XPath2MemoryManager *mm_;
};

class XQILLA_API SingleVarStore : public VariableStore
{
public:
  SingleVarStore();

  virtual Result getVar(const XMLCh *namespaceURI, const XMLCh *name) const;

  void setAsVariableStore(const XMLCh *namespaceURI, const XMLCh *name, DynamicContext *context);
  void unsetAsVariableStore(DynamicContext *context);

  Sequence value;

private:
  const XMLCh *uri_, *name_;
  const VariableStore *parent_;
};

#endif



