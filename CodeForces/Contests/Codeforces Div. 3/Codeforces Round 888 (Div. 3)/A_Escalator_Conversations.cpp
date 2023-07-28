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
  int n, m, k, h;
  cin >> n >> m >> k >> h;
  vector<int> v(n);
  int ans = 0;
  for (auto& x: v) 
  {
    cin >> x;
    x = abs(x - h);
    if (x && x % k == 0 && x / k < m)
    {
      ans++;
    }
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