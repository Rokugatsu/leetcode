/**
 * @file reverse_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "reverse.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <iostream>
namespace leetcode {
TEST(reverse, case_0) {
  int ret = reverse(-123);
  std::cout << ret;
}
} // namespace leetcode
