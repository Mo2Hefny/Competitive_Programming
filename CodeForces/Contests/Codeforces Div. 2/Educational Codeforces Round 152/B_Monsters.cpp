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
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  map<ll, vector<int>> ind;
  vector<ll> ans;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    if (v[i] > k)
    v[i] %= k;
    ind[v[i]].push_back(i);
  }
  sort(rall(v));
  for (auto& x : v)
  {
    for (auto i : ind[x]) cout << (i + 1) << " ";
    ind[x].clear();
  }
  cout << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}