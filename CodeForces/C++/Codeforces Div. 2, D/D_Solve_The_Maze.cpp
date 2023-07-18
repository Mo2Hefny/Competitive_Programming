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
  int n, m;
  cin >> n >> m;
  vector<string> g(n);
  vector<vector<bool>> vis(n, vector<bool>(m, false));
  for (auto &x : g)
    cin >> x;
  int good = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (g[i][j] == 'B')
      {
        for (int k = 0; k < 4; k++)
        {
          int y = i + dy[k];
          int x = j + dx[k];
          if (y < 0 || y >= n || x < 0 || x >= m)
            continue;
          if (g[y][x] == 'G')
          {
            cout << "No\n";
            return;
          }
          if (g[y][x] == 'B') continue;
          g[y][x] = '#';
        }
      }
      else if (g[i][j] == 'G')
        good++;
    }
  }
  if (g[n - 1][m - 1] == '#')
  {
    cout << (!good ? "Yes\n" : "No\n");
    return;
  }
  queue<pair<int, int>> q;
  q.push({n - 1, m - 1});
  vis[n - 1][m - 1] = true;
  while (!q.empty())
  {
    pair<int, int> p = q.front();
    q.pop();
    if (g[p.first][p.second] == 'G')
      good--;
    for (int i = 0; i < 4; i++)
    {
      int y = p.first + dy[i];
      int x = p.second + dx[i];
      if (y < 0 || y >= n || x < 0 || x >= m)
        continue;
      if (!vis[y][x] && g[y][x] != '#')
      {
        vis[y][x] = true;
        q.push({y, x});
      }
    }
  }

  cout << (!good ? "Yes\n" : "No\n");
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}