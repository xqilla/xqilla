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
 * $Id$
 */

#include "../config/xqilla_config.h"
#include <xqilla/dom-api/XPath2Result.hpp>
#include <string>

#include <xqilla/items/Node.hpp>
#include <xqilla/items/AnyAtomicType.hpp>
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include <xqilla/items/ATDoubleOrDerived.hpp>
#include <xqilla/items/ATBooleanOrDerived.hpp>
#include <xqilla/exceptions/XQillaException.hpp>
#include <xqilla/exceptions/XPath2TypeCastException.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/runtime/Result.hpp>
#include <xqilla/simple-api/XQQuery.hpp>

#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/ItemFactory.hpp>
#include <xqilla/items/impl/NodeImpl.hpp>

#include <xercesc/dom/DOMException.hpp>
#include <xercesc/dom/DOMElement.hpp>
#include <xercesc/dom/DOMAttr.hpp>
#include <xercesc/dom/DOMNode.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xercesc/util/XMLString.hpp>
#include <xercesc/dom/impl/DOMDocumentImpl.hpp>


XPath2Result::XPath2Result(const ResultType resultType,
                           const XQQuery *expression,
                           DynamicContext *dynamicContext,
                           XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* memMgr)
  : _createdWith(memMgr),
    _memMgr(memMgr),
    _resultSequence(0),
    _resultType(resultType),
    _contextOwned(false),
    _context(dynamicContext),
    _curIndex(0),
    _changes(-1),
    _documentRoot(0)
{
  if(_resultType == XPath2Result::ITERATOR_RESULT) {
    beforeStart = true;
  }
  evaluate(expression);
}

XPath2Result::XPath2Result(const ResultType resultType,
                           const XQQuery *expression,
                           XERCES_CPP_NAMESPACE_QUALIFIER DOMNode* contextNode,
                           DynamicContext *staticContext,
                           XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* memMgr)
  : _createdWith(memMgr),
    _memMgr(memMgr),
    _resultSequence(0),
    _resultType(resultType),
    _contextOwned(true),
    _curIndex(0),
    _changes(-1),
    _documentRoot(contextNode->getOwnerDocument())
{
  // retrieve the change count only if we are an iterator
  if(_resultType == XPath2Result::ITERATOR_RESULT && _documentRoot != 0) {
    _changes = ((XERCES_CPP_NAMESPACE_QUALIFIER DOMDocumentImpl*)_documentRoot)->changes();
  }

  if(_resultType == XPath2Result::ITERATOR_RESULT) {
    beforeStart = true;
  }

  _context = staticContext->createDynamicContext(&_memMgr);

	//Check for illegal contextNode types
	if(contextNode != 0) {
    //More illegal types here?
    switch (contextNode->getNodeType()) {
    case XERCES_CPP_NAMESPACE_QUALIFIER DOMNode::ENTITY_REFERENCE_NODE:
      throw XERCES_CPP_NAMESPACE_QUALIFIER DOMException(XERCES_CPP_NAMESPACE_QUALIFIER DOMException::NOT_SUPPORTED_ERR, X("Context node of illegal type."));
      break;
    }
    _context->setExternalContextNode(contextNode);
  }
  evaluate(expression);
}

XPath2Result::~XPath2Result() { 
  // the destructor will try to access the context, that we are going to delete now
  if(_resultSequence) delete _resultSequence;
  if(_contextOwned) delete _context;
}

void XPath2Result::release()
{
  this->~XPath2Result();
  _createdWith->deallocate(this);
}

void XPath2Result::evaluate(const XQQuery *expression)
{
//   int flags = 0;
//   if(_resultType == FIRST_RESULT) {
//     flags |= ASTNode::UNORDERED | ASTNode::RETURN_ONE;
//   }

  try {
    _resultSequence = new Sequence(expression->execute(_context));
  }
  catch(const XQException &e) {
    if(XQillaException::getDebug()) {
      e.printDebug( X("Caught exception at Interface") );
    }    
    throw XQillaException(XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException::TYPE_ERR, e.getError());
  }
  catch(const XQillaException &) {
    //rethrow it
    throw;
  }
  catch(XERCES_CPP_NAMESPACE_QUALIFIER DOMException &e) {
    throw XQillaException(XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException::TYPE_ERR, X("XQillaExpressionImpl::evaluateToSequence(): DOMException!"));
  }
  catch(XERCES_CPP_NAMESPACE_QUALIFIER XMLException &e) {
    throw XQillaException(XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException::TYPE_ERR, e.getMessage());
  }
  catch (...) {
    throw XQillaException(XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException::TYPE_ERR, X("XQillaExpressionImpl::evaluateToSequence(): Unknown exception caught."));
  }
}

const XPath2Result::ResultType XPath2Result::getResultType() const {
  return _resultType;
}

bool XPath2Result::isNode() const {
  if(_resultSequence->isEmpty() || (_curIndex >=_resultSequence->getLength()) ) {
    return false;
  }

  return _resultSequence->item(_curIndex)->isNode();
}

const XMLCh* XPath2Result::getTypeURI() const
{
   if(_resultSequence->isEmpty() || (_curIndex >=_resultSequence->getLength()) ) {
     return 0;
   }
   const Item::Ptr item = _resultSequence->item(_curIndex);
   if(item->isNode()) {
     const Node::Ptr node = (const Node::Ptr )item;

     ATQNameOrDerived::Ptr name = node->dmTypeName(_context);
     if(name.isNull())
       return 0;
     else
       return ((const ATQNameOrDerived*)name.get())->getURI();
   } else {
     const AnyAtomicType::Ptr atom = (const AnyAtomicType::Ptr )item;
     return atom->getTypeURI();
   }

   return 0;
}

const XMLCh* XPath2Result::getTypeName() const
{
   if(_resultSequence->isEmpty() || (_curIndex >=_resultSequence->getLength()) ) {
     return 0;
   }
   const Item::Ptr item = _resultSequence->item(_curIndex);
   if(item->isNode()) {
     const Node::Ptr node = (const Node::Ptr )item;

     ATQNameOrDerived::Ptr name = node->dmTypeName(_context);
     if(name.isNull())
       return 0;
     else
       return ((const ATQNameOrDerived*)name.get())->getName();
   } else {
     const AnyAtomicType::Ptr atom = (const AnyAtomicType::Ptr )item;
     return atom->getTypeName();
   }

   return 0;
}

int XPath2Result::asInt() const throw (XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException, XERCES_CPP_NAMESPACE_QUALIFIER DOMException) {
  if(_resultSequence->isEmpty() || (_curIndex >=_resultSequence->getLength()) ) {
    throw XERCES_CPP_NAMESPACE_QUALIFIER DOMException(XERCES_CPP_NAMESPACE_QUALIFIER DOMException::INVALID_STATE_ERR, XERCES_CPP_NAMESPACE_QUALIFIER XMLString::transcode("There is no current result in the result")); 
  }

  const Item::Ptr item = _resultSequence->item(_curIndex);
  if(item->isNode()) {
    throw XQillaException(XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException::TYPE_ERR, X("Cannot convert result to int"));
  }  

  AnyAtomicType::Ptr atom = (const AnyAtomicType::Ptr )item;
  ATDecimalOrDerived::Ptr integer;
  try {
    integer = (const ATDecimalOrDerived::Ptr )atom->castAs(XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA, 
                           XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_INTEGER, _context);
  } catch (XPath2TypeCastException &e) {
    throw XQillaException(XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException::TYPE_ERR, X("Cannot convert result to int"));
  }
  
  return atoi(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::transcode(integer->asString(_context)));
}

double XPath2Result::asDouble() const throw (XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException, XERCES_CPP_NAMESPACE_QUALIFIER DOMException) {
  if(_resultSequence->isEmpty() || (_curIndex >=_resultSequence->getLength()) ) {
    throw XERCES_CPP_NAMESPACE_QUALIFIER DOMException(XERCES_CPP_NAMESPACE_QUALIFIER DOMException::INVALID_STATE_ERR, XERCES_CPP_NAMESPACE_QUALIFIER XMLString::transcode("There is no current result in the result"));
  }

  const Item::Ptr item = _resultSequence->item(_curIndex);
  if(item->isNode()) {
    throw XQillaException(XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException::TYPE_ERR, X("Cannot convert result to double"));
  }

  AnyAtomicType::Ptr atom = (const AnyAtomicType::Ptr )item;
  ATDoubleOrDerived::Ptr doubleValue;
  try {
    doubleValue = (const ATDoubleOrDerived::Ptr )atom->castAs(XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                           XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DOUBLE, _context);
  } catch (XPath2TypeCastException &e) {
    throw XQillaException(XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException::TYPE_ERR, X("Cannot convert result to double"));
  }

  return atof(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::transcode(doubleValue->asString(_context)));

}

const XMLCh* XPath2Result::asString() const throw (XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException, XERCES_CPP_NAMESPACE_QUALIFIER DOMException) {
  if(_resultSequence->isEmpty() || (_curIndex >=_resultSequence->getLength()) ) {
    throw XERCES_CPP_NAMESPACE_QUALIFIER DOMException(XERCES_CPP_NAMESPACE_QUALIFIER DOMException::INVALID_STATE_ERR, XERCES_CPP_NAMESPACE_QUALIFIER XMLString::transcode("There is no current result in the result"));
  }

  const Item::Ptr item = _resultSequence->item(_curIndex);
  if(item->isNode()) {
    throw XQillaException(XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException::TYPE_ERR, X("Cannot convert result to a string"));
  }

  return item->asString(_context);
}

bool XPath2Result::asBoolean() const throw (XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException, XERCES_CPP_NAMESPACE_QUALIFIER DOMException) {
  if(_resultSequence->isEmpty() || (_curIndex >=_resultSequence->getLength()) ) {
    throw XERCES_CPP_NAMESPACE_QUALIFIER DOMException(XERCES_CPP_NAMESPACE_QUALIFIER DOMException::INVALID_STATE_ERR, XERCES_CPP_NAMESPACE_QUALIFIER XMLString::transcode("There is no current result in the result"));
  }

  const Item::Ptr item = _resultSequence->item(_curIndex);
  if(item->isNode()) {
    throw XQillaException(XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException::TYPE_ERR, X("Cannot convert result to a boolean"));
  }

  AnyAtomicType::Ptr atom = (const AnyAtomicType::Ptr )item;
  ATBooleanOrDerived::Ptr boolean;
  try {
    boolean = (const ATBooleanOrDerived::Ptr )atom->castAs(XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                           XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_BOOLEAN, _context);
  } catch (XPath2TypeCastException &e) {
    throw XQillaException(XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException::TYPE_ERR, X("Cannot convert result to a boolean"));
  }
  return ((const ATBooleanOrDerived*)boolean)->isTrue();
}

const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode* XPath2Result::asNode() const throw (XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException, XERCES_CPP_NAMESPACE_QUALIFIER DOMException) {
  if(_resultSequence->isEmpty() || (_curIndex >=_resultSequence->getLength()) ) {
    throw XERCES_CPP_NAMESPACE_QUALIFIER DOMException(XERCES_CPP_NAMESPACE_QUALIFIER DOMException::INVALID_STATE_ERR, XERCES_CPP_NAMESPACE_QUALIFIER XMLString::transcode("There is no current result in the result"));
  }

  const Item::Ptr item = _resultSequence->item(_curIndex);
  if(!item->isNode()) {
    throw XQillaException(XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException::TYPE_ERR, X("The requested result is not a node"));
  }
  const NodeImpl *nodeImpl = (const NodeImpl*)item->getInterface(Item::gXQilla);
  if(nodeImpl == 0) {
    throw XQillaException(XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException::TYPE_ERR, X("The requested result not a XQilla implementation node"));
  }

  return nodeImpl->getDOMNode();
 
}

bool XPath2Result::getInvalidIteratorState() const {
  if(_resultType != XPath2Result::ITERATOR_RESULT) {
    return false;
  }

  if(_resultSequence->isEmpty() || (_curIndex >=_resultSequence->getLength()) ) {
    return false;
  }
  
  return this->hasDocumentChanged(_resultSequence->item(_curIndex));
}

unsigned long XPath2Result::getSnapshotLength() const throw(XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException) {
  if(_resultType != XPath2Result::SNAPSHOT_RESULT) {
    throw XQillaException(XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException::TYPE_ERR, errorMessage(XPath2Result::SNAPSHOT_RESULT, _resultType));
  }
  return _resultSequence->getLength();
}

bool XPath2Result::iterateNext() const throw (XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException, XERCES_CPP_NAMESPACE_QUALIFIER DOMException) {
  if(_resultType != XPath2Result::ITERATOR_RESULT) {
    throw XQillaException(XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException::TYPE_ERR, errorMessage(XPath2Result::ITERATOR_RESULT, _resultType));
  }

  // this method is const, need to cast that away
  if(beforeStart) {
    ((XPath2Result*)this)->_curIndex = 0;
    ((XPath2Result*)this)->beforeStart = false;
  } else {
    ((XPath2Result*)this)->_curIndex++;
  }

  //Reached end of set, return false
  if(_curIndex >= _resultSequence->getLength()) {
     return false;
  }
  
  // check for document changes
  if(this->hasDocumentChanged(_resultSequence->item(_curIndex))) {
    throw XERCES_CPP_NAMESPACE_QUALIFIER DOMException(XERCES_CPP_NAMESPACE_QUALIFIER DOMException::INVALID_STATE_ERR, XERCES_CPP_NAMESPACE_QUALIFIER XMLString::transcode("Document has changed"));
  }//if
  
  return true;
}

bool XPath2Result::snapshotItem(unsigned long index) const throw(XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException) {
  if(_resultType != XPath2Result::SNAPSHOT_RESULT) {
    throw XQillaException(XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathException::TYPE_ERR, errorMessage(XPath2Result::SNAPSHOT_RESULT, _resultType));
  }

  //Reached end of set, return false
  if(_curIndex >= _resultSequence->getLength()) {
     return false;
  }

  // this method is const, need to cast that away
  ((XPath2Result*)this)->_curIndex = index;
  return true;
}

bool XPath2Result::hasDocumentChanged(const Item::Ptr &item) const {
  if(item->isNode()) {
    if(_documentRoot != 0 && ((XERCES_CPP_NAMESPACE_QUALIFIER DOMDocumentImpl*)_documentRoot)->changes() != _changes) {
         return true;
      } else {
         return false;
      }//if
  } else {
    return false;
  }
}

const XMLCh* XPath2Result::errorMessage(XPath2Result::ResultType requestedType,
                                 XPath2Result::ResultType resultType) const {
  std::string message =  typeName(requestedType) + " was requested from a XPath2Result of type " + typeName(resultType);
  return X(message.c_str());
}

const std::string XPath2Result::typeName(XPath2Result::ResultType type) const {
    switch(type) {
      case XPath2Result::FIRST_RESULT: return "FIRST_RESULT";
      case XPath2Result::ITERATOR_RESULT: return "ITERATOR_RESULT";
      case XPath2Result::SNAPSHOT_RESULT: return "SNAPSHOT_RESULT";
    }
    return "";
}
