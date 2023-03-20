
#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>
#include <deque>
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
  string s;
  cin >> s;
  for (int i = 0; i < n; i++)
  {
    char mode = (i & 1) + '0';
    char curr = s[i];
    if (s[i] != '0' && s[i] != '1')
      for (int j = 0; j < n; j++)
        if (s[j] == curr)
          s[j] = mode;
  }
  for (int i = 1; i < n; i++)
  {
    if (s[i] == s[i - 1])
    {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}