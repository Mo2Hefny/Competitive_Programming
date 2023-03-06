/*
 * @lc app=leetcode id=434 lang=cpp
 *
 * [434] Number of Segments in a String
 */

// @lc code=start
class Solution
{
public:
    int countSegments(string s)
    {
        int seg = s[0] != ' ' ? 1 : 0;
        bool dig = false;
        if (s.length() == 0)
            return 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ') dig = true;
            if (i < s.length() - 1 && s[i] == ' ' && s[i + 1] != ' ')
                seg++;
        }
        return !dig ? 0 : seg;
    }
};
// @lc code=end
