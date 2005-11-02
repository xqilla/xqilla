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

#ifndef __PATHANXMLGRAMMARPOOLIMPL_HPP
#define __PATHANXMLGRAMMARPOOLIMPL_HPP

#include <xqilla/framework/Pathan.hpp>
#include <xercesc/internal/XMLGrammarPoolImpl.hpp>


XERCES_CPP_NAMESPACE_BEGIN
class Grammar;
class MemoryManager;
XERCES_CPP_NAMESPACE_END  

class PathanXMLGrammarPoolImpl : public XERCES_CPP_NAMESPACE_QUALIFIER XMLGrammarPoolImpl
{
public:

    PathanXMLGrammarPoolImpl(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* const memMgr);

    /**
     * This method is overriden to not throw exceptions when a repeated grammar is found, but just ignore them
     **/
    virtual bool cacheGrammar(XERCES_CPP_NAMESPACE_QUALIFIER Grammar* const  gramToCache);
};

#endif
