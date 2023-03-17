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
    int depth (TreeNode* node)
    {
        return !node ? 0 : 1 + max(depth(node->left), depth(node->right));
    }

    vector<vector<int>> levelOrderBottom(TreeNode* root) {
         if(!root)   return {};

        int d = depth(root);
        vector<vector<int>> res(d, vector<int> ({}));
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        res[d-- - 1].push_back(root->val);
        while (!q.empty())
        {
            TreeNode* node = q.front();
            q.pop();
            cout << " " << q.size() << endl;
            
            if (node)
            {
                if (node->left)
                {
                    q.push(node->left);
                    res[d - 1].push_back(node->left->val);
                }
                if (node->right)
                {
                    q.push(node->right);
                    res[d - 1].push_back(node->right->val);
                }
            }
            else
            {
                if (q.empty())  break;
                d--;
                q.push(NULL);
            }
        }
        return res;
    }
};