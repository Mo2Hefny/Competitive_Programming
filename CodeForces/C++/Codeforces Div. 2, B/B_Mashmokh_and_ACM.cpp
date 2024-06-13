#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MO2                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MOD (ll)(1e9 + 7)

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

vector<vector<int>> mul;

void sieve(int n) {
  mul.resize(n + 1);
  for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n; j += i) {
      mul[i].push_back(j);
    }
  }
}

void solve()
{
  int n, k;
  cin >> n >> k;
  vector<vector<ll>> dp(k, vector<ll> (n + 1, 1));
  sieve(n);
  for (int i = k - 2; i >= 0; i--) {
    for (int j = n / 2; j > 0; j--) {
      ll sum = 0;
      for (auto& x : mul[j]) {
        sum += dp[i + 1][x] % MOD;
        sum %= MOD;
      }
      dp[i][j] = sum;
    }
  }

  ll sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += dp[0][i] % MOD;
    sum %= MOD;
  }

  cout << sum << endl;
}

int main()
{
  MO2
  int t = 1;
  //cin >> t;
  while (t--)
    solve();
  return 0;
}