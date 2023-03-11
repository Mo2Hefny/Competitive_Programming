/*
 * @lc app=leetcode id=876 lang=cpp
 *
 * [876] Middle of the Linked List
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
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        map<int, ListNode*> nodes;
        int i = 1;
        while (head)
        {
            nodes.insert({i++, head});
            head = head->next;
        }

        return nodes[ceil((nodes.size() + 1)/ 2.0)];
    }
};
// @lc code=end

