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

#ifndef _FTSELECTION_HPP
#define _FTSELECTION_HPP


#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>
#include <xqilla/fulltext/AllMatches.hpp>
#include <xqilla/fulltext/TokenStore.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>

#include <vector>

class DynamicContext;
class StaticContext;

class XQILLA_API FTContext
{
public:
  FTContext(const Tokenizer *tok, const TokenStore::Ptr &tStore, DynamicContext *cont)
    : queryPos(0), tokenizer(tok), tokenStore(tStore), context(cont) {}

  unsigned int queryPos;
  const Tokenizer *tokenizer;
  TokenStore::Ptr tokenStore;
  DynamicContext *context;
};

class XQILLA_API FTSelection
{
public:
  /// The type of the FTSelection node
  enum Type {
    OR,
    AND,
    MILD_NOT,
    UNARY_NOT,
    WORDS,
    WORD,
    ORDER,
    DISTANCE,
    DISTANCE_LITERAL,
    SCOPE,
    CONTENT,
    WINDOW,
    WINDOW_LITERAL
  };

  virtual ~FTSelection() {}

  Type getType() const { return type_; }

  const XMLCh *getFile() const { return file_; }
  unsigned int getLine() const { return line_; }
  unsigned int getColumn() const { return column_; }
  void setDebugInfo(const XMLCh *file, unsigned int line, unsigned int column)
  {
    file_ = file;
    line_ = line;
    column_ = column;
  }
  void setDebugInfo(FTSelection *o)
  {
    file_ = o->file_;
    line_ = o->line_;
    column_ = o->column_;
  }

  virtual const StaticResolutionContext &getStaticResolutionContext() const { return src_; }

  virtual FTSelection *staticResolution(StaticContext *context) = 0;
  virtual FTSelection *optimize(FTContext *context, bool execute) const = 0;
  virtual AllMatches::Ptr execute(FTContext *ftcontext) const = 0;

protected:
  FTSelection(Type type, XPath2MemoryManager *memMgr)
    : src_(memMgr), type_(type), memMgr_(memMgr), file_(0), line_(0), column_(0) {}

  XPath2MemoryManager *getMemoryManager() const { return memMgr_; }

  StaticResolutionContext src_;

private:
  Type type_;
  XPath2MemoryManager *memMgr_;

  const XMLCh *file_;
  unsigned int line_, column_;
};

class XQILLA_API VectorOfFTSelections : public std::vector<FTSelection*,XQillaAllocator<FTSelection*> >, public XERCES_CPP_NAMESPACE_QUALIFIER XMemory
{
public:
  VectorOfFTSelections(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *mm)
    : std::vector<FTSelection*,XQillaAllocator<FTSelection*> >(XQillaAllocator<FTSelection*>(mm)) {}
};

#endif
