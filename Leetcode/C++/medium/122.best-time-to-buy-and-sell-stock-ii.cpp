/*
 * @lc app=leetcode id=122 lang=cpp
 *
 * [122] Best Time to Buy and Sell Stock II
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int dp = 0, n = prices.size();
        int buy = 0, sell = 0;
        for (int i = 0; i < n; i++) {
            while (i < n - 1 && prices[i + 1] <= prices[i]) i++;             // [1] 5 3 6
            buy = sell = prices[i];
            while (i < n - 1 && prices[i + 1] > prices[i]) i++;             // 1 [5] 3 6
            sell = prices[i];
            dp += sell - buy;
        }
        return dp;
    }
};
// @lc code=end

