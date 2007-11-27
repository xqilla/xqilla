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

#ifndef _URIRESOLVER_HPP
#define _URIRESOLVER_HPP

#include <xqilla/schema/DocumentCache.hpp>

#include <xercesc/util/XMemory.hpp>

class DynamicContext;
class Sequence;

/** 
 * This is an abstract class used to resolve URIs in different ways
 */
class XQILLA_API URIResolver : public XERCES_CPP_NAMESPACE_QUALIFIER XMemory
{
public:
  /* virtual destructor, does nothing */
  virtual ~URIResolver() {};      

  /* Resolve the given uri (and baseUri) to a Sequence (reference parameter). If the uri
     is relative, the base uri can be obtained from the context. If the uri is not handled
     by this URIResolver, returns false, otherwise returns true. */
  virtual bool resolveDocument(Sequence &result, const XMLCh* uri, DynamicContext *context, const QPNVector *projection) = 0;

  /* Resolve the given uri (and baseUri) to a Sequence (reference parameter). If the uri
     is relative, the base uri can be obtained from the context. If the uri is not handled
     by this URIResolver, returns false, otherwise returns true. */
  virtual bool resolveCollection(Sequence &result, const XMLCh* uri, DynamicContext *context, const QPNVector *projection) = 0;

  /* Resolve the default collection. If it is not defined, returns false, otherwise returns true. */
  virtual bool resolveDefaultCollection(Sequence &result, DynamicContext *context, const QPNVector *projection) = 0;
};
#endif
