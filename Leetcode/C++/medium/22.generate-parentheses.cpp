/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */

// @lc code=start
class Solution {
public:
    int open = 0, close = 0;    // Parentheses count
    vector<string> solutions;
    void solve(int n, string comb)
    {
        if (open == n && close == n)
        {
            solutions.push_back(comb);
            return;
        }

        if (open < n)
        {
            open++;
            solve(n, comb +'(');
            open--;
        }
        if (close < n && close < open)
        {
            close++;
            solve(n, comb +')');
            close--;
        }
    }
    vector<string> generateParenthesis(int n) {
        solve(n, "");
        return solutions;
    }
};
// @lc code=end

