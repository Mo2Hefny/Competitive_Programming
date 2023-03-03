/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Contains value and its index
        map<int, int> d;
        for (int i = 0; i < nums.size(); i++)
            d.insert({nums.at(i), i});
        for (int i = 0; i < nums.size(); i++)
        {
            int compliment = target - nums.at(i);
            if (d.find(compliment) != d.end() && d[compliment] != i)
                return {i, d[compliment]};
        }
        return {};
    }
};
// @lc code=end

