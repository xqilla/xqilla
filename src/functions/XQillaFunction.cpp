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
#include "XQillaFunction.hpp"

#include <xercesc/validators/schema/SchemaSymbols.hpp>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

// xqilla
const XMLCh XQillaFunction::XQillaPrefix[] = {
	chLatin_x,
	chLatin_q,
	chLatin_i,
	chLatin_l,
	chLatin_l,
	chLatin_a,
	chNull
};

/* http://xqilla.sourceforge.net/Functions */
const XMLCh XQillaFunction::XMLChFunctionURI[] = {
	chLatin_h,
	chLatin_t,
	chLatin_t,
	chLatin_p,
	chColon,
	chForwardSlash,
	chForwardSlash,
	chLatin_x,
	chLatin_q,
	chLatin_i,
	chLatin_l,
	chLatin_l,
	chLatin_a,
	chPeriod,
	chLatin_s,
	chLatin_o,
	chLatin_u,
	chLatin_r,
	chLatin_c,
	chLatin_e,
	chLatin_f,
	chLatin_o,
	chLatin_r,
	chLatin_g,
	chLatin_e,
	chPeriod,
	chLatin_n,
	chLatin_e,
	chLatin_t,
	chForwardSlash,
	chLatin_F,
	chLatin_u,
	chLatin_n,
	chLatin_c,
	chLatin_t,
	chLatin_i,
	chLatin_o,
	chLatin_n,
	chLatin_s,
	chNull
};

XQillaFunction::XQillaFunction(const XMLCh* name, unsigned int argsFrom, unsigned int argsTo, const char* paramDecl, const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name, argsFrom, argsTo, paramDecl, args, memMgr)
{
	_fURI = XMLChFunctionURI;
}

