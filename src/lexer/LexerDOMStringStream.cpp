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
#include "LexerDOMStringStream.hpp"
#include <iostream>
#include <xercesc/util/XMLString.hpp>

int get_min(int a,int b)
{
  return a<b?a:b;
}

LexerDOMStringStream::LexerDOMStringStream(const XMLCh* const inputBuffer)
{
  //convert the const XMLCh *into an array of unsigned shorts
  //XXX: Is this bad? Probably...
  
  position = 0;
  length = XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(inputBuffer);
  last_retrieved = 0;
  
  //Create new buffer and copy inputBuffer into it
  buffer = new unsigned short[length+1];
  for(unsigned int cnt=0; cnt<length; cnt++) {
    const unsigned int t = inputBuffer[cnt];
    if(t > 0xFFFF) {
      std::cerr << "Unfortunately there is no current support for Unicode characters represented by more than 2 bytes. Unexpected behaviour is to be expected :)." << std::endl;
    }//if
    buffer[cnt] = t;
  }//for
  buffer[length]=0;
}//constructor

LexerDOMStringStream::~LexerDOMStringStream()
{
  delete []buffer;
}//destructor

int LexerDOMStringStream::read(unsigned char *ptr, unsigned int numBytes)
{
  if(position == length) {
    last_retrieved = 0;
    return 0;
  }//if

  unsigned short *inputBuffer = (unsigned short *)ptr;

  //Note: numBytes is in terms of bytes, not Unicode characters
  numBytes /= sizeof(unsigned short);
  
  //Figure out how many characters to read
  int towrite = get_min(numBytes,length - position);

  //Copy the characters into ptr
  int outpos = 0;
  for(unsigned int cnt=position; cnt<towrite+position; cnt++) {
    inputBuffer[outpos++] = buffer[cnt];
  }//for

  //Update markers
  last_retrieved = towrite * sizeof(unsigned short);
  position += towrite;

  return towrite;
}//read

bool LexerDOMStringStream::eof() const
{
  return (position == length);
}//eof
