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
vector<vector<bool>> alpha(26, vector<bool>(26, 0));
vector<bool> present(26, 0), visited(26, 0);
int mn, mx;

void dfs(int row)
{
  if (visited[row])
    return;
  visited[row] = true;
  
  for (int i = 0; i < 26; i++)
    if (!visited[i] && alpha[row][i])
      dfs(i);
}

void solve()
{
  int n;
  cin >> n;
  while (n--)
  {
    string s;
    cin >> s;
    for (auto &i : s)
    {
      present[i - 'a'] = true;
      for (auto &j : s)
        if (i != j)
        {
          alpha[i - 'a'][j - 'a'] = 1;
          alpha[j - 'a'][i - 'a'] = 1;
        }
    }
  }
  int cnt = 0;
  for (int i = 0; i < 26; i++)
  {
    if (present[i] && !visited[i])
    {
      cnt++;
      dfs(i);
    }
  }
  cout << cnt << endl;
}

int main()
{
  solve();
  return 0;
}