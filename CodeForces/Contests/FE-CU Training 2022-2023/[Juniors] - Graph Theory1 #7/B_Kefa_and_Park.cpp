#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define all(x) (x).begin(), (x).end()
int DFS(int u, int consec, int limit, vector<vector<int>>& g, vector<int>& cat, vector<bool>& vis, int count)
{
  vis[u] = true;
  consec += (cat[u]) ? 1 : -consec;
  if (limit < consec)
    return count;
  bool leaf = true;
  for (auto v : g[u])
  {
    if (!vis[v])
    {
      count = DFS(v, consec, limit, g, cat, vis, count);
      leaf = false;
    }
  }
  return count + leaf;
}
void solve()
{
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g (n);
  vector<int> cat (n);
  vector<bool> visited (n, false);
  for (auto& x : cat)
    cin >> x;
  for (int i = 0; i < n - 1; i++)
  {
    int u, v;
    cin >> u >> v;
    g[--u].push_back(--v);
    g[v].push_back(u);
  }
  cout << DFS(0, 0, m, g, cat, visited, 0);
}

int main()
{
  solve();
  return 0;
}