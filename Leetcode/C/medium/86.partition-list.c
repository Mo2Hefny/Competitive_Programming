/*
 * @lc app=leetcode id=86 lang=c
 *
 * [86] Partition List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *partition(struct ListNode *head, int x)
{
  struct ListNode *f_partition = malloc(sizeof(struct ListNode));
  struct ListNode *s_partition = malloc(sizeof(struct ListNode));
  struct ListNode *f_temp = f_partition;
  s_partition->next = NULL;
  f_partition->next = NULL;
  while (head)
  {
    struct ListNode *temp;
    if (head->val < x)
    {
      if (s_partition->next)
        s_partition->next = s_partition->next->next;
      temp = head;
      head = head->next;
      temp->next = f_temp->next;
      f_temp->next = temp;
      f_temp = temp;
    }
    else
    {
      if (!f_temp->next)
      {
        f_temp->next = head;
      }
      s_partition->next = head;
      s_partition = s_partition->next;
      head = head->next;
    }
  }
  return f_partition->next;
}
// @lc code=end
