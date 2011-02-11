/*
 * Copyright (c) 2001, 2008,
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004, 2010,
 *     Oracle and/or its affiliates. All rights reserved.
 * Copyright (c) 2010,
 *     John Snelson. All rights reserved.
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
 */

#ifndef _STATICTYPE_HPP
#define _STATICTYPE_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/items/AnyAtomicType.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/schema/SequenceType.hpp>

#include <xercesc/framework/XMLBuffer.hpp>
#include <xercesc/util/XMemory.hpp>

struct XQILLA_API TypeFlags
{
  /**
   * Flags that determine what item types are returned from an expression
   */
  enum Enum {
    DOCUMENT            = 0x00000001,
    ELEMENT             = 0x00000002,
    ATTRIBUTE           = 0x00000004,
    TEXT                = 0x00000008,
    PI                  = 0x00000010,
    COMMENT             = 0x00000020,
    NAMESPACE           = 0x00000040,

    ANY_URI             = 0x00000100,
    BASE_64_BINARY      = 0x00000200,
    BOOLEAN             = 0x00000400,
    DATE                = 0x00000800,
    DATE_TIME           = 0x00001000,
    DAY_TIME_DURATION   = 0x00002000,
    DECIMAL             = 0x00004000,
    DOUBLE              = 0x00008000,
    DURATION            = 0x00010000,
    FLOAT               = 0x00020000,
    G_DAY               = 0x00040000,
    G_MONTH             = 0x00080000,
    G_MONTH_DAY         = 0x00100000,
    G_YEAR              = 0x00200000,
    G_YEAR_MONTH        = 0x00400000,
    HEX_BINARY          = 0x00800000,
    NOTATION            = 0x01000000,
    QNAME               = 0x02000000,
    STRING              = 0x04000000,
    TIME                = 0x08000000,
    UNTYPED_ATOMIC      = 0x10000000,
    YEAR_MONTH_DURATION = 0x20000000,

    FUNCTION            = 0x40000000,

    NODE                = (DOCUMENT | ELEMENT | ATTRIBUTE | TEXT | PI | COMMENT |
                           NAMESPACE),

    NUMERIC             = (DECIMAL | FLOAT | DOUBLE),

    TIMEZONE            = (DATE | DATE_TIME | G_DAY | G_MONTH | G_MONTH_DAY |
                           G_YEAR | G_YEAR_MONTH | TIME),

    TYPED_ATOMIC        = (NUMERIC | TIMEZONE | ANY_URI | BASE_64_BINARY |
                           BOOLEAN | DAY_TIME_DURATION | DURATION | HEX_BINARY |
                           NOTATION | QNAME | STRING | YEAR_MONTH_DURATION),

    ANY_ATOMIC_TYPE     = (TYPED_ATOMIC | UNTYPED_ATOMIC),

    ITEM                = (NODE | ANY_ATOMIC_TYPE | FUNCTION),

    EMPTY               = 0
  };
};

XQILLA_API TypeFlags::Enum operator|(TypeFlags::Enum a, TypeFlags::Enum b);
XQILLA_API TypeFlags::Enum operator&(TypeFlags::Enum a, TypeFlags::Enum b);

/**
 * Class that represents the static type of an expression
 */
class XQILLA_API StaticType : public XERCES_CPP_NAMESPACE_QUALIFIER XMemory {
public:
  static const StaticType EMPTY;

  static const StaticType ITEM;
  static const StaticType ITEM_STAR;
  static const StaticType FUNCTION;

  static const StaticType ANY_ATOMIC_TYPE;
  static const StaticType UNTYPED_ATOMIC;
  static const StaticType STRING;
  static const StaticType DECIMAL;
  static const StaticType DECIMAL_QUESTION;
  static const StaticType FLOAT;
  static const StaticType FLOAT_QUESTION;
  static const StaticType DOUBLE;
  static const StaticType DOUBLE_QUESTION;
  static const StaticType QNAME;
  static const StaticType QNAME_QUESTION;
  static const StaticType BOOLEAN;
  static const StaticType BOOLEAN_QUESTION;
  static const StaticType DAY_TIME_DURATION;

  static const StaticType NODE;
  static const StaticType NODE_QUESTION;
  static const StaticType NODE_STAR;
  static const StaticType DOCUMENT;
  static const StaticType DOCUMENT_QUESTION;
  static const StaticType DOCUMENT_STAR;
  static const StaticType ELEMENT;
  static const StaticType ATTRIBUTE;
  static const StaticType TEXT;
  static const StaticType TEXT_QUESTION;
  static const StaticType TEXT_STAR;
  static const StaticType PI;
  static const StaticType PI_STAR;
  static const StaticType COMMENT;
  static const StaticType COMMENT_STAR;
  static const StaticType NAMESPACE;

  typedef std::vector<const ItemType*, XQillaAllocator<const ItemType*> > ItemTypes;

  static const unsigned int UNLIMITED;

  /// Constructor for an empty type
  StaticType(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *mm);
  // Constructor for single type
  StaticType(const ItemType *type, XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *mm);
  // Constructor for a range of types
  StaticType(const ItemType *type, unsigned int min, unsigned int max, XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *mm);
  // Constructor from a SequenceType
  StaticType(const SequenceType *type, XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *mm);

  StaticType &operator=(const StaticType &o);
  StaticType &operator=(const ItemType *type);
  StaticType &operator=(const SequenceType *type);
  ~StaticType();

  void release();
  void clear();

  void typeUnion(const StaticType &st);
  void typeConcat(const StaticType &st);
  bool typeIntersect(TypeFlags::Enum st);
  void typeIntersect(const StaticType &st);
  bool typeExcept(TypeFlags::Enum st);

  bool substitute(TypeFlags::Enum from, const StaticType &to);
  bool substitute(TypeFlags::Enum from, const ItemType *to);

  void multiply(unsigned int min, unsigned int max);
  void setCardinality(unsigned int min, unsigned int max);

  bool containsType(const StaticType &type) const;
  bool containsType(TypeFlags::Enum flags) const;
  bool isType(TypeFlags::Enum type) const;

  const ItemTypes &getTypes() const { return types_; }
  unsigned int getMin() const { return min_; }
  unsigned int getMax() const { return max_; }

  void typeToBuf(XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer &buf) const;

private:
  StaticType(const StaticType &o); // No copy constructor

  ItemTypes types_;
  unsigned int min_;
  unsigned int max_;
};

#endif
