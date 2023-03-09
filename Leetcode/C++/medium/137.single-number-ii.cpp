/*
 * @lc app=leetcode id=137 lang=cpp
 *
 * [137] Single Number II
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int c = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1] && c < 3)
                return nums[i - 1];
            c++;
            if (c > 3)
                c = 1;
        }
        return nums.back();
    }
};
// @lc code=end

