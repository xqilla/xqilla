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

#ifndef _DATATYPETESTER_HPP
#define _DATATYPETESTER_HPP

#define assertEquals(actual, expected)\
        this->assertEqualsInternal(actual, expected, __FILE__, __LINE__)
#define assertObjectEquals(actual, expected, context)\
        this->assertObjectEqualsInternal(actual, expected, context, __FILE__, __LINE__)
#define assertCondition(condition)\
        this->assertConditionInternal(condition, __FILE__, __LINE__)

#include <xercesc/util/XMLString.hpp>
#include <xqilla/items/AnyAtomicType.hpp>

class DynamicContext;
class XPath2MemoryManager;

/**
 * This class is the parent of all datatype testers.  
 *
 * To add a test for a datatype, create a class called <MyDatatype>Tester that 
 * extends this class, implement init(), run() and wrapUp() and then add your
 * tester to the tester vector in test-datatypes.cpp. 
 *
 * Then, just type make, and run test-datatypes.
 */
class DatatypeTester {
  public: 
    // init your test.  By default, it will print out a header with the name
    // of the testcase
    virtual void init();

    // run your tests.
    virtual void run(const DynamicContext* context) = 0;

    // wrap up. By default, prints an end of line
    virtual void wrapUp();

    // called from the assert functions. By default, output a '.' when a test 
    // passes, and outputs the message to the screen if it failed.
    virtual void testPassed() const;
    virtual void testFailed(const char* message) const;

    // returns the memory manager
    XPath2MemoryManager* getMemoryManager() const;

    // returns the name of this testcase
    char* getName() const;
    
  protected:
    // protected constructor
    DatatypeTester(XPath2MemoryManager* memMgr, char* name);
    void assertEqualsInternal(const XMLCh* actual, const XMLCh* expected, const char *file, int line);
    void assertObjectEqualsInternal(const AnyAtomicType::Ptr &actual, const AnyAtomicType::Ptr &expected,  const DynamicContext* context, const char *file, int line);
    void assertConditionInternal(bool condition, const char *file, int line);
    
  private:
    XPath2MemoryManager* _memMgr;
    char* _name;
    
};


#endif //_DATATYPETESTER_HPP
