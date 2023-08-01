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

vector<vector<int>> g;
vector<ll> leaves;
vector<bool> vis;

void DFS(int u, int prev)
{
  vis[u] = true;
  bool children = false;
  for (auto& v : g[u])
    if (!vis[v])
    {
      DFS(v, u);
      children = true;
    }
  if (~prev)
  {
    if (!children) 
      leaves[u]++;
    leaves[prev] += leaves[u];
  }
}

void solve()
{
  int n;
  cin >> n;
  g.resize(n + 1);
  leaves.resize(n + 1);
  vis.resize(n + 1);
  for (int i = 0; i < n - 1; i++)
  {
    int u, v;
    cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  fill(all(vis), false);
  fill(all(leaves), 0);
  DFS(1, -1);
  int q;
  cin >> q;
  while (q--)
  {
    int x, y;
    cin >> x >> y;
    cout << (ll) (leaves[x] * leaves[y]) << endl;
  }
  for (auto &x : g)
    x.clear();
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}