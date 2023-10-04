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
  int n, m, k, fedor, ans = 0;
  cin >> n >> m >> k;
  vector<int> v(m);
  for (auto &x : v) cin >> x;
  cin >> fedor;
  for (auto x : v)
    if (__builtin_popcount(fedor ^ x) <= k) ans++;
  cout << ans;
}

int main()
{
  //int t;
  //cin >> t;
  //while (t--)
    solve();
  return 0;
}