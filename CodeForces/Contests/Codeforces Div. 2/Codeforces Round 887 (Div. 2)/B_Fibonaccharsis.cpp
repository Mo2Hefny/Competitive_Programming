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
  int n, k;
  cin >> n >> k;

  int ans = 0;
  for (int i = n; i > 0; i--)
  {
    bool valid = true;
    int f3 = n, f2 = i;
    for (int j = 0; j < k - 2; j++)
    {
      int fx = f3 - f2;
      f3 = f2;
      f2 = fx;
      valid &= (f2 <= f3);
      valid &= (f2 >= 0);
      if (!valid) break;
    }
    if (valid) ans++;
  }
  cout << ans << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}