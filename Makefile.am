AUTOMAKE_OPTIONS = foreign dist-zip
SUBDIRS = include

INCLUDES = -I $(top_srcdir)/include/ -I $(xerces_include) -I $(top_srcdir)/src/lexer/
LDFLAGS = -L$(xerces_lib)
LDADD = libxqilla.la -lxerces-c

TESTS = testDatatypes

bin_PROGRAMS = xqilla
noinst_PROGRAMS = basicXQillaUsage testDatatypes

lib_LTLIBRARIES = libxqilla.la

libxqilla_la_SOURCES = \
src/framework/ReferenceCounted.cpp \
src/framework/BaseMemoryManager.cpp \
src/framework/ProxyMemoryManager.cpp \
src/framework/StringPool.cpp \
src/framework/XPath2MemoryManagerImpl.cpp \
src/context/impl/CollationImpl.cpp \
src/context/impl/UCANormalizer1.cpp \
src/context/impl/UCANormalizer2.cpp \
src/context/impl/UCANormalizer.cpp \
src/context/impl/UCANormalizer.hpp \
src/context/impl/CodepointCollation.cpp \
src/context/impl/VarStoreImpl.hpp \
src/context/impl/VarStoreImpl.cpp \
src/context/impl/VarTypeStoreImpl.hpp \
src/context/impl/VarTypeStoreImpl.cpp \
src/context/impl/VarHashEntryImpl.cpp \
src/context/impl/XQContextImpl.cpp \
src/context/impl/XQDynamicContextImpl.cpp \
src/context/impl/ItemFactoryImpl.cpp \
src/context/impl/XQRemoteDebugger.cpp \
src/ast/XQCastableAs.cpp \
src/ast/XQCastAs.cpp \
src/ast/XQContextItem.cpp \
src/ast/XQFunction.cpp \
src/ast/XQIf.cpp \
src/ast/ASTNodeImpl.cpp \
src/ast/XQInstanceOf.cpp \
src/ast/XQLiteral.cpp \
src/ast/XQNav.cpp \
src/ast/XQOperator.cpp \
src/ast/XQParenthesizedExpr.cpp \
src/ast/XQSequence.cpp \
src/ast/XQStep.cpp \
src/ast/XQTreatAs.cpp \
src/ast/XQVariable.cpp \
src/ast/StaticResolutionContext.cpp \
src/ast/AggregateFunction.cpp \
src/ast/ConstantFoldingFunction.cpp \
src/ast/NumericFunction.cpp \
src/ast/XQDebugHook.cpp \
src/ast/XQDOMConstructor.cpp \
src/ast/XQFLWOR.cpp \
src/ast/XQFunctionCall.cpp \
src/ast/XQGlobalVariable.cpp \
src/ast/XQOrderingChange.cpp \
src/ast/XQQuantified.cpp \
src/ast/XQValidate.cpp \
src/ast/XQTypeswitch.cpp \
src/ast/XQVariableBinding.cpp \
src/dom-api/impl/XQillaBuilderImpl.cpp \
src/dom-api/impl/XQillaBuilderImpl.hpp \
src/dom-api/impl/XQillaDocumentImpl.cpp \
src/dom-api/impl/XQillaDocumentImpl.hpp \
src/dom-api/impl/XQillaExpressionImpl.cpp \
src/dom-api/impl/XQillaNSResolverImpl.cpp \
src/dom-api/impl/XQillaXMLGrammarPoolImpl.cpp \
src/dom-api/impl/XQillaXMLGrammarPoolImpl.hpp \
src/dom-api/impl/XPathNamespaceImpl.cpp \
src/dom-api/impl/XPathNamespaceImpl.hpp \
src/dom-api/XQillaImplementation.cpp \
src/dom-api/XPath2NodeSerializer.cpp \
src/dom-api/XPath2Result.cpp \
src/dom-api/XQScopedNamespace.cpp \
src/simple-api/XQilla.cpp \
src/simple-api/XQilla2.cpp \
src/simple-api/XQQuery.cpp \
src/utils/UTF8Str.cpp \
src/utils/XMLChCompare.cpp \
src/utils/XStr.cpp \
src/utils/ContextUtils.cpp \
src/utils/Date.cpp \
src/utils/Date.hpp \
src/utils/DateUtils.cpp \
src/utils/DateUtils.hpp \
src/utils/NumUtils.cpp \
src/utils/XQillaPlatformUtils.cpp \
src/utils/PrintAST.cpp \
src/utils/XPath2NSUtils.cpp \
src/utils/XPath2Utils.cpp \
src/exceptions/XQillaException.cpp \
src/exceptions/XQException.cpp \
src/exceptions/InvalidLexicalSpaceException.hpp \
src/exceptions/MiscException.hpp \
src/functions/FuncFactory.cpp \
src/functions/FuncFactoryTemplate.hpp \
src/functions/FunctionLookupImpl.cpp \
src/functions/FunctionLookupImpl.hpp \
src/functions/FunctionAbs.cpp \
src/functions/FunctionAvg.cpp \
src/functions/FunctionBaseURI.cpp \
src/functions/FunctionBoolean.cpp \
src/functions/FunctionCeiling.cpp \
src/functions/FunctionCodepointEqual.cpp \
src/functions/FunctionCodepointsToString.cpp \
src/functions/FunctionCollection.cpp \
src/functions/FunctionCompare.cpp \
src/functions/FunctionConcat.cpp \
src/functions/FunctionConstructor.cpp \
src/functions/FunctionContains.cpp \
src/functions/FunctionCount.cpp \
src/functions/FunctionCurrentDate.cpp \
src/functions/FunctionCurrentDateTime.cpp \
src/functions/FunctionCurrentTime.cpp \
src/functions/FunctionData.cpp \
src/functions/FunctionDateTime.cpp \
src/functions/FunctionDeepEqual.cpp \
src/functions/FunctionDefaultCollation.cpp \
src/functions/FunctionDistinctValues.cpp \
src/functions/FunctionDocAvailable.cpp \
src/functions/FunctionDoc.cpp \
src/functions/FunctionDocumentURI.cpp \
src/functions/FunctionEmpty.cpp \
src/functions/FunctionEndsWith.cpp \
src/functions/FunctionError.cpp \
src/functions/FunctionEscapeURI.cpp \
src/functions/FunctionExactlyOne.cpp \
src/functions/FunctionExists.cpp \
src/functions/FunctionFalse.cpp \
src/functions/FunctionFloor.cpp \
src/functions/FunctionId.cpp \
src/functions/FunctionIdref.cpp \
src/functions/FunctionImplicitTimezone.cpp \
src/functions/FunctionIndexOf.cpp \
src/functions/FunctionInScopePrefixes.cpp \
src/functions/FunctionInsertBefore.cpp \
src/functions/FunctionLang.cpp \
src/functions/FunctionLast.cpp \
src/functions/FunctionLocalname.cpp \
src/functions/FunctionLocalNameFromQName.cpp \
src/functions/FunctionLowerCase.cpp \
src/functions/FunctionMatches.cpp \
src/functions/FunctionMax.cpp \
src/functions/FunctionMin.cpp \
src/functions/FunctionName.cpp \
src/functions/FunctionNamespaceUri.cpp \
src/functions/FunctionNamespaceURIForPrefix.cpp \
src/functions/FunctionNamespaceURIFromQName.cpp \
src/functions/FunctionNilled.cpp \
src/functions/FunctionNodeName.cpp \
src/functions/FunctionNormalizeSpace.cpp \
src/functions/FunctionNormalizeUnicode.cpp \
src/functions/FunctionNot.cpp \
src/functions/FunctionNumber.cpp \
src/functions/FunctionOneOrMore.cpp \
src/functions/FunctionPosition.cpp \
src/functions/FunctionPrefixFromQName.cpp \
src/functions/FunctionQName.cpp \
src/functions/FunctionRemove.cpp \
src/functions/FunctionReplace.cpp \
src/functions/FunctionResolveQName.cpp \
src/functions/FunctionResolveURI.cpp \
src/functions/FunctionReverse.cpp \
src/functions/FunctionRoot.cpp \
src/functions/FunctionRound.cpp \
src/functions/FunctionRoundHalfToEven.cpp \
src/functions/FunctionStartsWith.cpp \
src/functions/FunctionStaticBaseURI.cpp \
src/functions/FunctionString.cpp \
src/functions/FunctionStringJoin.cpp \
src/functions/FunctionStringLength.cpp \
src/functions/FunctionStringToCodepoints.cpp \
src/functions/FunctionSubsequence.cpp \
src/functions/FunctionSubstringAfter.cpp \
src/functions/FunctionSubstringBefore.cpp \
src/functions/FunctionSubstring.cpp \
src/functions/FunctionSum.cpp \
src/functions/FunctionTokenize.cpp \
src/functions/FunctionTrace.cpp \
src/functions/FunctionTranslate.cpp \
src/functions/FunctionTrue.cpp \
src/functions/FunctionUnordered.cpp \
src/functions/FunctionUpperCase.cpp \
src/functions/FunctionZeroOrOne.cpp \
src/functions/FunctionAdjustDateTimeToTimezone.cpp \
src/functions/FunctionAdjustDateToTimezone.cpp \
src/functions/FunctionAdjustTimeToTimezone.cpp \
src/functions/FunctionDayFromDate.cpp \
src/functions/FunctionDayFromDateTime.cpp \
src/functions/FunctionDaysFromDuration.cpp \
src/functions/FunctionHoursFromDateTime.cpp \
src/functions/FunctionHoursFromDuration.cpp \
src/functions/FunctionHoursFromTime.cpp \
src/functions/FunctionMinutesFromDateTime.cpp \
src/functions/FunctionMinutesFromDuration.cpp \
src/functions/FunctionMinutesFromTime.cpp \
src/functions/FunctionMonthFromDate.cpp \
src/functions/FunctionMonthFromDateTime.cpp \
src/functions/FunctionMonthsFromDuration.cpp \
src/functions/FunctionSecondsFromDateTime.cpp \
src/functions/FunctionSecondsFromDuration.cpp \
src/functions/FunctionSecondsFromTime.cpp \
src/functions/FunctionTimezoneFromDate.cpp \
src/functions/FunctionTimezoneFromDateTime.cpp \
src/functions/FunctionTimezoneFromTime.cpp \
src/functions/FunctionYearFromDate.cpp \
src/functions/FunctionYearFromDateTime.cpp \
src/functions/FunctionYearsFromDuration.cpp \
src/functions/XQUserFunction.cpp \
src/items/impl/ATAnySimpleTypeImpl.cpp \
src/items/impl/ATAnySimpleTypeImpl.hpp \
src/items/impl/ATAnyURIOrDerivedImpl.cpp \
src/items/impl/ATAnyURIOrDerivedImpl.hpp \
src/items/impl/ATBase64BinaryOrDerivedImpl.cpp \
src/items/impl/ATBase64BinaryOrDerivedImpl.hpp \
src/items/impl/ATBooleanOrDerivedImpl.cpp \
src/items/impl/ATDateOrDerivedImpl.cpp \
src/items/impl/ATDateOrDerivedImpl.hpp \
src/items/impl/ATDateTimeOrDerivedImpl.cpp \
src/items/impl/ATDateTimeOrDerivedImpl.hpp \
src/items/impl/ATDecimalOrDerivedImpl.cpp \
src/items/impl/ATDoubleOrDerivedImpl.cpp \
src/items/impl/ATDurationOrDerivedImpl.cpp \
src/items/impl/ATDurationOrDerivedImpl.hpp \
src/items/impl/ATFloatOrDerivedImpl.cpp \
src/items/impl/ATGDayOrDerivedImpl.cpp \
src/items/impl/ATGDayOrDerivedImpl.hpp \
src/items/impl/ATGMonthDayOrDerivedImpl.cpp \
src/items/impl/ATGMonthDayOrDerivedImpl.hpp \
src/items/impl/ATGMonthOrDerivedImpl.cpp \
src/items/impl/ATGMonthOrDerivedImpl.hpp \
src/items/impl/ATGYearMonthOrDerivedImpl.cpp \
src/items/impl/ATGYearMonthOrDerivedImpl.hpp \
src/items/impl/ATGYearOrDerivedImpl.cpp \
src/items/impl/ATGYearOrDerivedImpl.hpp \
src/items/impl/ATHexBinaryOrDerivedImpl.cpp \
src/items/impl/ATHexBinaryOrDerivedImpl.hpp \
src/items/impl/ATNotationOrDerivedImpl.cpp \
src/items/impl/ATNotationOrDerivedImpl.hpp \
src/items/impl/ATQNameOrDerivedImpl.cpp \
src/items/impl/ATStringOrDerivedImpl.cpp \
src/items/impl/ATStringOrDerivedImpl.hpp \
src/items/impl/ATTimeOrDerivedImpl.cpp \
src/items/impl/ATTimeOrDerivedImpl.hpp \
src/items/impl/ATUntypedAtomicImpl.cpp \
src/items/impl/ATUntypedAtomicImpl.hpp \
src/items/impl/NodeImpl.cpp \
src/items/DatatypeFactory.cpp \
src/items/DatatypeFactoryTemplate.hpp \
src/items/DatatypeLookup.cpp \
src/items/AnyAtomicTypeConstructor.cpp \
src/items/AnyAtomicType.cpp \
src/items/ATDurationOrDerived.cpp \
src/items/ATQNameConstructor.cpp \
src/items/ATUntypedAtomic.cpp \
src/items/DateOrTimeType.cpp \
src/items/Item.cpp \
src/items/Node.cpp \
src/items/Numeric.cpp \
src/items/Timezone.cpp \
src/parser/QName.cpp \
src/parser/XPath2ParserControl.hpp \
src/parser/XPath2Parser.cpp \
src/parser/XPath2Parser.hpp \
src/parser/Grammar.cpp \
src/parser/Grammar.hpp \
src/lexer/FlexLexer.hpp \
src/lexer/LexerDOMStringStream.cpp \
src/lexer/LexerDOMStringStream.hpp \
src/lexer/XPath2Lexer.cpp \
src/lexer/XPath2Lexer.hpp \
src/lexer/XPathFlexLexer.hpp \
src/lexer/FlexLexer.h \
src/lexer/Scanner.cpp \
src/lexer/Scanner.hpp \
src/mapm/mapm5sin.c \
src/mapm/mapm_add.c \
src/mapm/mapmasin.c \
src/mapm/mapmasn0.c \
src/mapm/mapmcbrt.c \
src/mapm/mapmcnst.c \
src/mapm/mapm_cpi.c \
src/mapm/m_apm.cpp \
src/mapm/mapm_div.c \
src/mapm/mapm_exp.c \
src/mapm/mapmfact.c \
src/mapm/mapm_fam.c \
src/mapm/mapm_fft.c \
src/mapm/mapm_flr.c \
src/mapm/mapmfmul.c \
src/mapm/mapm_fpf.c \
src/mapm/mapm_gcd.c \
src/mapm/mapmgues.c \
src/mapm/mapmhasn.c \
src/mapm/mapmhsin.c \
src/mapm/mapmipwr.c \
src/mapm/mapmistr.c \
src/mapm/m_apm_lc.h \
src/mapm/mapm_lg2.c \
src/mapm/mapm_lg3.c \
src/mapm/mapm_log.c \
src/mapm/mapm_mt.cpp \
src/mapm/mapm_mul.c \
src/mapm/mapm_pow.c \
src/mapm/mapmpwr2.c \
src/mapm/mapm_rcp.c \
src/mapm/mapm_rnd.c \
src/mapm/mapmrsin.c \
src/mapm/mapm_set.c \
src/mapm/mapm_sin.c \
src/mapm/mapmsqrt.c \
src/mapm/mapmstck.c \
src/mapm/mapmutil.c \
src/mapm/mapmutl2.c \
src/mapm/README \
src/axis/AncestorAxis.cpp \
src/axis/AncestorOrSelfAxis.cpp \
src/axis/AttributeAxis.cpp \
src/axis/Axis.cpp \
src/axis/ChildAxis.cpp \
src/axis/DescendantAxis.cpp \
src/axis/DescendantOrSelfAxis.cpp \
src/axis/FollowingAxis.cpp \
src/axis/FollowingSiblingAxis.cpp \
src/axis/NamespaceAxis.cpp \
src/axis/NodeTest.cpp \
src/axis/ParentAxis.cpp \
src/axis/PrecedingAxis.cpp \
src/axis/PrecedingSiblingAxis.cpp \
src/axis/SelfAxis.cpp \
src/operators/And.cpp \
src/operators/ArithmeticOperator.cpp \
src/operators/ComparisonOperator.cpp \
src/operators/Divide.cpp \
src/operators/Equals.cpp \
src/operators/Except.cpp \
src/operators/GeneralComp.cpp \
src/operators/GreaterThan.cpp \
src/operators/GreaterThanEqual.cpp \
src/operators/IntegerDivide.cpp \
src/operators/Intersect.cpp \
src/operators/LessThan.cpp \
src/operators/LessThanEqual.cpp \
src/operators/Minus.cpp \
src/operators/Mod.cpp \
src/operators/Multiply.cpp \
src/operators/NodeComparison.cpp \
src/operators/NotEquals.cpp \
src/operators/Or.cpp \
src/operators/OrderComparison.cpp \
src/operators/Plus.cpp \
src/operators/Range.cpp \
src/operators/TotalOrderComparison.cpp \
src/operators/TotalOrderComparison.hpp \
src/operators/UnaryMinus.cpp \
src/operators/Union.cpp \
src/schema/DocumentCacheImpl.cpp \
src/schema/SequenceType.cpp \
src/schema/AnyAtomicTypeDatatypeValidator.cpp \
src/runtime/AtomizeResult.cpp \
src/runtime/EmptyResult.cpp \
src/runtime/LazySequenceResult.cpp \
src/runtime/ResultBuffer.cpp \
src/runtime/ResultBufferImpl.cpp \
src/runtime/ResultBufferImpl.hpp \
src/runtime/Result.cpp \
src/runtime/ResultImpl.cpp \
src/runtime/SequenceResult.cpp \
src/runtime/SingleResult.cpp \
src/runtime/SortIntoDocumentOrderResult.cpp \
src/runtime/Sequence.cpp \
src/config/xqilla_config.h \
src/config/xqilla_config_win32.h

EXTRA_DIST = \
src/lexer/flex.skl \
src/lexer/xquery.l \
src/lexer/XPath2Lexer.lex \
src/parser/xquery.y \
src/parser/XPath2Parser.y \
LICENSE \
docs/Doxyfile.simpleapi \
docs/simple-api

xqilla_SOURCES = \
src/samples/xqilla/xqilla.cpp

basicXQillaUsage_SOURCES = \
src/samples/basic/basicXQillaUsage.cpp

testDatatypes_SOURCES = \
src/samples/datatypes/ATAnyURITester.cpp \
src/samples/datatypes/ATAnyURITester.hpp \
src/samples/datatypes/ATBase64BinaryTester.cpp \
src/samples/datatypes/ATBase64BinaryTester.hpp \
src/samples/datatypes/ATBooleanTester.cpp \
src/samples/datatypes/ATBooleanTester.hpp \
src/samples/datatypes/ATDateTester.cpp \
src/samples/datatypes/ATDateTester.hpp \
src/samples/datatypes/ATDateTimeTester.cpp \
src/samples/datatypes/ATDateTimeTester.hpp \
src/samples/datatypes/ATDecimalTester.cpp \
src/samples/datatypes/ATDecimalTester.hpp \
src/samples/datatypes/ATDoubleTester.cpp \
src/samples/datatypes/ATDoubleTester.hpp \
src/samples/datatypes/ATDurationTester.cpp \
src/samples/datatypes/ATDurationTester.hpp \
src/samples/datatypes/ATFloatTester.cpp \
src/samples/datatypes/ATFloatTester.hpp \
src/samples/datatypes/ATGDayTester.cpp \
src/samples/datatypes/ATGDayTester.hpp \
src/samples/datatypes/ATGMonthDayTester.cpp \
src/samples/datatypes/ATGMonthDayTester.hpp \
src/samples/datatypes/ATGMonthTester.cpp \
src/samples/datatypes/ATGMonthTester.hpp \
src/samples/datatypes/ATGYearMonthTester.cpp \
src/samples/datatypes/ATGYearMonthTester.hpp \
src/samples/datatypes/ATGYearTester.cpp \
src/samples/datatypes/ATGYearTester.hpp \
src/samples/datatypes/ATHexBinaryTester.cpp \
src/samples/datatypes/ATHexBinaryTester.hpp \
src/samples/datatypes/ATQNameTester.cpp \
src/samples/datatypes/ATQNameTester.hpp \
src/samples/datatypes/ATStringTester.cpp \
src/samples/datatypes/ATStringTester.hpp \
src/samples/datatypes/ATTimeTester.cpp \
src/samples/datatypes/ATTimeTester.hpp \
src/samples/datatypes/ATUntypedAtomicTester.cpp \
src/samples/datatypes/ATUntypedAtomicTester.hpp \
src/samples/datatypes/CastAsTester.cpp \
src/samples/datatypes/CastAsTester.hpp \
src/samples/datatypes/DatatypeTester.cpp \
src/samples/datatypes/DatatypeTester.hpp \
src/samples/datatypes/test-datatypes.cpp \
src/samples/datatypes/TypePromotionTester.cpp \
src/samples/datatypes/TypePromotionTester.hpp

XPLEXERFILE   = $(top_srcdir)/src/lexer/XPath2Lexer.cpp
XPLEXTEMPLATE   = $(top_srcdir)/src/lexer/XPath2Lexer.lex

XPPARSERFILE  = $(top_srcdir)/src/parser/XPath2Parser.y
XPPARSERCPP   = $(top_srcdir)/src/parser/XPath2Parser.cpp
XPPARSERHPP   = $(top_srcdir)/src/parser/XPath2Parser.hpp

XQLEXERFILE   = $(top_srcdir)/src/lexer/Scanner.cpp
XQLEXTEMPLATE   = $(top_srcdir)/src/lexer/xquery.l
XQLEXSKEL   = $(top_srcdir)/src/lexer/flex.skl

XQPARSERFILE  = $(top_srcdir)/src/parser/xquery.y
XQPARSERCPP   = $(top_srcdir)/src/parser/Grammar.cpp
XQPARSERHPP   = $(top_srcdir)/src/parser/Grammar.hpp

$(XPLEXERFILE) : $(XPLEXTEMPLATE)
	$(LEX) -BUs -Pxx -o$(XPLEXERFILE) $(XPLEXTEMPLATE) # This can take a long time
	${perl} -pi -e 's/istream/LexerDOMStringStream/g' $(XPLEXERFILE)
	${perl} -pi -e "s/yyin = \&cin/{\/\* Don't ever forget to declare yyin, or bad things will happen \*\/}/g" $(XPLEXERFILE) 
	${perl} -pi -e "s/\#include \<FlexLexer\.h\>/\#include \"XPath2Lexer\.hpp\"/g" $(XPLEXERFILE)
	${perl} -pi -e "s/\#include \<unistd\.h\>//g" $(XPLEXERFILE)
	${perl} -pi -e "s/yyout->write\(\(unsigned char \*\)  buf/yyout->write\(\(const char \*\)buf/g" $(XPLEXERFILE)
	${perl} -pi -e "s/delete yy_state_buf;/delete [] yy_state_buf; yy_flex_free\(yy_start_stack\);/g" $(XPLEXERFILE)

$(XPPARSERCPP) $(XPPARSERHPP): $(XPPARSERFILE)
	$(YACC) -d -v -p XPathyy  -o $(XPPARSERCPP) $(XPPARSERFILE)
	${perl} -pi -e "s/yyparse\(YYPARSE_PARAM_ARG\)/XQILLA_API yyparse(YYPARSE_PARAM_ARG)/g" $(XPPARSERCPP)
	${perl} -pi -e "s/int yydebug/int XQILLA_API yydebug/g" $(XPPARSERCPP)

$(XQLEXERFILE): $(XQLEXTEMPLATE) $(XQLEXSKEL)
	$(LEX) -BUs -S$(XQLEXSKEL) -o$(XQLEXERFILE) $(XQLEXTEMPLATE) # This can take a long time
	${perl} -pi -e "s/delete yy_state_buf;/delete [] yy_state_buf;/g" $(XQLEXERFILE)

$(XQPARSERCPP) $(XQPARSERHPP): $(XQPARSERFILE)
	$(YACC) -d -v -o $(XQPARSERCPP) $(XQPARSERFILE)

.PHONY: test docs

test: check

docs:
	$(MAKE) -C include docs

$(top_srcdir)/docs/simple-api: docs