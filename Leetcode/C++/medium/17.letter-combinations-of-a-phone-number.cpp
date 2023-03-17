/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<string> str = {"abc", "def", "ghi",
    "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> combinations;
    
    void solve(string word, string digits)
    {
        //Finished current number combination.
        if (digits.empty())
        {
            combinations.push_back(word);
            return;
        }

        for (auto c : str[digits[0] - '0' - 2])
        {
            word += c;
            solve(word, digits.substr(1));
            word.erase(word.size() - 1);
        }
    }

    vector<string> letterCombinations(string digits) {
        string word = "";
        if (!digits.empty())    solve(word, digits);
        return combinations;
    }
};
// @lc code=end
