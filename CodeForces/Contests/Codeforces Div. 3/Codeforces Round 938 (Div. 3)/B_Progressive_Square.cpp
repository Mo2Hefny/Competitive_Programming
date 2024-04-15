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

void solve()
{
  int n, c, d;
  cin >> n >> c >> d;
  vector<ll> b(n*n);
  vector<ll> a(n*n);
  for (auto& x : b) cin >> x;
  sort(all(b));
  a[0] = b[0];
  for (int i = 0; i < n; i++) {
    for (int j = 1; j < n; j++) {
      a[n*i + j] = a[n*i + j - 1] + d;
    }
    if (i < n - 1)
      a[n*(i + 1)] = a[n*i] + c;
  }
  sort(all(a));
  for (int i = 0; i < n*n; i++) {
    if (a[i] != b[i]) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}

int main()
{
  MO2
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}