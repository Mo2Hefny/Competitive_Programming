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
  unsigned ll n, c;
  cin >> n >> c;
  vector<unsigned ll> v(n);
  for (auto &x : v)
    cin >> x;
  unsigned ll l = 0, r = 1e9, w = 0;
  while (l <= r)
  {
    w = l + (r - l) / 2;
    unsigned ll res = 0;
    for (auto& x : v)
    {
      unsigned ll p = (x + 2 * w) * (x + 2 * w);
      if (p > c)
      {
        res = p;
        break;
      }
      res += p;
      if (res > 1e18) break;
    }
    if (res > c)  r = w - 1;
    else if (res < c) l = w + 1;
    else break;
  }
  cout << w << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}