/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

// @lc code=star
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> dp(rowIndex + 1, 0);
        dp[0] = 1;
        for (int i = 0; i < rowIndex; i++)
            for (int j = rowIndex; j > 0; j--)
                dp[j] += dp[j - 1];
        return dp;
    }
};
// @lc code=end

