#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <iomanip>
#include <bitset>
#include <string>
#include <set>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

void solve()
{
  char prev = 's';
  int x, y, sum = 0;
  cin >> y >> x;
  for (int i = 0; x || y; i++)
  {
    sum++;
    if (x > 0 && abs(x) >= abs(y) && prev != 'r')
    {
      prev = 'r';
      x--;
    }
    else if (x < 0 && abs(x) >= abs(y) && prev != 'l')
    {
      prev = 'l';
      x++;
    }
    else if (y < 0 && abs(y) >= abs(x) && prev != 'd')
    {
      prev = 'd';
      y++;
    }
    else if (y > 0 && abs(y) >= abs(x) && prev != 'u')
    {
      prev = 'u';
      y--;
    }
    else if (prev != 's')
      prev = 's';
  }
  cout << sum << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}