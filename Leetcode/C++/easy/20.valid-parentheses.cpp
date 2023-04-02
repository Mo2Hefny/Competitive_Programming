class Solution {
public:
    bool isValid(string s) {
        stack<char> stck;
        for (size_t i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                stck.push(s[i]);
            else if (stck.empty() || abs(s[i] - stck.top()) > 2)
                return false;
            else
                stck.pop();
        }
        return stck.empty();
    }
};