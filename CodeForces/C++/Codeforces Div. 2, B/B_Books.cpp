#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void solve()
{
  int n, t;
  cin >> n >> t;
  vector<int> v(n);
  for (auto& x : v) cin >> x;
  int ans = 0, l = 0, r = 0;
  int mx = 0;
  while (l < n && r < n)
  {
    while (ans <= t && r < n)
    {
      ans += v[r];
      r++;
    }
    mx = max(mx, r - l - (ans > t));
    if (ans > t)
    {
      ans -= v[l];
      l++;
    }
  }

  cout << mx;
}

int main()
{
  //int t;
  //cin >> t;
  //while (t--)
    solve();
  return 0;
}