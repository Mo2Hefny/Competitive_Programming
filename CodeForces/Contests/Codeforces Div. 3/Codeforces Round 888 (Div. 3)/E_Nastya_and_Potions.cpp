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
vector<int> cost;
vector<bool> vis;

ll DFS(int u, vector<ll>& p, vector<ll>& c)
{
  if (vis[u]) return cost[u];
  vis[u] = true;
  if (p[u]) return 0;
  cost[u] = c[u];
  if (g[u].empty()) return c[u];
  ll temp = 0;
  for (auto v : g[u]) temp += DFS(v, p, c);
  cost[u] = min(temp, c[u]);
  return cost[u];
}
void solve()
{
  int n, k;
  cin >> n >> k;
  cost.resize(n);
  vis.resize(n);
  fill(all(cost), 0);
  fill(all(vis), false);
  vector<ll> c(n), p(n, 0);
  for (auto& x : c) cin >> x;
  for (int i =0; i < k; i++)
  {
    int x; cin >> x;
    p[x - 1] = 1;
  }
  g.resize(n);
  for (int i = 0; i < n; i++)
  {
    int M;
    cin >> M;
    for (int j = 0; j < M; j++)
    {
      int x;
      cin >> x;
      g[i].push_back(x - 1);
    }
  }

  for (int i = 0; i < n; i++)
  {
    cost[i] = DFS(i, p , c);
    cout << cost[i] << " ";
  }
  cout << endl;
  for (auto& x : g) x.clear();
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}