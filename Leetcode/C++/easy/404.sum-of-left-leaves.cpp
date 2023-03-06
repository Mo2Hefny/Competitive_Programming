/*
 * @lc app=leetcode id=404 lang=cpp
 *
 * [404] Sum of Left Leaves
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
class Solution
{
public:
    int recursion(TreeNode *root)
    {
        if (!root)
            return 0;
        if (!root->left && !root->right)
            return root->val;
        if (root->right && (root->right->right || root->right->left))
            return recursion(root->left) + recursion(root->right);
        return recursion(root->left);
    }
    int sumOfLeftLeaves(TreeNode *root)
    {
        if (!root || !root->left && !root->right)
            return 0;
        if (root->right && (root->right->right || root->right->left))
            return recursion(root->left) + recursion(root->right);
        return recursion(root->left);
    }
};
// @lc code=end
