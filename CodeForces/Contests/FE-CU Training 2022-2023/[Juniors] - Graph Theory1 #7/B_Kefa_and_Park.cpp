#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define all(x) (x).begin(), (x).end()
vector<vector<int>> g;
vector<int> cat;
vector<bool> visited;
int cnt = 0;
void DFS(int u, int consec, int limit)
{
  visited[u] = true;
  consec += (cat[u]) ? 1 : -consec;
  if (limit < consec)
    return;
  bool leaf = true;
  for (auto v : g[u])
  {
    if (!visited[v])
    {
      DFS(v, consec, limit);
      leaf = false;
    }
  }
  cnt += leaf;
}
void solve()
{
  int n, m;
  cin >> n >> m;
  g.resize(n);
  cat.resize(n);
  visited.resize(n);
  fill(all(visited), false);
  for (auto& x : cat)
    cin >> x;
  for (int i = 0; i < n - 1; i++)
  {
    int u, v;
    cin >> u >> v;
    g[--u].push_back(--v);
    g[v].push_back(u);
  }
  DFS(0, 0, m);
  cout << cnt;
}

int main()
{
  solve();
  return 0;
}