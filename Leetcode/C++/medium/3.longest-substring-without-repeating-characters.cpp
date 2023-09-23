/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l, r, mx;
        l = r = mx = 0;
        set<int> st;
        while (l < s.size()) {
            while (r < s.size() && !st.count(s[r])) {
                st.insert(s[r++]);
            }

            mx = max(mx, (int) st.size());
            if (st.count(s[l])) st.erase(s[l]);
            l++;
        }
        return mx;
    }
};
// @lc code=end

