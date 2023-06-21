#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define all(x) (x).begin(), (x).end()

void solve()
{
  ll n, S;
  cin >> n >> S;
  vector<ll> v(n);
  for (auto& x : v) cin >> x;
  ll T = 0;
  ll l = 0, r = n - 1;
  while (l <= r)
  {
    ll cost = 0;
    ll mid = l + (r - l) / 2;
    ll k = mid + 1;
    vector<ll> v1(n);
    for (int i = 0; i < n; i++)
    {
      v1[i] = v[i] + k * (i + 1);
    }
    sort(all(v1));
    for (int i = 0; i < k; i++)
      cost += v1[i];
    if (cost <= S)
    {
      l = mid + 1;
      T = cost;
    }
    else
      r = mid - 1;
  }
  cout << r << " " << T << endl;
}

int main()
{
  solve();
  return 0;
}