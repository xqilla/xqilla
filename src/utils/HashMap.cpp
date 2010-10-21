/*
 * Copyright (c) 2010
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

#include "../config/xqilla_config.h"

#include <xqilla/utils/HashMap.hpp>

#include <algorithm>

static const int numberOfPrimes_ = 28;
static const size_t primes_[numberOfPrimes_] = {
  53, 97, 193, 389, 769, 1543, 3079, 6151, 12289, 24593,
  49157, 98317, 196613, 393241, 786433, 1572869, 3145739,
  6291469, 12582917, 25165843, 50331653, 100663319, 201326611,
  402653189, 805306457, 1610612741, 3221225473, 4294967291
};

size_t Primes::next(size_t n)
{
  return *std::lower_bound(primes_, primes_ + numberOfPrimes_ - 1, n);
}

