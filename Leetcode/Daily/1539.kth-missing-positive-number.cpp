/*
 * @lc app=leetcode id=1539 lang=cpp
 *
 * [1539] Kth Missing Positive Number
 */

// @lc code=start
class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        vector<int> missing;
        for (int i = 0, j = 1; missing.size() < k; j++)
        {
            if (i < arr.size() && j == arr[i])
                i++;
            else
                missing.push_back(j);
        }
        return missing.back();
    }
};
// @lc code=end
