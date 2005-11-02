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
 * Please see the file LICENSE for more information.
 *
 * $Id$
 */

#ifndef _UTF8STR_HPP
#define _UTF8STR_HPP

#include <xqilla/framework/Pathan.hpp>
#include <xercesc/util/XercesDefs.hpp>

#include <xercesc/util/XMLUTF8Transcoder.hpp>

class PATHAN_EXPORT UTF8Str
{
public :
    UTF8Str(const XMLCh* const toTranscode);
    ~UTF8Str()
    {
        delete [] fUTF8Form;
    }

    const char* UTF8Form() const
    {
        return (char*)fUTF8Form;
    }

private :
    XMLByte *fUTF8Form;
};

#define UTF8(str) UTF8Str(str).UTF8Form()

#endif
