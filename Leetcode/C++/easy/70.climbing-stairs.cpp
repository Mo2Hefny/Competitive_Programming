/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution
{
public:
    unsigned long long int climbStairs(int n)
    {
        unsigned long long int sum = 1, p = 1;
        while (n--) sum = (p += sum) - sum;
        return sum;
    }
};
// @lc code=end
