#! /bin/bash

if test -z "$srcdir"; then
    srcdir=`dirname $0`/..
fi

abssrcdir=`cd $srcdir && pwd`
if test $abssrcdir/tests/xqts/xqts_testsuite/xqts.zip -nt $abssrcdir/tests/xqts/xqts_testsuite/.zip_timestamp; then
    echo Unzipping XQuery Test Suite
    touch $abssrcdir/tests/xqts/xqts_testsuite/.zip_timestamp
    unzip -q $abssrcdir/tests/xqts/xqts_testsuite/xqts.zip -d $abssrcdir/tests/xqts/xqts_testsuite/
fi
./xqtsRunner -e $abssrcdir/tests/xqts/xqts_testsuite/errors.xml -E xqts-latest-errors.xml $abssrcdir/tests/xqts/xqts_testsuite/ 2>xqts-latest-errors
