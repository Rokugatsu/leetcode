/**
 * @file odd_even_list.cpp
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-01-10
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "odd_even_list.h"

namespace leetcode {
ListNode *oddEvenList(ListNode *head) {
  if (head && head->next) {
    ListNode *even = splitEvenNode(head);
    ListNode *odd = head;
    while (odd->next) {
      odd = odd->next;
    }
    odd->next = even;
    return head;
  } else {
    return head;
  }
}

ListNode *splitEvenNode(ListNode *head) {
  if (head && head->next) {
    ListNode *temp = head->next;
    head->next = temp->next;
    temp->next = splitEvenNode(temp->next);
    return temp;
  } else {
    return nullptr;
  }
}
} // namespace leetcode
