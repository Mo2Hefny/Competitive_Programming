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
  ll n, m, h;
  cin >> n >> m >> h;
  vector<vector<ll>> v(n);
  vector<vector<ll>> sum(n, vector<ll>(m, 0));
  for (auto &x : v)
  {
    for (ll i = 0; i < m; i++)
    {
      int t;
      cin >> t;
      x.push_back(t);
    }
    sort(all(x));
  }

  for (ll i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      sum[i][j] = (j) ? sum[i][j - 1] + v[i][j] : v[i][j];

  vector<pair<ll, ll>> p(n);
  for (ll i = 0; i < n; i++)
  {
    ll time = h;
    ll j = 0;
    p[i].first = 0;
    p[i].second = 0;
    while (j < m && time - v[i][j] >= 0)
    {
      p[i].first++;
      p[i].second += sum[i][j];
      time -= v[i][j];
      j++;
    }
  }

  ll place = 1;
  for (ll i = 1; i < n; i++)
  {
    if (p[i].first > p[0].first)
      place++;
    else if (p[i].first == p[0].first && p[i].second < p[0].second)
      place++;
  }
  cout << place << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}