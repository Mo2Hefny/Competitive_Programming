/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
public:
    long long revRec (long long x, long long res)
    {
        if (x == 0)
            return res;
        if (res > INT_MAX/10 || (res == INT_MAX / 10 && x % 10 > 7)) return 0;
        if (res < INT_MIN/10 || (res == INT_MIN / 10 && x % 10 < -8)) return 0;
        res = res * 10 + x % 10;
        return revRec(x / 10, res);
    }

    long long int reverse(long long int x) {
        return revRec(x, 0);
    }
};
// @lc code=end
