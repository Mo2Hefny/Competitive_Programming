#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define all(x) (x).begin(), (x).end()
void solve()
{
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n);
  vector<bool> visited(n, false);
  for (int i = 0; i < m; i++)
  {
    int u, v;
    cin >> u >> v;
    g[--u].push_back(--v);
    g[v].push_back(u);
  }
  ll danger = 1;
  for (int i = 0; i < n; i++)
  {
    if (visited[i])
      continue;
    queue<int> q;
    visited[i] = true;
    q.push(i);
    while (!q.empty())
    {
      int u = q.front();
      q.pop();
      
      for (auto &v : g[u])
      {
        if (!visited[v])
        {
          q.push(v);
          visited[v] = true;
          danger *= 2;
        }
      }
    }
  }
  cout << danger;
}

int main()
{
  solve();
  return 0;
}