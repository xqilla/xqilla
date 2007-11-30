#include <iostream>
#include <xercesc/dom/DOM.hpp>
#include <xqilla/xqilla-dom3.hpp>

XERCES_CPP_NAMESPACE_USE;

int main(int argc, char *argv[]) {
  // Initialise Xerces-C and XQilla using XQillaPlatformUtils
  XQillaPlatformUtils::initialize();

  // Get the XQilla DOMImplementation object
  DOMImplementation *xqillaImplementation =
    DOMImplementationRegistry::getDOMImplementation(X("XPath2 3.0"));

  // Create a DOMDocument
  DOMDocument* document = xqillaImplementation->createDocument();

  // Parse an XPath 2 expression
  const DOMXPathExpression *expression = document->createExpression(X("1 to 100"), 0);

  // Execute the query
  XPath2Result* result = (XPath2Result*)expression->evaluate(0, XPath2Result::ITERATOR_RESULT, 0);

  // Iterate over the results, printing them
  while(result->iterateNext()) {
    std::cout << result->asInt() << std::endl;
  }

  // Clean up all the objects we have created
  result->release();
  ((XQillaExpression*)expression)->release();
  delete document;

  // Terminate Xerces-C and XQilla using XQillaPlatformUtils
  XQillaPlatformUtils::terminate();

  return 0;
}
