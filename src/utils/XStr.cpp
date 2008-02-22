#include "../config/xqilla_config.h"
#include <xqilla/utils/XStr.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>

#include <xercesc/util/XMLString.hpp>
#include <xercesc/util/XMLUTF8Transcoder.hpp>

XStr::XStr(const char* const toTranscode)
{
  if(toTranscode == 0) {
    fUnicodeForm = new XMLCh[1];
    fUnicodeForm[0] = 0;
  }
  else {
    XERCES_CPP_NAMESPACE_QUALIFIER XMLUTF8Transcoder t(0, 512);
    size_t l = XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(toTranscode);
    const size_t needed = l * 2 + 1; // 2 chars per byte is the worst case, + '\0'
    fUnicodeForm = new XMLCh[needed];

    unsigned int bytesEaten = 0;
    AutoDeleteArray<unsigned char> charSizes(new unsigned char[needed]);

    t.transcodeFrom((const XMLByte*)toTranscode, (unsigned int)l+1, fUnicodeForm,
                    (unsigned int)needed, bytesEaten, charSizes);
  }
//   fUnicodeForm = XERCES_CPP_NAMESPACE_QUALIFIER XMLString::transcode(toTranscode);
}

XStr::~XStr()
{
  delete [] fUnicodeForm;
//   XERCES_CPP_NAMESPACE_QUALIFIER XMLString::release(&fUnicodeForm);
}
