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
  int m;
  cin >> m;
  vector<vector<int>> v (2, vector<int> (m));
  vector<vector<int>> s (2, vector<int> (m, 0));
  for (int i = 0; i < 2; i++)
    for (auto& x : v[i])  cin >> x;
  s[1][0] = v[1][0];
  for (int i = 0; i < 2; i++)
    for (int j = 1; j < m; j++) s[i][j] = s[i][j - 1] + v[i][j];

  int row1_mx, row2_mx, mx_score, temp1, temp2;
  mx_score = INT_MAX;
  for (int i = 0; i < m; i++)
  {
    temp1 = s[0].back() - s[0][i];
    temp2 = i ? s[1][i - 1] : 0;
    if (max(temp1, temp2) > mx_score)  continue;
    mx_score = max(temp1, temp2);
  }
  cout << mx_score << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}