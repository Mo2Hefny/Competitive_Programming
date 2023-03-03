/*
 * @lc app=leetcode id=82 lang=c
 *
 * [82] Remove Duplicates from Sorted List II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <stdlib.h>
struct ListNode *deleteDuplicates(struct ListNode *head)
{
  if (!head)
    return NULL;
  struct ListNode *res = malloc(sizeof(struct ListNode));
  struct ListNode *temp = res;
  int min = -101;
  while (head)
  {
    temp->next = NULL;
    if (head->val == min || head->next && head->next->val == head->val)
    {
      min = head->val;
      head = head->next;
      continue;
    }
    min = head->val;
    temp->next = head;
    temp = temp->next;
    head = head->next;
  }
  return res->next;
}
// @lc code=end
