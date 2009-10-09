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
 * $Id: UnicodeTransformer.cpp 475 2008-01-08 18:47:44Z jpcs $
 */

#include <xqilla/utils/UnicodeTransformer.hpp>
#include <xercesc/framework/XMLBuffer.hpp>
#include <vector>
extern "C" {
#include <xqilla/utils/utf8proc.h>
}

#define NO_COMPOSITION 0xFFFFFFFF

using namespace std;
#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

static void cleanup(int32_t *buf)
{
  if (buf != NULL)
    delete []buf;
  return;
}

static void transformUTF16(const XMLCh *source, XMLBuffer &dest, int options)
{
  // Count word number
  ssize_t srcSize;
  const XMLCh* pch = source;
  for (srcSize = 0; *pch++; srcSize++);

  // Create a piece of buffer for storaging result. The size is larger than the
  // source for decompressing/SpecialCasing/Casefolding and so on. The code
  // consider that a "double size" is enough for most of applied environment.
  // If the size is not enough, the buffer will be enlarge.
  ssize_t dstSize = srcSize * 2 + 1;
  if (dstSize < 1024) 
    dstSize = 1024;
  int32_t *buf = new int32_t[dstSize];
  if (buf == NULL) // do nothig if not enough memory
      return cleanup(buf);

  // Begin transform
  ssize_t result = utf16proc_decompose((const uint16_t *)source, srcSize, buf, dstSize, options);
  // do nothig if hits internal errors
  if (result < 0)
      return cleanup(buf);
  // Create a new buffer if the buffer is not large enough
  if (result > dstSize) {
    // We have to create a bigger one.
    delete []buf;
    dstSize = result + 1;
    buf = new int32_t[dstSize];
    if (buf == NULL)  // do nothig if not enough memory
      return cleanup(buf);

    result = utf16proc_decompose((const uint16_t *)source, srcSize, buf, dstSize, options);
    if (result < 0 || result > dstSize)
      return cleanup(buf);
  }

  result = utf16proc_reencode(buf, result, options);
  if (result < 0)
    return cleanup(buf);

  // Write the end and push it into stream
  XMLCh* output = (XMLCh *)buf;
  output[result] = 0;
  dest.append(output);

  return cleanup(buf);
}

void UnicodeTransformer::normalizeC(const XMLCh* source, XMLBuffer &dest)
{
  transformUTF16(source, dest, UTF8PROC_COMPOSE);
}

void UnicodeTransformer::normalizeD(const XMLCh* source, XMLBuffer &dest)
{
  transformUTF16(source, dest, UTF8PROC_DECOMPOSE);
}

void UnicodeTransformer::normalizeKC(const XMLCh* source, XMLBuffer &dest)
{
  transformUTF16(source, dest, UTF8PROC_COMPAT | UTF8PROC_COMPOSE);
}

void UnicodeTransformer::normalizeKD(const XMLCh* source, XMLBuffer &dest)
{
  transformUTF16(source, dest, UTF8PROC_COMPAT | UTF8PROC_DECOMPOSE);
}

void UnicodeTransformer::caseFold(const XMLCh* source, XMLBuffer &dest)
{
  transformUTF16(source, dest, UTF8PROC_CASEFOLD);
}

void UnicodeTransformer::removeDiacritics(const XMLCh* source, XMLBuffer &dest)
{
  transformUTF16(source, dest, UTF8PROC_REMOVE_DIACRITIC);
}

void UnicodeTransformer::caseFoldAndRemoveDiacritics(const XMLCh* source, XMLBuffer &dest)
{
  transformUTF16(source, dest, UTF8PROC_CASEFOLD | UTF8PROC_REMOVE_DIACRITIC);
}

void UnicodeTransformer::lowerCase(const XMLCh* source, XMLBuffer &dest)
{
  transformUTF16(source, dest, UTF8PROC_LOWERCASE);
}

void UnicodeTransformer::upperCase(const XMLCh* source, XMLBuffer &dest)
{
  transformUTF16(source, dest, UTF8PROC_UPPERCASE);
}

void UnicodeTransformer::words(const XMLCh* source, XMLBuffer &dest)
{
  transformUTF16(source, dest, UTF8PROC_WORDBOUND);
}

void UnicodeTransformer::sentences(const XMLCh* source, XMLBuffer &dest)
{
  transformUTF16(source, dest, UTF8PROC_SENTENCEBOUND);
}
