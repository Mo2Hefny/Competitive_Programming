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
  ll n, k;
  cin >> n >> k;
  vector<ll> v(n);
  for (auto& x : v) cin >> x;
  sort(all(v));

  ll med = n / 2;
  ll ans = v[med];
  ll l = 0, r = ans + k;
  while (l <= r)
  {
    ll mid = l + (r - l) / 2;
    ll op = 0;
    for (int i = med; i < n; i++)
    {
      if (v[i] < mid)
        op += mid - v[i];
      else
        break;
    }

    if (op <= k)
    {
      ans = max(ans, mid);
      l = mid + 1;
    }
    else
      r = mid - 1;
  }
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