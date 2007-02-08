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

#include "../config/xqilla_config.h"
#include <assert.h>

#include <xercesc/util/XMLURL.hpp>
#include <xercesc/util/XMLString.hpp>
#include <xercesc/util/XMLResourceIdentifier.hpp>
#include <xercesc/util/XMLEntityResolver.hpp>
#include <xercesc/framework/MemBufInputSource.hpp>
#include <xercesc/sax/SAXParseException.hpp>
#include <xercesc/validators/datatype/DatatypeValidatorFactory.hpp>
#include <xercesc/validators/common/Grammar.hpp>
#include <xercesc/validators/schema/SchemaGrammar.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xercesc/validators/schema/SchemaValidator.hpp>
#include <xercesc/framework/XMLSchemaDescription.hpp>
#include <xercesc/framework/XMLGrammarPool.hpp>
#include <xercesc/internal/IGXMLScanner.hpp>

#include "FastXDMDocumentCacheImpl.hpp"
#include "FastXDMDocument.hpp"
#include "FastXDMNodeImpl.hpp"

#include <xqilla/exceptions/DynamicErrorException.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>
#include <xqilla/exceptions/XMLParseException.hpp>
#include <xqilla/functions/FunctionConstructor.hpp>
#include <xqilla/items/ATUntypedAtomic.hpp>
#include <xqilla/items/AnyAtomicType.hpp>
#include <xqilla/items/ATDurationOrDerived.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/schema/AnyAtomicTypeDatatypeValidator.hpp>
#include <xqilla/schema/DocumentCacheImpl.hpp>
#include <xqilla/parser/QName.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/ItemFactory.hpp>

XERCES_CPP_NAMESPACE_USE;

class GrammarResolverHack : public XMemory
{
public:
    bool                            fCacheGrammar;
    bool                            fUseCachedGrammar;
    bool                            fGrammarPoolFromExternalApplication;
    XMLStringPool*                  fStringPool;
    RefHashTableOf<Grammar>*        fGrammarBucket;
    RefHashTableOf<Grammar>*        fGrammarFromPool;
    DatatypeValidatorFactory*       fDataTypeReg;
    MemoryManager*                  fMemoryManager;
    XMLGrammarPool*                 fGrammarPool;
    XSModel*                        fXSModel;
    XSModel*                        fGrammarPoolXSModel;
    ValueVectorOf<SchemaGrammar*>*  fGrammarsToAddToXSModel;
};

FastXDMDocumentCacheImpl::FastXDMDocumentCacheImpl(MemoryManager* memMgr)
  : grammarResolver_(0),
    scanner_(0),
    entityResolver_(0),
    events_(0),
    attrList_(0),
    attrCount_(0),
    elementInfo_(0),
    strictValidation_(false),
    loadedSchemas_(0),
    schemaLocations_(1023, memMgr),
    noNamespaceSchemaLocation_(1023, memMgr),
    memMgr_(memMgr)
{
  init();
}

FastXDMDocumentCacheImpl::FastXDMDocumentCacheImpl(const FastXDMDocumentCacheImpl *parent, MemoryManager* memMgr)
  : grammarResolver_(0),
    scanner_(0),
    entityResolver_(0),
    events_(0),
    attrList_(0),
    attrCount_(0),
    elementInfo_(0),
    strictValidation_(false),
    loadedSchemas_(0),
    schemaLocations_(1023, memMgr),
    noNamespaceSchemaLocation_(1023, memMgr),
    memMgr_(memMgr)
{
  init(parent->grammarResolver_->getGrammarPool());

  schemaLocations_.set(parent->schemaLocations_.getRawBuffer());
  noNamespaceSchemaLocation_.set(parent->noNamespaceSchemaLocation_.getRawBuffer());

  scanner_->setExternalNoNamespaceSchemaLocation(noNamespaceSchemaLocation_.getRawBuffer());
  scanner_->setExternalSchemaLocation(schemaLocations_.getRawBuffer());
}

void FastXDMDocumentCacheImpl::init(XMLGrammarPool *gramPool)
{
  grammarResolver_ = new (memMgr_) GrammarResolver(gramPool, memMgr_);
  scanner_ = new (memMgr_) IGXMLScanner(0, grammarResolver_, memMgr_);
  scanner_->setURIStringPool(grammarResolver_->getStringPool());

  if(gramPool) {
    // Hack around a Xerces bug, where the GrammarResolver doesn't
    // initialise it's XSModel correctly from a locked XMLGrammarPool - jpcs
    ((GrammarResolverHack*)grammarResolver_)->fGrammarPoolXSModel = gramPool->getXSModel();
  }

  // hold the loaded schemas in the cache, so that can be reused    
  grammarResolver_->cacheGrammarFromParse(true);
  grammarResolver_->useCachedGrammarInParse(true);
  scanner_->cacheGrammarFromParse(true);
  scanner_->useCachedGrammarInParse(true);

  // set up the parser
  scanner_->setDocHandler(this);
  scanner_->setEntityHandler(this);
  scanner_->setErrorReporter(this);
  scanner_->setPSVIHandler(this);
  scanner_->setDoNamespaces(true);
  scanner_->setDoSchema(true);
  scanner_->setValidationScheme(XMLScanner::Val_Auto);
  scanner_->setValidationConstraintFatal(false);

  loadedSchemas_ = new (memMgr_) XMLStringPool(3, memMgr_);
}

FastXDMDocumentCacheImpl::~FastXDMDocumentCacheImpl()
{
    delete scanner_;
    delete grammarResolver_;
    delete loadedSchemas_;
}

void FastXDMDocumentCacheImpl::setXMLEntityResolver(XMLEntityResolver* const handler)
{
  entityResolver_ = handler;
}

XMLEntityResolver* FastXDMDocumentCacheImpl::getXMLEntityResolver() const
{
  return entityResolver_;
}

void FastXDMDocumentCacheImpl::startInputSource(const InputSource& inputSource)
{
}

void FastXDMDocumentCacheImpl::endInputSource(const InputSource& inputSource)
{
}

bool FastXDMDocumentCacheImpl::expandSystemId(const XMLCh* const systemId, XMLBuffer &toFill)
{
  return false;
}

void FastXDMDocumentCacheImpl::resetEntities()
{
}

InputSource* FastXDMDocumentCacheImpl::resolveEntity(const XMLCh* const publicId, const XMLCh* const systemId, const XMLCh* const baseURI)
{
  return 0;
}

InputSource* FastXDMDocumentCacheImpl::resolveEntity(XMLResourceIdentifier* resourceIdentifier)
{
  if(entityResolver_)
    return entityResolver_->resolveEntity(resourceIdentifier);
  return 0;
}

void FastXDMDocumentCacheImpl::resetErrors()
{
}

void FastXDMDocumentCacheImpl::error(const unsigned int errCode, const XMLCh* const errDomain, const XMLErrorReporter::ErrTypes errType, const XMLCh* const errorText,
                                     const XMLCh* const systemId, const XMLCh* const publicId, const XMLSSize_t lineNum, const XMLSSize_t colNum)
{
  // Skip validation errors if validation isn't strict
  if(!strictValidation_ && errDomain == XMLUni::fgValidityDomain)
    return;

  // Throw for errors and fatal errors
  if(errType != XMLErrorReporter::ErrType_Warning)
    throw SAXParseException(errorText, publicId, systemId, lineNum, colNum, memMgr_);
}

Node::Ptr FastXDMDocumentCacheImpl::loadDocument(const XMLCh* uri, DynamicContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  FastXDMDocument::Ptr document = new FastXDMDocument(mm);
  events_ = document.get();
  attrList_ = 0;
  attrCount_ = 0;
  elementInfo_ = 0;
  strictValidation_ = false;

  InputSource* srcToUse = 0;
  if(entityResolver_){
    XMLResourceIdentifier resourceIdentifier(XMLResourceIdentifier::UnKnown, uri, 0,
                                             XMLUni::fgZeroLenString, context->getBaseURI());
    srcToUse = entityResolver_->resolveEntity(&resourceIdentifier);
  }
  Janitor<InputSource> janIS(srcToUse);

  try {
    if(srcToUse) {
      scanner_->scanDocument(*srcToUse);
    }
    else {
      // Resolve the uri against the base uri
      const XMLCh *systemId = uri;
      XERCES_CPP_NAMESPACE_QUALIFIER XMLURL urlTmp(context->getMemoryManager());
      if(urlTmp.setURL(context->getBaseURI(), uri, urlTmp)) {
        systemId = urlTmp.getURLText();
      }

      scanner_->scanDocument(systemId);
    }
  }
  catch(const SAXException& toCatch) {
    //TODO: Find a way to decipher whether the exception is actually because of a parsing problem or because the document can't be found
    XQThrow2(XMLParseException, X("FastXDMDocumentCacheImpl::loadDocument"), toCatch.getMessage());
  }
  catch(const XMLException& toCatch) {
    XQThrow2(XMLParseException,X("FastXDMDocumentCacheImpl::loadDocument"), toCatch.getMessage());
  }

  events_->endEvent();
  return new FastXDMNodeImpl(document, document->getNode(0));
}

void FastXDMDocumentCacheImpl::startDocument()
{
  events_->startDocumentEvent(scanner_->getLocator()->getSystemId(),
                              scanner_->getReaderMgr()->getCurrentEncodingStr());
}

void FastXDMDocumentCacheImpl::endDocument()
{
  events_->endDocumentEvent();
}

void FastXDMDocumentCacheImpl::resetDocument()
{
}

void FastXDMDocumentCacheImpl::startElement(const XMLElementDecl& elemDecl, const unsigned int urlId,
                                            const XMLCh* const elemPrefix, const RefVectorOf<XMLAttr>& attrList,
                                            const unsigned int attrCount, const bool isEmpty, const bool isRoot)
{
  events_->startElementEvent(emptyToNull(elemPrefix), emptyToNull(scanner_->getURIText(urlId)), elemDecl.getBaseName());

  attrList_ = &attrList;
  attrCount_ = attrCount;
  if(scanner_->getCurrentGrammarType() != Grammar::SchemaGrammarType) {
    handleAttributesPSVI(0, 0, 0);
  }

  // We're not expecting isEmpty to be true, since we're processing namespaces
  assert(!isEmpty);
}

void FastXDMDocumentCacheImpl::endElement(const XMLElementDecl& elemDecl, const unsigned int urlId, const bool isRoot,
                                          const XMLCh* const elemPrefix)
{
//   // Type URI and localname
//   if(elementInfo->getTypeDefinition()) {
//     elementInfo->getTypeDefinition()->getNamespace();
//     elementInfo->getTypeDefinition()->getName();
//   }

//   // Union member
//   if(elementInfo->getMemberTypeDefinition()) {
//     elementInfo->getMemberTypeDefinition()->getNamespace();
//     elementInfo->getMemberTypeDefinition()->getName();
//   }

//   // dmNilled
//   elementInfo->getValidity()==PSVIItem::VALIDITY_VALID;
//   if(elementInfo->getElementDeclaration())
//     elementInfo->getElementDeclaration()->getNillable()!=0;

  const XMLCh *typeURI = SchemaSymbols::fgURI_SCHEMAFORSCHEMA;
  const XMLCh *typeName = DocumentCacheParser::g_szUntyped;

  if(elementInfo_ != 0 && elementInfo_->getValidity() == PSVIItem::VALIDITY_VALID) {
    if(elementInfo_->getMemberTypeDefinition()) {
      typeURI = elementInfo_->getMemberTypeDefinition()->getNamespace();
      typeName = elementInfo_->getMemberTypeDefinition()->getName();
    }
    else if(elementInfo_->getTypeDefinition()) {
      typeURI = elementInfo_->getTypeDefinition()->getNamespace();
      typeName = elementInfo_->getTypeDefinition()->getName();
    }
    else {
      typeURI = SchemaSymbols::fgURI_SCHEMAFORSCHEMA;
      typeName = SchemaSymbols::fgATTVAL_ANYTYPE;
    }
  }

  events_->endElementEvent(emptyToNull(elemPrefix), emptyToNull(scanner_->getURIText(urlId)), elemDecl.getBaseName(),
                           typeURI, typeName);

  elementInfo_ = 0;
}

void FastXDMDocumentCacheImpl::docCharacters(const XMLCh* const chars, const unsigned int length, const bool cdataSection)
{
  events_->textEvent(chars, length);
}

void FastXDMDocumentCacheImpl::docComment(const XMLCh* const comment)
{
  events_->commentEvent(comment);
}

void FastXDMDocumentCacheImpl::docPI(const XMLCh* const target, const XMLCh* const data)
{
  events_->piEvent(target, data);
}

void FastXDMDocumentCacheImpl::ignorableWhitespace(const XMLCh* const chars, const unsigned int length,
                                                   const bool cdataSection)
{
  // No-op
}

void FastXDMDocumentCacheImpl::startEntityReference(const XMLEntityDecl& entDecl)
{
  // No-op
}

void FastXDMDocumentCacheImpl::endEntityReference(const XMLEntityDecl& entDecl)
{
  // No-op
}

void FastXDMDocumentCacheImpl::XMLDecl(const XMLCh* const versionStr, const XMLCh* const encodingStr,
                                       const XMLCh* const standaloneStr, const XMLCh* const actualEncodingStr)
{
  // No-op
}

void FastXDMDocumentCacheImpl::handleElementPSVI(const XMLCh* const localName, const XMLCh* const uri,
                                                 PSVIElement *elementInfo)
{
  // We're going to deal with this in endElement(), where we know the prefix
  elementInfo_ = elementInfo;
}

void FastXDMDocumentCacheImpl::handlePartialElementPSVI(const XMLCh* const localName, const XMLCh* const uri,
                                                        PSVIElement *elementInfo)
{
}

void FastXDMDocumentCacheImpl::handleAttributesPSVI(const XMLCh* const localName, const XMLCh* const uri,
                                                    PSVIAttributeList *psviAttributes)
{
  for(unsigned int i = 0; i < attrCount_; ++i) {
    const XMLAttr *attr = attrList_->elementAt(i);
    if(attr->getURIId() == scanner_->getXMLNSNamespaceId()) {
      events_->namespaceEvent(attr->getName(), attr->getValue());
    }
    else if(XPath2Utils::equals(attr->getName(), XMLUni::fgXMLNSString)) {
      events_->namespaceEvent(0, attr->getValue());
    }
    else {
      const XMLCh *auri = scanner_->getURIText(attr->getURIId());
      const XMLCh *typeURI = SchemaSymbols::fgURI_SCHEMAFORSCHEMA;
      const XMLCh *typeName = ATUntypedAtomic::fgDT_UNTYPEDATOMIC;

      if(psviAttributes != 0) {
        PSVIAttribute *attrInfo = psviAttributes->getAttributePSVIByName(attr->getName(), auri);
        if(attrInfo && attrInfo->getValidity() == PSVIItem::VALIDITY_VALID) {
          if(attrInfo->getMemberTypeDefinition()) {
            typeURI = attrInfo->getMemberTypeDefinition()->getNamespace();
            typeName = attrInfo->getMemberTypeDefinition()->getName();
          }
          else if(attrInfo->getTypeDefinition()) {
            typeURI = attrInfo->getTypeDefinition()->getNamespace();
            typeName = attrInfo->getTypeDefinition()->getName();
          }
          else {
            typeURI = SchemaSymbols::fgURI_SCHEMAFORSCHEMA;
            typeName = SchemaSymbols::fgDT_ANYSIMPLETYPE;
          }
        }
      }

      events_->attributeEvent(emptyToNull(attr->getPrefix()), emptyToNull(auri), attr->getName(), attr->getValue(),
                              typeURI, typeName);
    }
  }

  attrList_ = 0;
  attrCount_ = 0;
}

/*
 * returns true if the type represented by uri:typename is an instance of uriToCheck:typeNameToCheck 
 *
 * ie: to check 
 * xs:integer instance of xs:decimal, 
 * call
 * isTypeOrDerivedFromType("xs", "integer", "xs", "decimal") 
 * (except of course, call with URIs, not prefixes!)
 */
bool FastXDMDocumentCacheImpl::isTypeOrDerivedFromType(const XMLCh* const uri, const XMLCh* const typeName,
                                                       const XMLCh* const uriToCheck,
                                                       const XMLCh* const typeNameToCheck) const
{
  // dumb check
  if(XPath2Utils::equals(typeName,typeNameToCheck) && XPath2Utils::equals(uri,uriToCheck))
    return true;

  // xs:anyType matches anything
  if(XPath2Utils::equals(uriToCheck, SchemaSymbols::fgURI_SCHEMAFORSCHEMA) &&
     XPath2Utils::equals(typeNameToCheck, SchemaSymbols::fgATTVAL_ANYTYPE))
    return true;

  DatatypeValidator* dtvDerived = grammarResolver_->getDatatypeValidator(uri,typeName);
  if(dtvDerived == NULL) {
    // now lets take a look at complex stuff
    ComplexTypeInfo *cti = getComplexTypeInfo(uri, typeName);

    // in the case of non-schema grammar
    if(cti) {
      // if we are here, the type is a complex type
      while(cti != 0) {
        if(XPath2Utils::equals(uriToCheck, cti->getTypeUri()) && 
           XPath2Utils::equals(typeNameToCheck, cti->getTypeLocalName())) 
          return true;
        ComplexTypeInfo *ctiOld = cti;
        cti = cti->getBaseComplexTypeInfo();

        // might be derived from a simple type
        if(cti == 0) {
          DatatypeValidator* dtv = ctiOld->getDatatypeValidator();

          while(dtv != 0) {
            if(XPath2Utils::equals(uriToCheck, dtv->getTypeUri()) && 
               XPath2Utils::equals(typeNameToCheck, dtv->getTypeLocalName())) 
              return true;
            dtv = dtv->getBaseValidator();
          }   
        }
      }
    }
    return false;
  }

  // if we are here, the type is a simple type
  if(XPath2Utils::equals(typeNameToCheck, SchemaSymbols::fgDT_ANYSIMPLETYPE) &&
     XPath2Utils::equals(uriToCheck, SchemaSymbols::fgURI_SCHEMAFORSCHEMA))
    return true;

  if(XPath2Utils::equals(typeNameToCheck, AnyAtomicType::fgDT_ANYATOMICTYPE) &&
     XPath2Utils::equals(uriToCheck, FunctionConstructor::XMLChXPath2DatatypesURI) )
    return dtvDerived->isAtomic();

  DatatypeValidator* dtvBase = grammarResolver_->getDatatypeValidator(uriToCheck,typeNameToCheck);
  if(dtvBase==NULL)
    return false;
  while(dtvDerived != 0) {
    if(XPath2Utils::equals(dtvBase->getTypeUri(), dtvDerived->getTypeUri()) && 
       XPath2Utils::equals(dtvBase->getTypeLocalName(), dtvDerived->getTypeLocalName())) 
      return true;
    dtvDerived = dtvDerived->getBaseValidator();
  }

  return false;
}

bool FastXDMDocumentCacheImpl::isTypeDefined(const XMLCh* const uri, const XMLCh* const typeName) const
{
  if(getComplexTypeInfo(uri, typeName) != NULL)
    return true;

  if(grammarResolver_->getDatatypeValidator(uri,typeName) != NULL)
    return true;

  // these types are not present in the XMLSchema grammar, but they are defined
  if(XPath2Utils::equals(uri, SchemaSymbols::fgURI_SCHEMAFORSCHEMA)) {
    return (XPath2Utils::equals(typeName, DocumentCacheParser::g_szUntyped) ||
            XPath2Utils::equals(typeName, SchemaSymbols::fgATTVAL_ANYTYPE));
  }
  return false;
}

void FastXDMDocumentCacheImpl::addSchemaLocation(const XMLCh* uri, VectorOfStrings* locations, StaticContext *context)
{
  XMLBuffer buf(1023,context->getMemoryManager());
  if(loadedSchemas_->exists(uri))
  {
    buf.set(X("More than one 'import schema' specifies the same target namespace \""));
    buf.append(uri);
    buf.append(X("\" [err:XQST0058]"));
    XQThrow2(StaticErrorException,X("FastXDMDocumentCacheImpl::addSchemaLocation"), buf.getRawBuffer());
  }
  loadedSchemas_->addOrFind(uri);

  bool bFoundSchema=false;
  if(locations==NULL) {
    // if no locations are given, try to see if the entity resolver can still find it
    try {
      loadSchema(uri, 0, context);
      bFoundSchema = true;
    } catch(SAXParseException& e) {
      buf.set(X("An error occurred while trying to load the schema for namespace \""));
      buf.append(uri);
      buf.append(X("\": "));
      buf.append(e.getMessage());
      buf.append(X(" [err:XQST0059]"));
    }
  }
  else {
    for(VectorOfStrings::iterator it=locations->begin(); it!=locations->end(); it++) {
      try {
        loadSchema(uri, *it, context);
        bFoundSchema = true;
        break;
      } catch(SAXParseException& e) {
        buf.set(X("An error occurred while trying to load the schema for namespace \""));
        buf.append(uri);
        buf.append(X("\" from \""));
        buf.append(*it);
        buf.append(X("\": "));
        buf.append(e.getMessage());
        buf.append(X(" [err:XQST0059]"));
      }
    }
  }
  if(!bFoundSchema)
  {
    if(buf.isEmpty())
      XQThrow2(StaticErrorException,X("FastXDMDocumentCacheImpl::addSchemaLocation"), X("Schema not found [err:XQST0059]"));
    else
      XQThrow2(StaticErrorException,X("FastXDMDocumentCacheImpl::addSchemaLocation"), buf.getRawBuffer());
  }
}

void FastXDMDocumentCacheImpl::loadSchema(const XMLCh* const uri, const XMLCh* location, StaticContext *context)
{
  // if we are requested to load the XMLSchema schema, just return
  if(XPath2Utils::equals(uri, SchemaSymbols::fgURI_SCHEMAFORSCHEMA))
    return;
  InputSource* srcToUse = 0;
  if(entityResolver_){
    XMLResourceIdentifier resourceIdentifier(XMLResourceIdentifier::SchemaGrammar,
                                             location, uri, XMLUni::fgZeroLenString, 
                                             context->getBaseURI());
    srcToUse = entityResolver_->resolveEntity(&resourceIdentifier);
  }
  Janitor<InputSource> janIS(srcToUse);

  Grammar* grammar=NULL;
  if(srcToUse) {
    if(location == 0) location = srcToUse->getSystemId();
    grammar = scanner_->loadGrammar(*srcToUse, Grammar::SchemaGrammarType, true);
  }
  else if(location) {
    // Resolve the location against the base uri
    const XMLCh *systemId = location;
    XMLURL urlTmp(context->getMemoryManager());
    if(urlTmp.setURL(context->getBaseURI(), location, urlTmp)) {
      systemId = urlTmp.getURLText();
    }

    grammar = scanner_->loadGrammar(systemId, Grammar::SchemaGrammarType, true);
  }
  if(grammar==NULL)
    XQThrow2(StaticErrorException,X("FastXDMDocumentCacheImpl::loadSchema"), X("Schema not found [err:XQST0059]"));

  // Update the scanner's external schema locations, so it validates
  // XML documents that match
  if(uri == 0 || *uri == 0) {
    noNamespaceSchemaLocation_.set(location);
    scanner_->setExternalNoNamespaceSchemaLocation(noNamespaceSchemaLocation_.getRawBuffer());
  }
  else {
    schemaLocations_.append(' ');
    schemaLocations_.append(uri);
    schemaLocations_.append(' ');
    schemaLocations_.append(location);
    scanner_->setExternalSchemaLocation(schemaLocations_.getRawBuffer());
  }
}

unsigned int FastXDMDocumentCacheImpl::getSchemaUriId(const XMLCh* uri) const
{
  return scanner_->getURIStringPool()->getId(uri);
}

const XMLCh* FastXDMDocumentCacheImpl::getSchemaUri(unsigned int id) const
{
  return scanner_->getURIStringPool()->getValueForId(id);
}

class DocumentElementOnlyFilter : public EventFilter
{
public:
  DocumentElementOnlyFilter(EventHandler *next)
    : EventFilter(next),
      reportEvents_(false)
  {
  }

  virtual void startDocumentEvent(const XMLCh *documentURI, const XMLCh *encoding)
  {
  }

  virtual void endDocumentEvent()
  {
  }

  virtual void startElementEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname)
  {
    reportEvents_ = true;
    next_->startElementEvent(prefix, uri, localname);
  }

  virtual void piEvent(const XMLCh *target, const XMLCh *value)
  {
    if(reportEvents_)
      next_->piEvent(target, value);
  }

  virtual void textEvent(const XMLCh *value)
  {
    if(reportEvents_)
      next_->textEvent(value);
  }

  virtual void textEvent(const XMLCh *chars, unsigned int length)
  {
    if(reportEvents_)
      next_->textEvent(chars, length);
  }

  virtual void commentEvent(const XMLCh *value)
  {
    if(reportEvents_)
      next_->commentEvent(value);
  }

private:
  bool reportEvents_;
};

Node::Ptr FastXDMDocumentCacheImpl::validate(const Node::Ptr &node,
                                             DocumentCache::ValidationMode valMode,
                                             DynamicContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  try {
    Node::Ptr documentElement = node;

    if(node->dmNodeKind() == Node::document_string) {
      Result children = node->dmChildren(context, 0);
      Node::Ptr child;
      documentElement = 0;
      while((child = children->next(context)).notNull()) {
        if(child->dmNodeKind()==Node::element_string)
          if(documentElement.notNull())
            XQThrow2(DynamicErrorException,X("FastXDMDocumentCacheImpl::validate"),
                     X("A document being validated must have exactly one child element [err:XQDY0061]"));
          else {
            documentElement = child;
          }
        else if(child->dmNodeKind() != Node::processing_instruction_string && 
                child->dmNodeKind() != Node::comment_string)
          XQThrow2(DynamicErrorException,X("FastXDMDocumentCacheImpl::validate"),
                   X("A document being validated can only have element, comments and processing instructions as children [err:XQDY0061]"));
      }
      if(documentElement.isNull())
        XQThrow2(DynamicErrorException,X("FastXDMDocumentCacheImpl::validate"),
                 X("A document being validated must have exactly one child element [err:XQDY0061]"));
    }

    // if validation is strict, there must be a schema for the root node
    if(valMode == DocumentCache::VALIDATION_STRICT) {
      ATQNameOrDerived::Ptr name = documentElement->dmNodeName(context);
      const XMLCh *node_uri = ((const ATQNameOrDerived*)name.get())->getURI();
      const XMLCh *node_name = ((const ATQNameOrDerived*)name.get())->getName();

      SchemaElementDecl* elemDecl = getElementDecl(node_uri, node_name);
      if(elemDecl == NULL) {
        XMLBuffer msg(1023, mm);
        msg.set(X("Element {"));
        msg.append(node_uri);
        msg.append(X("}"));
        msg.append(node_name);
        msg.append(X(" is not defined as a global element [err:XQDY0084]"));
        XQThrow2(DynamicErrorException,X("FastXDMDocumentCacheImpl::validate"), msg.getRawBuffer());
      }
    }

    // - build a textual representation of the element
    // TBD Write schema validation as an EventHandler, so we don't have to serialize - jpcs
    AutoDeallocate<const XMLCh> serializedForm(node->asString(context), context->getMemoryManager());

    MemBufInputSource inputSrc((const XMLByte*)serializedForm.get(), 
                               XMLString::stringLen(serializedForm) * sizeof(XMLCh), 
                               XMLUni::fgZeroLenString,
                               false, mm);
    inputSrc.setCopyBufToStream(false);
    inputSrc.setEncoding(XMLUni::fgUTF16EncodingString);

    // - parse the text (with validation on)
    FastXDMDocument::Ptr document = new FastXDMDocument(mm);
    events_ = document.get();
    attrList_ = 0;
    attrCount_ = 0;
    elementInfo_ = 0;
    strictValidation_ = valMode == DocumentCache::VALIDATION_STRICT;

    DocumentElementOnlyFilter filter(document.get());
    if(node->dmNodeKind() == Node::element_string) {
      events_ = &filter;
    }

    scanner_->scanDocument(inputSrc);
    events_->endEvent();

    return new FastXDMNodeImpl(document, document->getNode(0));
  }
  catch(const SAXException& toCatch) {
    XMLBuffer exc_msg(1023, context->getMemoryManager());
    exc_msg.set(X("Validation failed: "));
    exc_msg.append(toCatch.getMessage());
    exc_msg.append(X(" [err:XQDY0027]"));
    XQThrow2(DynamicErrorException,X("FastXDMDocumentCacheImpl::validate"), exc_msg.getRawBuffer());
  }
  catch(const XMLException& toCatch) {
    XMLBuffer exc_msg(1023, context->getMemoryManager());
    exc_msg.set(X("Validation failed: "));
    exc_msg.append(toCatch.getMessage());
    exc_msg.append(X(" [err:XQDY0027]"));
    XQThrow2(DynamicErrorException,X("FastXDMDocumentCacheImpl::validate"), exc_msg.getRawBuffer());
  }
  return NULL;
}

DatatypeValidator*  FastXDMDocumentCacheImpl::getDatatypeValidator(const XMLCh* uri, const XMLCh* typeName) const
{
  return grammarResolver_->getDatatypeValidator(uri,typeName);
}

SchemaElementDecl* FastXDMDocumentCacheImpl::getElementDecl(const XMLCh* elementUri, const XMLCh* elementName) const
{
  XMLSchemaDescription* gramDesc = grammarResolver_->getGrammarPool()->createSchemaDescription(elementUri);
  Janitor<XMLSchemaDescription> janName(gramDesc);
  SchemaGrammar* schGrammar = (SchemaGrammar*)grammarResolver_->getGrammar(gramDesc);
  if(schGrammar == NULL) return NULL;

  // find the definition for this node, as a global definition
  return (SchemaElementDecl*)schGrammar->getElemDecl(getSchemaUriId(elementUri), elementName, NULL,
                                                     (unsigned int)Grammar::TOP_LEVEL_SCOPE);
}

SchemaAttDef* FastXDMDocumentCacheImpl::getAttributeDecl(const XMLCh* attributeUri, const XMLCh* attributeName) const
{
  XMLSchemaDescription* gramDesc = grammarResolver_->getGrammarPool()->createSchemaDescription(attributeUri);
  Janitor<XMLSchemaDescription> janName(gramDesc);
  SchemaGrammar* schGrammar = (SchemaGrammar*)grammarResolver_->getGrammar(gramDesc);
  if(schGrammar==NULL) return NULL;

  // find the definition for this node, as a global definition
  return (SchemaAttDef*)schGrammar->getAttributeDeclRegistry()->get(attributeName);
}

ComplexTypeInfo*  FastXDMDocumentCacheImpl::getComplexTypeInfo(const XMLCh* uri, const XMLCh* typeName) const
{
  Grammar* grammar = grammarResolver_->getGrammar(uri);
  if(grammar==NULL) return NULL;
  if(grammar->getGrammarType() != Grammar::SchemaGrammarType) return NULL;

  SchemaGrammar* schGrammar = (SchemaGrammar*)grammar;
  RefHashTableOf<ComplexTypeInfo> *ctr = schGrammar->getComplexTypeRegistry();
  if(ctr==NULL) return NULL;

  XMLBuffer typeKey(1023, memMgr_);
  typeKey.set(uri);
  typeKey.append(chComma);
  typeKey.append(typeName);

  return ctr->get(typeKey.getRawBuffer());
}

DocumentCache *FastXDMDocumentCacheImpl::createDerivedCache(MemoryManager *memMgr) const
{
  // lock the grammar pool, so we can share it accross threads
  grammarResolver_->getGrammarPool()->lockPool();

  // Construct a new FastXDMDocumentCacheImpl, based on this one
  return new (memMgr) FastXDMDocumentCacheImpl(this, memMgr);
}
