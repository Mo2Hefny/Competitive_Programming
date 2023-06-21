#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

void solve()
{
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  vector<ll> b(n);
  for (auto& x : a) cin >> x;
  for (auto& x : b) cin >> x;
  ll l = 0, r = *max_element(b.begin(), b.end()) + k;
  while(l <= r)
  {
    ll mid = l + (r - l) / 2;
    ll powder = 0;
    for (int i = 0; i < n; i++)
    {
      ll z = 0;
      powder += max(a[i] * mid - b[i], z);
      if (powder > k) break;
    }
    if (powder <= k) l = mid + 1;
    else r = mid - 1;

  }
  cout << r << endl;
}

int main()
{
  solve();
  return 0;
}