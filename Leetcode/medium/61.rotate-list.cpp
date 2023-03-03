/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
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
    ListNode *rotateRight(ListNode *head, int k)
    {
        ListNode *ref_node = head, *main_node = head;
        int size = 0;
        
        if (!head)
            return NULL;
        while (ref_node)
        {
            ref_node = ref_node->next;
            size++;
        }
        k %= size;
        ref_node = head;
        for (int i = 0; ref_node->next; i++)
        {
            ref_node = ref_node->next;
            if (i >= k)
                main_node = main_node->next;
        }
        ref_node->next = head;
        head = main_node->next;
        main_node->next = NULL;
        return head;
    }
};
// @lc code=end
