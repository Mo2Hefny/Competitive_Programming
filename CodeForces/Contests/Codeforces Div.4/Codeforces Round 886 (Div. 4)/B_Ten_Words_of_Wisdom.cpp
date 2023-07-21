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
  vector<pair<int, int>> v (n);
  for (auto& x : v)
    cin >> x.first >> x.second;

  int mx = -1;
  for (int i = 0; i < n; i++)
  {
    if (v[i].first > 10)  continue;
    if (mx == -1 || v[i].second > v[mx].second) mx = i;
  }
  cout << mx + 1 << endl;
}

int main()
{
  int t;
  cin >> t;
  while(t--)
  solve();
  return 0;
}