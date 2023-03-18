#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
  int distMoney(int money, int children)
  {
    if (money < children)
      return -1;
    money -= children;
    vector<int> v(children, 1);
    int i;
    for (i = 0; money >= 7; i = (i + 1) % children)
    {
      if (!i && v[i] == 8)
      {
        v[i] += money;
        money = 0;
      }
      else
      {
        v[i] += 7;
        money -= 7;
      }
    }
    while (money > 0)
    {
      if (money != 3)
      {
        v[i] += money;
        money = 0;
      }
      if (money == 3)
      {
        if (i == v.size() - 1)
        {
          v[i - 1] += money;
          money = 0;
        }
        else
        {
          v[i] += money;
          money = 0;
        }
      }
    }
    return count(v.begin(), v.end(), 8);
  }
};