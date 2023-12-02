/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> dp(numRows);
        for (int i = 0; i < numRows; i++) {
            dp[i].resize(i + 1);
            dp[i].front() = 1;
            dp[i].back() = 1;
        }
        for (int i = 1; i < numRows; i++) {
            for (int j = 1; j < dp[i].size() - 1; j++) {
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
            }
        }
        return dp;
    }
};
// @lc code=end

