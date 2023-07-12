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

bool g[101][101] = {0};
bool cnt[101] = {0};
vector<bool> visited;

void dfs(int row)
{
  visited[row] = true;

  for (int i = 1; i < 101; i++)
  {
    if (g[row][i] && !visited[i])
      dfs(i);
  }
}

void solve()
{
  int n, m, zeros = 0, ans = 0;
  cin >> n >> m;
  visited.resize(m + 1);
  fill(all(visited), false);
  for (int i = 0; i < n; i++)
  {
    vector<int> lang;
    int a;
    cin >> a;
    if (!a)
      zeros++;
    while (a--)
    {
      int l;
      cin >> l;
      lang.push_back(l);
      cnt[l] = 1;
    }
    for (int i = 1; i < lang.size(); i++)
    {
      g[lang[i]][lang[i - 1]] = 1;
      g[lang[i - 1]][lang[i]] = 1;
    }
  }

  for (int i = 1; i <= m; i++)
  {
    if (cnt[i] && !visited[i])
    {
      ans++;
      dfs(i);
    }
  }
  if (ans)
    cout << zeros + ans - 1;
  else
    cout << zeros;
}

int main()
{
  solve();
  return 0;
}