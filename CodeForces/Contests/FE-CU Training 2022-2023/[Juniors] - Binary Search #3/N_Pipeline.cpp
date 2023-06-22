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
  ll s = (k - 1) * (k) / 2;
  if (s < n - 1)
    cout << -1 << endl;
  else
  {
    ll l = 0, r = k - 1;
    ll ans = 0;
    while (l <= r)
    {
      int mid = l + (r - l) / 2;
      if (s - ((mid) * (mid + 1) / 2) >= n - 1)
        l = mid + 1;
      else
        r = mid - 1;
    }
    cout << k - 1 - r << endl;
  }
}

int main()
{
  solve();
  return 0;
}