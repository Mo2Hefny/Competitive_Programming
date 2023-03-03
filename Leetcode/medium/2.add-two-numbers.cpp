/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *l3 = new ListNode((l1->val + l2->val) % 10);
        char carry = (l1->val + l2->val >= 10) ? 1 : 0;
        ListNode *temp1 = l1->next, *temp2 = l2->next, *temp3 = l3;
        while (temp1 || temp2)
        {
            int sum = carry;
            if (temp1)
            {
                sum += temp1->val;
                temp1 = temp1 ->next;
            }
            if (temp2)
            {
                sum += temp2->val;
                temp2 = temp2 ->next;
            }
            carry = (sum >= 10) ? 1 : 0;
            ListNode* newNode = new ListNode(sum%10);
            temp3->next = newNode;
            temp3 = temp3->next;
        }
        if (carry)
        {
            ListNode* newNode = new ListNode(1);
            temp3->next = newNode;
            temp3 = temp3->next;
        }
        return l3;
    }
};
// @lc code=end
