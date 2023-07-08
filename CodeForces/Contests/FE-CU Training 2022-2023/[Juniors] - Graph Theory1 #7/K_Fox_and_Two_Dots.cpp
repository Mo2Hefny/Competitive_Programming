#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define all(x) (x).begin(), (x).end()

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

vector<vector<char>> g(50, vector<char>(50, '-'));
vector<vector<bool>> visited(50, vector<bool>(50, false));
bool found = false;
int n, m;

void dfs(int y, int x, int prevy, int prevx, char target)
{
  if (x < 0 || y < 0 || x >= m || y >= n)
    return;
  if (g[y][x] != target)
    return;

  if (visited[y][x])
  {
    found = true;
    return;
  }

  visited[y][x] = true;

  for (int i = 0; i < 4; i++)
  {
    int x2 = x + dx[i];
    int y2 = y + dy[i];
    if (x2 == prevx && y2 == prevy)
      continue;
    dfs(y2, x2, y, x, target);
  }
}

void solve()
{
  cin >> n >> m;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> g[i][j];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      if (!visited[i][j])
        dfs(i, j, -1, -1, g[i][j]);
  cout << (found ? "Yes" : "No");
}

int main()
{
  solve();
  return 0;
}