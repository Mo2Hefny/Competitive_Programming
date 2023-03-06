
#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>
#include <map>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cstring>
#include <set>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

void solve()
{
  int n;
  cin >> n;
  int x = 0, y = 0;
  bool found = false;
  for (int i = 0; i < n; i++)
  {
    char c;
    cin >> c;
    if (c == 'U')
      y++;
    else if (c == 'D')
      y--;
    else if (c == 'R')
      x++;
    else if (c == 'L')
      x--;
    if (x == 1 && y == 1)
      found = true;
  }
  if (found)
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}