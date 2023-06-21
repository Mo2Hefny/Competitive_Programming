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
  ll n, k;
  cin >> n >> k;
  vector<ll> v(n);
  for (auto& x : v) cin >> x;
  sort(all(v));
  vector<bool> b(n, true);
  int count = 0;
  for (int i = n - 1; i >= 0; i--)
  {
    if (b[i] == false)  continue;
    ll pos = lower_bound(v.begin(), v.end(), v[i] / k) - v.begin(); 
    if (pos < n && v[pos] * k == v[i] && pos != i)
    {
      b[pos] = false;
      count++;
    }
  }
  cout << n - count << endl;
}

int main()
{
  solve();
  return 0;
}