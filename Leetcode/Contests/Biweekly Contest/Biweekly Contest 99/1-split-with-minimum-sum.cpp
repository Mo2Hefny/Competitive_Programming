#include <bits/stdc++.h>
class Solution
{
public:
  int splitNum(int num)
  {
    vector<int> digits;
    int n1, n2;
    while (num > 0)
    {
      digits.push_back(num % 10);
      num /= 10;
    }
    sort(digits.rbegin(), digits.rend());
    n2 = digits[0];
    n1 = digits[1];
    for (int i = 2, mult; i < digits.size(); i++)
      if (i & 1)
        n1 += digits[i] * pow(10, (i / 2));
      else
        n2 += digits[i] * pow(10, (i / 2));
    return n1 + n2;
  }
};