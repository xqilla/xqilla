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

//System includes
#include <iostream>
#include <vector>

//XQilla includes
#include <xqilla/xqilla-simple.hpp>

//Local includes
#include "ATAnyURITester.hpp"
#include "ATBase64BinaryTester.hpp"
#include "ATBooleanTester.hpp"
#include "ATDateTester.hpp"
#include "ATDateTimeTester.hpp"
#include "ATDecimalTester.hpp"
#include "ATDoubleTester.hpp"
#include "ATDurationTester.hpp"
#include "ATFloatTester.hpp"
#include "ATGDayTester.hpp"
#include "ATGMonthTester.hpp"
#include "ATGMonthDayTester.hpp"
#include "ATGYearMonthTester.hpp"
#include "ATGYearTester.hpp"
#include "ATHexBinaryTester.hpp"
#include "ATQNameTester.hpp"
#include "ATStringTester.hpp"
#include "ATTimeTester.hpp"
#include "ATUntypedAtomicTester.hpp"
#include "CastAsTester.hpp"
#include "TypePromotionTester.hpp"

using namespace std;

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

int main(int argc, char *argv[])
{
  ///////////////////////////////////////////////////////////////////
  // initialisation                                                //
  ///////////////////////////////////////////////////////////////////
  int ret = 0;

  XQilla xqilla;
  {
    AutoDelete<DynamicContext> context(xqilla.createContext());

    /////////////////////////////////////////////////////////////////
    // Create test vector                                          //
    /////////////////////////////////////////////////////////////////
    vector<DatatypeTester*> tests;

    tests.push_back(new ATStringTester());
    tests.push_back(new ATAnyURITester());
    tests.push_back(new ATBase64BinaryTester());
    tests.push_back(new ATBooleanTester());
    tests.push_back(new ATDateTester());
    tests.push_back(new ATDateTimeTester());
    tests.push_back(new ATDecimalTester());
    tests.push_back(new ATDoubleTester());
    tests.push_back(new ATDurationTester());
    tests.push_back(new ATFloatTester());
    tests.push_back(new ATGDayTester());
    tests.push_back(new ATGMonthTester());
    tests.push_back(new ATGMonthDayTester());
    tests.push_back(new ATGYearMonthTester());
    tests.push_back(new ATGYearTester());
    tests.push_back(new ATHexBinaryTester());
    tests.push_back(new ATQNameTester());
    tests.push_back(new ATTimeTester());
    tests.push_back(new ATUntypedAtomicTester());
    tests.push_back(new CastAsTester());
    tests.push_back(new TypePromotionTester());

    //////////////////////////////////////////////////////////////////
    // test!                                                        //
    //////////////////////////////////////////////////////////////////
    for(vector<DatatypeTester*>::iterator test = tests.begin(); test != tests.end(); test++) {
      (*test)->init();
    
      try {
        (*test)->run(context);
      } catch(const XQException &e) {
        cerr << endl << "XQException: " << UTF8(e.getError()) << endl;
        ret = 1;
      } catch( ... ) {
        cerr << "Caught unknown exception!"<<endl;
        ret = 1;
      }
    
      (*test)->wrapUp();
    }
  }

  //////////////////////////////////////////////////////////////////
  // clean up and exit                                            //
  //////////////////////////////////////////////////////////////////

  return ret;
}
