/*
 * @lc app=leetcode id=24 lang=cpp
 *
 * [24] Swap Nodes in Pairs
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        ListNode *temp = head;

        for (int i = 0; temp && temp->next; i++)
        {
            if (!(i & 1))
            {
                temp->val ^= temp->next->val;
                temp->next->val ^= temp->val;
                temp->val ^= temp->next->val;
            }
            temp = temp->next;
        }
        return head;
    }
};
// @lc code=end
