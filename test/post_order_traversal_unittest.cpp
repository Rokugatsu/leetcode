/**
 * @file post_order_traversal_unittest.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-12
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "post_order_traversal.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"

namespace leetcode {
TEST(post_order_traversal, case_0) {
  TreeNode *root = new TreeNode{1};
  root->right = new TreeNode{2};
  root->left = nullptr;
  root->right->left = new TreeNode{3};
  std::vector<int> ret = postOrderTraversal(root);
  for (auto iter = ret.begin(); iter != ret.end(); iter++) {
    std::cout << *(iter) << std::endl;
  }
}

TEST(post_order_traversal, case_1) {
  TreeNode *root = new TreeNode{1};
  root->right = new TreeNode{2};
  root->left = nullptr;
  root->right->left = new TreeNode{3};
  std::vector<int> ret = postOrderTraversal2(root);
  for (auto iter = ret.begin(); iter != ret.end(); iter++) {
    std::cout << *(iter) << std::endl;
  }
}
} // namespace leetcode
