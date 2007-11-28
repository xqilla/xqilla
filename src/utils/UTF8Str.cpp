/*
 * Copyright (c) 2001-2007
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2007
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
 * $Id$
 */

#include "../config/xqilla_config.h"
#include <xercesc/util/XMLString.hpp>
#include <xqilla/utils/UTF8Str.hpp>

UTF8Str::UTF8Str(const XMLCh* const toTranscode)
{
  if(toTranscode == 0) {
    fUTF8Form = new XMLByte[1];
    fUTF8Form[0] = 0;
  }
  else {
    XERCES_CPP_NAMESPACE_QUALIFIER XMLUTF8Transcoder t(0, 512);
    size_t l = XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(toTranscode);
    const size_t needed = l * 3 + 1; // 3 bytes per XMLCh is the worst case, + '\0'
    fUTF8Form = new XMLByte[needed];
    unsigned int charsEaten= 0;
    t.transcodeTo(toTranscode, (unsigned int)l+1, fUTF8Form, 
		(unsigned int)needed, charsEaten, XERCES_CPP_NAMESPACE_QUALIFIER XMLTranscoder::UnRep_Throw);
  }
}
