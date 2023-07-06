#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define all(x) (x).begin(), (x).end()
vector<pair<int, int>> g[101];
vector<bool> cused(101), vis(101);
int cnt;
void DFS(int u, int target, int c)
{
  vis[u] = true;
  if (u == target)
  {
    cnt++;
    return;
  }
  for (auto v : g[u])
  {
    if (!vis[v.first] && v.second == c)
      DFS(v.first, target, c);
  }
}

void solve()
{
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < m; i++)
  {
    int u, v, c;
    cin >> u >> v >> c;
    g[u].push_back({v, c});
    g[v].push_back({u, c});
  }
  int t;
  cin >> t;
  while (t--)
  {
    int u, v;
    cin >> u >> v;
    cnt = 0;
    fill(all(cused), false);
    for (auto pr : g[u])
    {
      fill(all(vis), false);
      if (!cused[pr.second])
      {
        cused[pr.second] = true;
        DFS(u, v, pr.second);
      }
    }
    cout << cnt << endl;
  }
}

int main()
{
  solve();
  return 0;
}