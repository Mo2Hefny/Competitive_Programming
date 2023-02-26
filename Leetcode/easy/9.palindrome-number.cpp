/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        string s1, s2;
        s1 = s2 = to_string(x);
        reverse(s1.begin(), s1.end());
        return s1 == s2;
    }
};
// @lc code=end

