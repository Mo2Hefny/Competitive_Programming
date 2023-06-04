/*
 * @lc app=leetcode id=138 lang=cpp
 *
 * [138] Copy List with Random Pointer
 */
// @lc code=start
#include <bits/stdc++.h>
using namespace std;
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return NULL;
        map<Node*, Node*> mp = {{NULL, NULL}};
        Node* ptr = head;
        while (ptr)
        {
            mp.insert({ptr, new Node(ptr->val)});
            ptr = ptr->next;
        }
        ptr = head;
        while (ptr)
        {
            mp[ptr]->random = mp[ptr->random];
            mp[ptr]->next = mp[ptr->next];
            ptr = ptr->next;
        }
        return mp[head];
    }
};
// @lc code=end

