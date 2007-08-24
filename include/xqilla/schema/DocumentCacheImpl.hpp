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

#ifndef _DOCUMENTCACHEIMPL_HPP
#define _DOCUMENTCACHEIMPL_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/schema/DocumentCache.hpp>

#include <xercesc/framework/XMLDocumentHandler.hpp>
#include <xercesc/framework/XMLEntityHandler.hpp>
#include <xercesc/framework/XMLErrorReporter.hpp>
#include <xercesc/framework/psvi/PSVIHandler.hpp>

class DynamicContext;
class QualifiedName;

XERCES_CPP_NAMESPACE_BEGIN
class XMLGrammarPool;
class GrammarResolver;
class XMLScanner;
XERCES_CPP_NAMESPACE_END

/// The class that performs the parsing of input documents
class XQILLA_API DocumentCacheImpl : public DocumentCache,
                                     private XERCES_CPP_NAMESPACE_QUALIFIER XMLDocumentHandler,
                                     private XERCES_CPP_NAMESPACE_QUALIFIER PSVIHandler,
                                     private XERCES_CPP_NAMESPACE_QUALIFIER XMLEntityHandler,
                                     private XERCES_CPP_NAMESPACE_QUALIFIER XMLErrorReporter
{
public:
  DocumentCacheImpl(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* memMgr, XERCES_CPP_NAMESPACE_QUALIFIER XMLGrammarPool* xmlgr = 0,
                    bool makeScanner = true);
  DocumentCacheImpl(const DocumentCacheImpl *parent, XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* memMgr);
  ~DocumentCacheImpl();

  /**
   * Sets the XMLEntityResolver that is used by Xerces when it is used
   * to parse documents. This affects the behaviour of XQilla whenever
   * it retrieves an XML, DTD or XML Schema grammar.
   */
  virtual void setXMLEntityResolver(XERCES_CPP_NAMESPACE_QUALIFIER XMLEntityResolver* const handler);
  virtual XERCES_CPP_NAMESPACE_QUALIFIER XMLEntityResolver* getXMLEntityResolver() const;

  virtual Node::Ptr loadDocument(const XMLCh* uri, DynamicContext *context);

  /*
   * returns true if the type represented by uri:typename is an instance of uriToCheck:typeNameToCheck 
   *
   * ie: to check 
   * xs:integer instance of xs:decimal, 
   * call
   * isTypeOrDerivedFromType("xs", "integer", "xs", "decimal") 
   * (except of course, call with URIs, not prefixes!)
   */ 
  virtual bool isTypeOrDerivedFromType(const XMLCh* const uri, const XMLCh* const typeName, 
                                       const XMLCh* const uriToCheck, const XMLCh* const typeNameToCheck) const; 
  virtual bool isTypeDefined(const XMLCh* const uri, const XMLCh* const typeName) const; 

  virtual void addSchemaLocation(const XMLCh* uri, VectorOfStrings* locations, StaticContext *context, const LocationInfo *location);

  /** helper functions used to map namespace ids found in the SchemaGrammar **/
  virtual unsigned int getSchemaUriId(const XMLCh* uri) const;
  virtual const XMLCh* getSchemaUri(unsigned int id) const;

  virtual Node::Ptr validate(const Node::Ptr &node, DocumentCache::ValidationMode valMode, DynamicContext *context);

  virtual XERCES_CPP_NAMESPACE_QUALIFIER DatatypeValidator*  getDatatypeValidator(const XMLCh* uri, const XMLCh* typeName) const;

  virtual XERCES_CPP_NAMESPACE_QUALIFIER ComplexTypeInfo*  getComplexTypeInfo(const XMLCh* uri, const XMLCh* typeName) const;

  virtual XERCES_CPP_NAMESPACE_QUALIFIER SchemaElementDecl* getElementDecl(const XMLCh* elementUri, const XMLCh* elementName) const;

  virtual XERCES_CPP_NAMESPACE_QUALIFIER SchemaAttDef* getAttributeDecl(const XMLCh* attributeUri, const XMLCh* attributeName) const;

  virtual DocumentCache *createDerivedCache(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr) const;

protected:
  void init(XERCES_CPP_NAMESPACE_QUALIFIER XMLGrammarPool *gramPool = 0, bool makeScanner = true);

  void loadSchema(const XMLCh* const uri, const XMLCh* location, StaticContext *context, const LocationInfo *info);

  // XMLEntityHandler
  virtual void endInputSource(const XERCES_CPP_NAMESPACE_QUALIFIER InputSource& inputSource);
  virtual bool expandSystemId(const XMLCh* const systemId, XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer &toFill);
  virtual void resetEntities();
  virtual XERCES_CPP_NAMESPACE_QUALIFIER InputSource* resolveEntity(const XMLCh* const publicId, const XMLCh* const systemId, const XMLCh* const baseURI = 0);
  virtual XERCES_CPP_NAMESPACE_QUALIFIER InputSource* resolveEntity(XERCES_CPP_NAMESPACE_QUALIFIER XMLResourceIdentifier* resourceIdentifier);
  virtual void startInputSource(const XERCES_CPP_NAMESPACE_QUALIFIER InputSource& inputSource);

  // XMLErrorReporter
  void resetErrors();
  void error(const unsigned int, const XMLCh* const, const XMLErrorReporter::ErrTypes errType, const XMLCh* const errorText,
             const XMLCh* const systemId, const XMLCh* const publicId, const XMLSSize_t lineNum, const XMLSSize_t colNum);

  // XMLDocumentHandler
  virtual void startDocument();
  virtual void endDocument();
  virtual void resetDocument();
  virtual void startElement(const XERCES_CPP_NAMESPACE_QUALIFIER XMLElementDecl& elemDecl, const unsigned int urlId,
                            const XMLCh* const elemPrefix,
                            const XERCES_CPP_NAMESPACE_QUALIFIER RefVectorOf<XERCES_CPP_NAMESPACE_QUALIFIER XMLAttr>& attrList,
                            const unsigned int attrCount, const bool isEmpty, const bool isRoot);
  virtual void endElement(const XERCES_CPP_NAMESPACE_QUALIFIER XMLElementDecl& elemDecl, const unsigned int urlId,
                          const bool isRoot, const XMLCh* const elemPrefix=0);
  virtual void docCharacters(const XMLCh* const chars, const unsigned int length, const bool cdataSection);
  virtual void ignorableWhitespace(const XMLCh* const chars, const unsigned int length, const bool cdataSection);
  virtual void docComment(const XMLCh* const comment);
  virtual void docPI(const XMLCh* const target, const XMLCh* const data);
  virtual void startEntityReference(const XERCES_CPP_NAMESPACE_QUALIFIER XMLEntityDecl& entDecl);
  virtual void endEntityReference(const XERCES_CPP_NAMESPACE_QUALIFIER XMLEntityDecl& entDecl);
  virtual void XMLDecl(const XMLCh* const versionStr, const XMLCh* const encodingStr, const XMLCh* const standaloneStr,
                       const XMLCh* const actualEncodingStr);

  // PSVIHandler
  virtual void handleElementPSVI(const XMLCh* const localName, const XMLCh* const uri,
                                 XERCES_CPP_NAMESPACE_QUALIFIER PSVIElement *elementInfo);
  virtual void handlePartialElementPSVI(const XMLCh* const localName, const XMLCh* const uri,
                                        XERCES_CPP_NAMESPACE_QUALIFIER PSVIElement *elementInfo);
  virtual void handleAttributesPSVI(const XMLCh* const localName, const XMLCh* const uri,
                                    XERCES_CPP_NAMESPACE_QUALIFIER PSVIAttributeList *psviAttributes);

protected:
  XERCES_CPP_NAMESPACE_QUALIFIER GrammarResolver *grammarResolver_;
  XERCES_CPP_NAMESPACE_QUALIFIER XMLScanner *scanner_;
  XERCES_CPP_NAMESPACE_QUALIFIER XMLEntityResolver *entityResolver_;

  EventHandler *events_;
  const XERCES_CPP_NAMESPACE_QUALIFIER RefVectorOf<XERCES_CPP_NAMESPACE_QUALIFIER XMLAttr> *attrList_;
  unsigned int attrCount_;
  XERCES_CPP_NAMESPACE_QUALIFIER PSVIElement *elementInfo_;
  bool strictValidation_;

  XERCES_CPP_NAMESPACE_QUALIFIER XMLStringPool* loadedSchemas_;
  XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer schemaLocations_;
  XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer noNamespaceSchemaLocation_;
  XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* memMgr_;
};

#endif

