/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution
{
public:
    unsigned long long int mySqrt(unsigned long long int n)
    {
        unsigned long long int x = n;
        unsigned long long int y = 1;

        while (x > y)
        {
            x = (x + y) / 2;
            y = n / x;
        }
        return x;
    }
};
// @lc code=end
