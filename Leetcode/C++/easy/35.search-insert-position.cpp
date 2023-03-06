/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int l = 0, h = nums.size() - 1;
        while (l < h)
        {
            int mid = (l + h) / 2;
            if (target == nums[mid])
                return mid;

            else if (target > nums[mid])
                l = mid + 2 > nums.size() ? h : mid + 1;

            else
                h = mid - 1 < 0 ? l : mid - 1;
        }
        return nums[l] >= target ? l : l + 1;
    }
};
// @lc code=end
