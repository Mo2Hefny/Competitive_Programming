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
  vector<ll> points(n);
  for (auto& x : points) cin >> x;

  ll count = 0;
  ll l = 0, r = n;
  for (int i = 0; i < n - 2; i++)
  {
    ll pos = upper_bound(points.begin(), points.end(), points[i] + k) - points.begin() - 1; 
    ll dis = pos - i - 1;
    count += dis * (dis + 1) / 2;
  }
  cout << count << endl;
}

int main()
{
  solve();
  return 0;
}