#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MO2                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

vector<vector<int>> grid(1000, vector<int> (1000, 0));

void DFS(int x, int y) {
  grid[x][y] = 0;
  for (int k = 0; k < 4; k++) {
    for (int i = 0; i < 1000; i++) {
      int newX = x + dx[k] * i;
      int newY = y + dy[k] * i;
      if (newX < 0 || newY < 0 || newX >= 1000 || newY > 1000)  continue;
      if (!grid[newX][newY])  continue;
      DFS(newX, newY);
    }
  }
}

void solve()
{
  int n;
  cin >> n;
  
  int x, y;
  while (n--) {
    cin >> x >> y;
    x--; y--;
    grid[x][y] = 1;
  }

  int cnt = 0;
  for (int i = 0; i < 1000; i++) {
    for (int j = 0; j < 1000; j++) {
      if (!grid[i][j])  continue;
      cnt++;
      DFS(i, j);
    }
  }

  cout << cnt - 1 << endl;
}

int main()
{
  MO2
  int t = 1;
  //cin >> t;
  while (t--)
    solve();
  return 0;
}