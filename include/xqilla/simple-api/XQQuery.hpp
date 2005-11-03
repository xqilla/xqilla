/*
 * Copyright (c) 2001-2005
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2005
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2005
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2005
 *     Parthenon Computing Ltd. All rights reserved.
 *
 * Please see the file LICENSE for more information.
 *
 * $Id$
 */

//////////////////////////////////////////////////////////////////////
// XQQuery.h: interface for the XQQuery class.
//////////////////////////////////////////////////////////////////////

#if !defined(AFXQ_XQUERY_H__FAA9933A_2F10_49A4_93A2_857E2A8C48E3__INCLUDED_)
#define AFXQ_XQUERY_H__FAA9933A_2F10_49A4_93A2_857E2A8C48E3__INCLUDED_

#include <xqilla/framework/XQillaExport.hpp>
#include <vector>
#include <xercesc/util/XMemory.hpp>
#include <xqilla/runtime/Result.hpp>
#include <xqilla/runtime/ResultImpl.hpp>
#include <xqilla/runtime/LazySequenceResult.hpp>
#include <xqilla/context/StaticContext.hpp>

class DynamicContext;
class XQUserFunction;
class XQGlobalVariable;
class StaticResolutionContext;

class XQILLA_API XQQuery : public XERCES_CPP_NAMESPACE_QUALIFIER XMemory
{
public:
	XQQuery(const XMLCh* queryText, XPath2MemoryManager* memMgr);

  Result evaluate(DynamicContext* context) const;
  void staticResolution(StaticContext *context);

	// Module stuff
	void setIsLibraryModule(bool bIsModule=true);
	bool getIsLibraryModule() const;
	void setModuleTargetNamespace(const XMLCh* uri);
	const XMLCh* getModuleTargetNamespace() const;
	void importModule(const XMLCh* szUri, VectorOfStrings* locations, StaticContext* context);

	ASTNode* getQueryBody() const;
	void setQueryBody(ASTNode* query);

	void addFunction(XQUserFunction* fnDef);
	void addVariable(XQGlobalVariable* varDef);

    const XMLCh* getFile() const;
    void setFile(const XMLCh* file);

    const XMLCh* getQueryText() const;

    std::vector<XQUserFunction*, XQillaAllocator<XQUserFunction*> > m_userDefFns;
	std::vector<XQGlobalVariable*, XQillaAllocator<XQGlobalVariable*> > m_userDefVars;

protected:
  class QueryResult : public ResultImpl
  {
  public:
    QueryResult(const XQQuery *query, DynamicContext *context);

    Item::Ptr next(DynamicContext *context);
    std::string asString(DynamicContext *context, int indent) const;

  private:
    const XQQuery *_query;
    Result _parent;
    bool _toDo;
  };

  class DebugResult : public LazySequenceResult
  {
  public:
    DebugResult(const XQQuery *query, DynamicContext *context);

    void getResult(Sequence &toFill, DynamicContext *context) const;
    std::string asString(DynamicContext *context, int indent) const;

  private:
    const XQQuery *_query;
  };

	ASTNode* m_query;
	bool m_bIsLibraryModule;
	const XMLCh* m_szTargetNamespace;
    const XMLCh* m_szQueryText;
    const XMLCh* m_szCurrentFile;
    XPath2MemoryManager* m_memMgr;
};

#endif // !defined(AFXQ_XQUERY_H__FAA9933A_2F10_49A4_93A2_857E2A8C48E3__INCLUDED_)
