#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

void solve()
{
  ll n, m;
  cin >> n;
  vector<int> presum(n + 1, 0);
  vector<int> qty(m);
  for (int i = 1; i <= n; i++)
  {
    int b;
    cin >> b;
    presum[i] = presum[i - 1] + b;
  }
  cin >> m;
  vector<ll> juicy(m);
  for (auto &x : juicy)
    cin >> x;
  for (const auto &x : juicy)
  {
    ll l = 0, r = n;
    while (l <= r)
    {
      ll mid = l + (r - l) / 2;
      if (presum[mid] < x) l = mid + 1;
      else r = mid - 1;
    }
    cout << l << endl;
  }
}

int main()
{
  solve();
  return 0;
}