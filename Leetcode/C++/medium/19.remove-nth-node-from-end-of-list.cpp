/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *ref_node = head, *main_node = head;
        int i;
        for (i = 0; ref_node; i++)
        {
            ref_node = ref_node->next;
            if (i > n)
                main_node = main_node->next;
        }
        if (!ref_node && i == n)
        {
            main_node = head->next;
            delete head;
            return main_node;
        }
        ref_node = main_node->next;
        main_node->next = ref_node->next;
        delete ref_node;
        return head;
    }
};
// @lc code=end
