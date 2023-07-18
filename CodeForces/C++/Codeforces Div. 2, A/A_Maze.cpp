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
vector<vector<char>> g;
vector<vector<bool>> visited;
int n, m, k;

void DFS(int r, int c)
{
  visited[r][c] = true;
  for (int i = 0; i < 4 && k; i++)
  {
    int y = r + dy[i];
    int x = c + dx[i];
    if (y < 0 || y >= n || x < 0 || x >= m)
      continue;
    if (g[y][x] == '.' && !visited[y][x])
      DFS(y, x);
  }

  if (k)
  {
    g[r][c] = 'X';
    k--;
  }
}

void solve()
{
  cin >> n >> m >> k;
  g.resize(n);
  visited.resize(n);
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
    {
      char c;
      cin >> c;
      g[i].push_back(c);
      visited[i].push_back(false);
    }

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
    {
      if (!visited[i][j] && g[i][j] == '.')
      {
        visited[i][j] = true;
        DFS(i, j);
      }
    }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
      cout << g[i][j];
    cout << endl;
  }
}

int main()
{
  // int t;
  // cin >> t;
  // while (t--)
  solve();
  return 0;
}