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
  int n, m;
  cin >> n;
  vector<ll> v(n), sum(n + 1, 0);
  for (auto& x : v) cin >> x;
  for (int i = 0; i < n; i++) sum[i + 1] = sum[i] + v[i];
  sort(all(v));
  for (int i = 1; i < n; i++) v[i] += v[i - 1];
  cin >> m;
  while (m--)
  {
    int l, r, c;
    cin >> c >> l >> r;
    l--;
    if (c == 1) cout << sum[r] - (l >= 0 ? sum.at(l) : 0) << endl;
    else cout << v[--r] - (l > 0 ? v.at(--l) : 0) << endl;
  }
}

int main()
{
  // int t;
  // cin >> t;
  // while (t--)
  solve();
  return 0;
}