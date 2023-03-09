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
  int n, m = 0, f = 0, res = 0, max_res = 0;
  cin >> n;
  vector<int> p(n);
  for (auto &x : p)
    cin >> x;
  for (int i = 0; i < n; i++)
  {
    if (p[i] == 2)
      res = ceil((float)m / 2) + ceil((float)f / 2);
    else
    {
      if (!m)
        m++;
      else
        f++;
      res++;
    }
    max_res = max(max_res, res);
  }
  cout << max_res;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
    cout << endl;
  }
  return 0;
}
