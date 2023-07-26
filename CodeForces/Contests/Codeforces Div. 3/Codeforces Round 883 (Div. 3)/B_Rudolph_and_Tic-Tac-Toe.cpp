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
  char v[3][3];
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      cin >> v[i][j];

  // row;
  char row = 0, col = 0, diag1 = 0, diag2 = 0;
  for (int i = 0; i < 3; i++)
  {
    row = 0;
    col = 0;
    if (v[i][0] == v[i][1] && v[i][1] == v[i][2] && v[i][0] != '.') row = v[i][0];
    if (v[0][i] == v[1][i] && v[1][i] == v[2][i] && v[0][i] != '.') col = v[0][i];
    if (row || col)
    {
      cout << (row ? row : col) << endl;
      return;
    }
  }

  // diag
  if (v[0][0] == v[1][1] && v[1][1] == v[2][2] && v[1][1] != '.')
    diag1 = v[1][1];
  if (v[2][0] == v[1][1] && v[1][1] == v[0][2] && v[1][1] != '.')
    diag2 = v[1][1];
  if (diag1 || diag2)
  {
    cout << (diag2 ? diag2 : diag1) << endl;
    return;
  }
  cout << "DRAW" << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}