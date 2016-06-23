/*
 * ALG
 * --------------------------------
 *
 * Copyright 2016 Kai Zhao <loverszhao@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * This file contains the digit_count function
 */


#ifndef _ALG_SRC_DIGIT_COUNT_H_
#define _ALG_SRC_DIGIT_COUNT_H_

#include <cstdlib>

size_t DigitCount(int num);
size_t DigitCount32Integer(int num);
size_t DigitCount64Integer(int num);

template <typename T>
size_t DigitCountSimply(T num) {
  size_t digit_count = 0;

  T bit = 1;
  while (bit != 0) {
    if (num & bit) {
      digit_count ++;
    }
    bit <<= 1;
  }

  return digit_count;
}

#endif
