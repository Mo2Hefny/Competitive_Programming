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
  vector<vector<int>> v(3, vector<int> (3, 0));
  for (auto& row : v)
    for (auto& x : row)  cin >> x;

  int A_B = v.back()[0] + v.back()[1];
  int C_B = v.front()[1] + v.front()[2];

  int B = 0;
  for (B = 0; B <= 100000; B++)
  {
    int row1 = A_B - B + v[0][1] + v[0][2];
    int row2 = v[1][0] + B + v[1][2];
    int row3 = v[2][0] + v[2][1] + C_B - B;
    if (row1 == row2 && row2 == row3)
    {
      v[0][0] = A_B - B;
      v[1][1] = B;
      v[2][2] = C_B - B;
      break;
    }
  }
  for (auto row : v)
  {
    for (auto x : row)  cout << x <<" ";
  }
}

int main()
{
    solve();
  return 0;
}