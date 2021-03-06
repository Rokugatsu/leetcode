/**
 * @file middle_node.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-20
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "middle_node.h"

namespace leetcode {
ListNode *middleNode(ListNode *head) {
  ListNode *fast = head;
  ListNode *slow = head;
  while (fast && fast->next)
  {
      fast = fast->next;
      fast = fast->next;
      slow = slow->next;
  }
  return slow;
}
} // namespace leetcode