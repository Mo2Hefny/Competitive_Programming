/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution
{
public:
    double myPow(double x, long long int n)
    {  
        return x < 0 ? (n & 1 ? -exp(log(-x) * n) : exp(log(-x) * n))
        : exp(log(x) * n);  }
};
// @lc code=end
