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

#include "../config/xqilla_config.h"
#include <xqilla/exceptions/DSLException.hpp>

#include <xqilla/exceptions/XQException.hpp>

#include <xercesc/util/XMLString.hpp>
#include <xqilla/utils/XStr.hpp>
#include <iostream>

bool DSLException::_debug = false;

DSLException::DSLException(const XMLCh* const type, const XMLCh* const functionName, const XMLCh* const reason, const char *file, int line) {

	_type = XERCES_CPP_NAMESPACE_QUALIFIER XMLString::replicate(type);
	_function = XERCES_CPP_NAMESPACE_QUALIFIER XMLString::replicate(functionName);
	_error = XERCES_CPP_NAMESPACE_QUALIFIER XMLString::replicate(reason);
	_file = file;
	_line = line;
}

//This is very necessary due to copying of class which occurs when exception is thrown
DSLException::DSLException(const DSLException &other) {

	_type = XERCES_CPP_NAMESPACE_QUALIFIER XMLString::replicate(other._type);
	_function = XERCES_CPP_NAMESPACE_QUALIFIER XMLString::replicate(other._function);
	_error = XERCES_CPP_NAMESPACE_QUALIFIER XMLString::replicate(other._error);
	_file = other._file;
	_line = other._line;
}

DSLException::~DSLException() {

  if(_debug) {
    printDebug( X("Exception thrown") );
  }

	delete _type;
	delete _function;
	delete _error;
}

void DSLException::printDebug(const XMLCh* const context) const {

	char *context_t = XERCES_CPP_NAMESPACE_QUALIFIER XMLString::transcode(context);
	char *type_t = XERCES_CPP_NAMESPACE_QUALIFIER XMLString::transcode(_type);
	char *function_t = XERCES_CPP_NAMESPACE_QUALIFIER XMLString::transcode(_function);
	char *error_t = XERCES_CPP_NAMESPACE_QUALIFIER XMLString::transcode(_error);

  std::cerr << std::endl;
  std::cerr << "===================" << std::endl;
  std::cerr << context_t << std::endl << std::endl;
  std::cerr << "Type: " << type_t << std::endl;
  std::cerr << "Function: " << function_t << std::endl;
  std::cerr << "Reason: " << error_t << std::endl;
  std::cerr << "File: " << _file << std::endl;
  std::cerr << "Line number: " << _line << std::endl;
  std::cerr << "===================" << std::endl;

	delete context_t;
	delete type_t;
	delete function_t;
	delete error_t;
}

const XMLCh* DSLException::getError(void) const {

  return _error;
}

void DSLException::setDebug(bool flag) {

  _debug = flag;
}
