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
        ListNode *dummy = new ListNode;
        ListNode *temp = dummy;
        while (!lists.empty())
        {
            int mn = INT_MAX;
            for (int j = 0; j < lists.size(); j++)
            {
                if (!lists[j])
                    continue;
                mn = min(mn, lists[j]->val);
            }
            if (mn == INT_MAX)
                break;
            for (int j = 0; j < lists.size(); j++)
            {
                if (!lists[j])
                    continue;
                if (mn == lists[j]->val)
                {
                    lists[j] = lists[j]->next;
                    break;
                }
            }

            temp->next = new ListNode(mn);
            temp = temp->next;
        }
        return dummy->next;
    }
};
// @lc code=end
