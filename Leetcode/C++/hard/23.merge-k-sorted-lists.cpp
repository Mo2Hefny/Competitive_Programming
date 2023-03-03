/*
 * @lc app=leetcode id=23 lang=cpp
 *
 * [23] Merge k Sorted Lists
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
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        ListNode *res_list = new ListNode, *root;
        root = res_list;
        if (lists.empty())
            return NULL;
        while (true)
        {
            int min = -1;
            for (int i = 0; i < lists.size(); i++)
            {
                if (!lists[i])
                    continue;
                if (min == -1)
                    min = i;
                else if (lists[i]->val < lists[min]->val)
                    min = i;
            }
            if (min == -1)
                break;
            res_list->next = lists[min];
            res_list = res_list->next;
            lists[min] = lists[min]->next;
        }
        return root->next;
    }
};
// @lc code=end
