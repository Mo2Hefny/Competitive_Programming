/*
 * @lc app=leetcode id=101 lang=cpp
 *
 * [101] Symmetric Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool CheckSymm(TreeNode* root1, TreeNode* root2)
    {
        if (!root1 && !root2)
            return true;
        if (root1->val && root2->val)
            return CheckSymm(root1->right, root2->left) &&
            CheckSymm(root1->left, root2->right);
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if (!root)
            return false;
        return CheckSymm(root->left, root->right);
    }
};
// @lc code=end

