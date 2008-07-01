/*
 * Copyright (c) 2001-2008
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2008
 *     Oracle. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * $Id: MessageListener.hpp 475 2008-01-08 18:47:44Z jpcs $
 */

#ifndef _DEBUGLISTENER_HPP
#define _DEBUGLISTENER_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xercesc/util/XercesDefs.hpp>

class ASTNode;
class TupleNode;
class LocationInfo;
class DynamicContext;
class XQException;

/** 
 * A class used to listen for debugging information
 */
class XQILLA_API DebugListener {
public:

  class XQILLA_API Info {
  public:
    virtual ~Info() {}

    /** Method for returning arbitrary interfaces from the implementation */
    virtual void *getInterface(const XMLCh *name) const { return 0; }

    virtual const ASTNode *getASTNode() const = 0;
    virtual const TupleNode *getTupleNode() const = 0;
    virtual const LocationInfo *getLocationInfo() const = 0;
  };


  /* virtual destructor, does nothing */
  virtual ~DebugListener() {}

  virtual void start(const Info *info, const DynamicContext *context) {}
  virtual void end(const Info *info, const DynamicContext *context) {}
  virtual void enter(const Info *info, const DynamicContext *context) {}
  virtual void exit(const Info *info, const DynamicContext *context) {}
  virtual void error(const XQException &error, const Info *info, const DynamicContext *context) {}

  virtual bool doLazyEvaluation() const { return true; }
  virtual bool doFocusOptimizations() const { return true; }
};

#endif
