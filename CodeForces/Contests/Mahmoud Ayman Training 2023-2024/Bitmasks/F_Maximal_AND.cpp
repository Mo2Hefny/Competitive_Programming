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
  int n, k, ans = 0;
  cin >> n >> k;
  int cnt[31] = {0};
  for (int j = 0; j < n; j++)
  {
    int b;
    cin >> b;
    for (int i = 30; i >= 0; i--)
      if ((b >> i) & 1) cnt[i]++;
  }

  for (int i = 30; i >= 0; i--) {
    if (cnt[i] == n) ans |= (1 << i);
    else if (cnt[i] + k >= n) {
      k -= (n - cnt[i]);
      ans |= (1 << i);
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