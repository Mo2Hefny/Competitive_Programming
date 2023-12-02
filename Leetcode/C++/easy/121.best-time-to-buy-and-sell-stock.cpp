/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int dp = 0;
        int mn = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            mn = min(mn, prices[i]);
            dp = max(dp, prices[i] - mn);
        }
        return dp;
    }
};
// @lc code=end