/**
 * @file list_node.h
 * @author lipingan (lipingan.dev@outlook.com)
 * @brief
 * @version 0.1
 * @date 2021-12-30
 *
 * @copyright Copyright (c) 2021
 *
 */

/**
 * Definition for singly-linked list.
 */

#ifndef __LIST_NODE_H__
#define __LIST_NODE_H__

#include <vector>
namespace leetcode {
struct ListNode {
  int val;
  ListNode *next;
  ListNode();
  ListNode(int x);
  ListNode(int x, ListNode *next);
};

void printList(const ListNode *head);

ListNode *spawnList(const std::vector<int> &elements);

size_t freeList(ListNode *head);

bool equal(const ListNode *list1, const ListNode *list2);

size_t length(const ListNode *list);
} // namespace leetcode

#endif // __LIST_NODE_H__