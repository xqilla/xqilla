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

#ifdef _MSC_VER
#pragma warning(disable: 4786)
#endif

#include <sys/time.h>
#include <iostream>
#include <vector>

#include <xercesc/framework/URLInputSource.hpp>
#include <xercesc/util/XMLEntityResolver.hpp>
#include <xercesc/framework/MemBufFormatTarget.hpp>
#include <xercesc/dom/DOMException.hpp>

#include <xqilla/xqilla-simple.hpp>
#include <xqilla/context/VariableStore.hpp>
#include <xqilla/context/ModuleResolver.hpp>
#include <xqilla/context/URIResolver.hpp>
#include <xqilla/functions/FunctionConstructor.hpp>
#include <xqilla/utils/XQillaPlatformUtils.hpp>
#include <xqilla/xerces/XercesConfiguration.hpp>
#include <xqilla/fastxdm/FastXDMConfiguration.hpp>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif
using namespace std;

#define MSECS_IN_SECS 1000000

unsigned long getTime()
{
  struct timeval timev;
  gettimeofday(&timev, 0);

  return (timev.tv_sec * MSECS_IN_SECS) + timev.tv_usec;
}

struct Query {
  Query(const char *f)
    : file(f), start(0), stop(0) {}

  string file;
  unsigned long start;
  unsigned long stop;
};

int runQuery(XQilla &xqilla, Query &query, XQillaConfiguration *conf)
{
  try {
    query.start = getTime();

    Janitor<DynamicContext> context(xqilla.createContext(XQilla::XQUERY, conf));

//     // Preload the document
//     Sequence seq = context->resolveDocument(X("auction.xml"), 0);
//     query.start = getTime();

    Janitor<XQQuery> pParsedQuery(xqilla.parseFromURI(X(query.file.c_str()), context.get(), XQilla::NO_ADOPT_CONTEXT));

    Result result = pParsedQuery->execute(context.get());
    Item::Ptr item;
    while((item = result->next(context.get())).notNull()) {
    }

    query.stop = getTime();
  }
  catch(XQException& e) {
    cerr << UTF8(e.getError()) << endl;
    cerr << "at " << UTF8(e.getXQueryFile()) << ":" << e.getXQueryLine() << ":" << e.getXQueryColumn() << endl;
    cerr << "at " << e.getCppFile() << ":" << e.getCppLine() << endl;
    return 1;
  }
  catch(DOMException &de) {
    cerr << "DOMException: " << UTF8(de.getMessage()) << endl;
    return 1;
  }
  catch(...) {
    cerr << "[Unknown exception]";
    return 1;
  }

  return 0;
}

void usage(const char *progname)
{
  const char *name = progname;
  while(*progname != 0) {
    if(*progname == '/' || *progname == '\\') {
      ++progname;
      name = progname;
    } else {
      ++progname;
    }
  }

  cout << "Usage: " << name << " [options] queryFile [queryFile...]" << endl << endl;
  cout << "-h             : Show this display" << endl;
  cerr << "-x             : Use the Xerces-C data model (default is the FastXDM)" << endl;
}

int main(int argc, char *argv[])
{
  vector<Query> queries;

  XercesConfiguration xercesConf;
  FastXDMConfiguration fastConf;
  XQillaConfiguration *conf = &fastConf;

  for(int i = 1; i < argc; ++i) {
    if(*argv[i] == '-' && argv[i][2] == '\0' ){

      switch(argv[i][1]) {
      case 'h': {
        usage(argv[0]);
        return 0;
      }
      case 'x': {
        conf = &xercesConf;
        break;
      }
      default: {
        cout << "Unknown option: " << argv[i] << endl;
        usage(argv[0]);
        return 1;
      }
      }
    }
    else {
      queries.push_back(argv[i]);
    }
  }

  if(queries.empty()) {
    cout << "No query files specified!" << endl;
    usage(argv[0]);
    return 1;
  }

  XQilla xqilla;

  int err;
  for(vector<Query>::iterator i = queries.begin();
      i != queries.end(); ++i) {
    cout << i->file << ": " << flush;

    err = runQuery(xqilla, *i, conf);
    if(err != 0) return err;

    cout << ((double)(i->stop - i->start) / MSECS_IN_SECS) << endl;
  }

  return 0;
}

