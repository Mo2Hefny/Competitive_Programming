
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
  int n, q;
  cin >> n;
  vector<int> v(n);
  for (auto &x : v)
    cin >> x;
  sort(v.begin(), v.end());
  if (v[0] != 1)
  {
    cout << "NO\n";
    return;
  }

  vector<int> pre_sum(n + 1, 0);
  for (int i = 0; i < n; i++)
    pre_sum[i + 1] = pre_sum[i] + v[i];
    
  for (int i = 1; i < n; i++)
  {
    if (v[i] > pre_sum[i])
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