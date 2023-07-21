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
  for (auto &x : v)
    cin >> x;
  sort(all(v));

  ll curr = 1, mx = 0;
  for (ll i = 1; i < v.size(); i++)
  {
    if (v[i] - v[i - 1] > k)
    {
      mx = max(mx, curr);
      curr = 1;
    }
    else
      curr++;
  }
  mx = max(mx, curr);
  cout << n - mx << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}