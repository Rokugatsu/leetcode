/**
 * @file reverse_string.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-22
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "reverse_string.h"
namespace leetcode {
void reverseString(std::vector<char> &s) {
  size_t index{0};
  size_t rIndex{s.size() - 1};
  size_t mid{s.size() / 2};
  char temp;
  while (index < mid) {
    temp = s[index];
    s[index] = s[rIndex];
    s[rIndex] = temp;
    ++index;
    --rIndex;
  }
}
} // namespace leetcode
