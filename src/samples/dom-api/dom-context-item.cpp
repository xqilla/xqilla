#include <iostream>
#include <xercesc/dom/DOM.hpp>
#include <xercesc/framework/StdOutFormatTarget.hpp>
#include <xqilla/xqilla-dom3.hpp>

XERCES_CPP_NAMESPACE_USE;

int main(int argc, char *argv[]) {
  // Initialise Xerces-C and XQilla using XQillaPlatformUtils
  XQillaPlatformUtils::initialize();

  // Get the XQilla DOMImplementation object
  DOMImplementation *xqillaImplementation =
    DOMImplementationRegistry::getDOMImplementation(X("XPath2 3.0"));

  // Create a DOMBuilder object
  DOMBuilder *builder = xqillaImplementation->createDOMBuilder(DOMImplementationLS::MODE_SYNCHRONOUS, 0);
  builder->setFeature(X("namespaces"), true);
  builder->setFeature(X("http://apache.org/xml/features/validation/schema"), true);
  builder->setFeature(X("validation"), true);

  // Parse a DOMDocument
  DOMDocument *document = builder->parseURI("foo.xml");
  if(document == 0) {
    std::cerr << "Document not found." << std::endl;
    return 1;
  }

  try {
    // Parse an XPath 2 expression
    const DOMXPathExpression *expression = document->createExpression(X("foo/bar/@baz"), 0);

    // Execute the query
    XPath2Result *result = (XPath2Result*)expression->evaluate(document, XPath2Result::ITERATOR_RESULT, 0);

    // Create a DOMWriter to output the nodes
    DOMWriter *writer = xqillaImplementation->createDOMWriter();
    StdOutFormatTarget target;

    // Iterate over the results, printing them
    while(result->iterateNext()) {
      writer->writeNode(&target, *(result->asNode()));
      std::cout << std::endl;
    }

    // Clean up all the objects we have created
    writer->release();
    result->release();
    ((XQillaExpression*)expression)->release();
  }
  catch(XQillaException &e) {
    std::cerr << "XQillaException: " << UTF8(e.getString()) << std::endl;
    return 1;
  }

  builder->release();

  // Terminate Xerces-C and XQilla using XQillaPlatformUtils
  XQillaPlatformUtils::terminate();

  return 0;
}
