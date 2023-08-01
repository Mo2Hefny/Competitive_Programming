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
  ll n;
  cin >> n;
  vector<ll> v(n);
  for (auto &x : v)
    cin >> x;
  ll res = 0, sum = 0;
  bool neg = false;
  for (ll i = 0; i < n; i++)
  {
    if (!neg && v[i] < 0)
    {
      neg = true;
      res++;
    }
    else if (v[i] > 0)
    {
       neg = false;
    }
    sum += abs(v[i]);
  }
  cout << sum << " " << res << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}