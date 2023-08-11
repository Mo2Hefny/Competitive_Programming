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
  int n, ans = 0;
  cin >> n;
  vector<int> v(n);
  for (auto& x : v) cin >> x;
  for (int i = 0; i < n / 2; i++)
    ans = __gcd(ans, abs(v[i] - v[n - i - 1]));
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