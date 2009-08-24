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
 * $Id: UnicodeTransformer.hpp 475 2008-01-08 18:47:44Z jpcs $
 */

#ifndef UNICODETRANSFORMER_HPP
#define UNICODETRANSFORMER_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xercesc/framework/XMLBuffer.hpp>

///
class XQILLA_API UnicodeTransformer
{
public:
  static void normalizeC(const XMLCh* source, XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer &dest);
  static void normalizeD(const XMLCh* source, XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer &dest);
  static void normalizeKC(const XMLCh* source, XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer &dest);
  static void normalizeKD(const XMLCh* source, XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer &dest);

  static void removeDiacritics(const XMLCh* source, XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer &dest);
  static void caseFold(const XMLCh* source, XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer &dest);
  static void caseFoldAndRemoveDiacritics(const XMLCh* source, XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer &dest);

  static void lowerCase(const XMLCh* source, XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer &dest);
  static void upperCase(const XMLCh* source, XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer &dest);

  static void words(const XMLCh* source, XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer &dest);
  static void sentences(const XMLCh* source, XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer &dest);
};

#endif
