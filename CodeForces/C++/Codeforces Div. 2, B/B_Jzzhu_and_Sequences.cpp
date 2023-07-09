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

void solve()
{
  ll f1, f2, n;
  vector<ll> v(3);
  cin >> f1 >> f2 >> n;
  v[0] = f1;
  v[1] = f2;
  v[2] = v[1] - v[0];
  n = (n - 1) % 6;
  ll mod = 1000000007;
  int mul = (n > 2 ? -1 : 1);
  cout << ((mul* v[n % 3]) % mod + mod) % mod;
}

int main()
{
  solve();
  return 0;
}