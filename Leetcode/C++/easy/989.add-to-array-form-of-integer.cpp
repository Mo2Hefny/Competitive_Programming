/*
 * @lc app=leetcode id=989 lang=cpp
 *
 * [989] Add to Array-Form of Integer
 */

// @lc code=start
class Solution
{
public:
    vector<int> addToArrayForm(vector<int> &num, int k)
    {
        int carry = 0;
        for (int i = num.size() - 1; i >= 0; i--, k /= 10)
        {
            num[i] = carry + num[i] + k % 10;
            if (num[i] > 9)
            {
                num[i] %= 10;
                carry = 1;
            }
            else
                carry = 0;
        }
        while (k || carry)
        {
            int x = carry + k % 10;
            if (x > 9)
            {
                x %= 10;
                carry = 1;
            }
            else
                carry = 0;
            num.insert(num.begin(), x);
            k /= 10;
        }
        return num;
    }
};
// @lc code=end
