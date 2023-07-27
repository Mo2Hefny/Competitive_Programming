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
  int n;
  cin >> n;
  vector<ll> v(n);
  for (auto &x : v) cin >> x;
  pair<int, int> p = {-1, INT_MAX};
  int ans = 0;
  for (int i = 0; i < n - 1; i++)
  {
    if (v[i] > v[i + 1])
    {
      cout << ans << endl;
      return;
    }
    if (v[i + 1] - v[i] < p.second)
    {
      p.first = i;
      p.second = v[i + 1] - v[i];
    }
  }

  while (p.second >= 0)
  {
    ans++;
    p.second -= 2;
  }
  cout << ans << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}