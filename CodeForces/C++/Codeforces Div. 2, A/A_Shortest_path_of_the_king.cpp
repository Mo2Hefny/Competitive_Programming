#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <iomanip>
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
  char s[2][3];
  int x, y;
  cin >> s[0] >> s[1];
  x = s[1][0] - s[0][0];
  y = s[0][1] - s[1][1];
  cout << max(abs(x), abs(y)) << endl;
  for (int i = 0; x || y; i++)
  {
    if (x > 0)
    {
      cout << 'R';
      x--;
    }
    else if (x < 0)
    {
      cout << 'L';
      x++;
    }
    if (y > 0)
    {
      cout << 'D';
      y--;
    }
    else if (y < 0)
    {
      cout << 'U';
      y++;
    }
    cout << endl;
  }

}

int main()
{
  solve();
  return 0;
}