/*
 * @lc app=leetcode id=129 lang=cpp
 *
 * [129] Sum Root to Leaf Numbers
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
  int sumNumbersRec(TreeNode *root, int curr)
  {
    if (!root)
      return 0;
    if (!root->right && !root->left)
      return curr + root->val;
    int sum = 0;
    if (root->left)
      sum += sumNumbersRec(root->left, (curr + root->val) * 10);
    if (root->right)
      sum += sumNumbersRec(root->right, (curr + root->val) * 10);
    return sum;
  }
  int sumNumbers(TreeNode *root)
  {
    if (!root)
      return 0;
    return sumNumbersRec(root, 0);
  }
};
// @lc code=end
