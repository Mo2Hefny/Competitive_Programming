/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
class Solution
{
public:
    string addBinary(string a, string b)
    {
        string s = "";
        int carry = 0;
        int i = a.size() - 1, j = b.size() - 1;
        while (i >=0 || j >= 0)
        {
            int x = carry;
            if (i >= 0)
                x += a[i] - '0';
            if (j >= 0)
                x += b[j] - '0';
            carry = x > 1 ? 1 : 0;
            x = (x == 2) ? 0 :
                (x == 3) ? 1 : x;
            j--; i--;
            s += (x + '0');
        }
        if (carry)
            s += '1';

        for (int i = 0; i < s.size() / 2; i++)
            swap(s[i], s[s.size() - i - 1]);
        return s;
    }
};
// @lc code=end
