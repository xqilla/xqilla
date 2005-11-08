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

#ifndef __LEXERDOMSTRINGSTREAM_HPP
#define __LEXERDOMSTRINGSTREAM_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xercesc/util/XercesDefs.hpp>

class XQILLA_API LexerDOMStringStream {

public:
  LexerDOMStringStream(const XMLCh* const inputBuffer);
  ~LexerDOMStringStream();
 
  ///Return the number of characters read in from the last read operation
  int gcount() { return last_retrieved; }
  ///Return true if last read, read past the end of 'file'
  bool eof() const; 
  ///Mimic istream fail() (always return false)
  int fail() const { return false; }
  ///Mimic istream bad() (always return false)
  int bad() const { return false; }
  ///Read in (hopefully) numBytes/sizeof(YY_CHAR) YY_CHAR's and write them to ptr, returning the number actually read
  int read(unsigned char *ptr, unsigned int numBytes);

private:
  //FIXME: buffer will have to change once YY_CHAR isn't an unsigned short anymore
  ///The entire stream
  unsigned short *buffer;
  ///The length of the stream;
  unsigned int length;
  ///The current position to next be read in the stream
  unsigned int position;
  ///The number of characters last read in (used by gcount)
  unsigned int last_retrieved;  
};//LexerDOMStringStream

#endif
