/*
 * @lc app=leetcode id=142 lang=cpp
 *
 * [142] Linked List Cycle II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *Intersection(ListNode *head)
    {
        ListNode *fast = head, *slow = head;
        while (fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow)
                return slow;
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *intersect = Intersection(head);
        if (!intersect)
            return NULL;
        while (intersect != head)
        {
            head = head->next;
            intersect = intersect->next;
        }
        return head;
    }
};
// @lc code=end
