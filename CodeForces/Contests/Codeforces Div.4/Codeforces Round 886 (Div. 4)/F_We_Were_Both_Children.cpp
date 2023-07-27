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

ll factorize(ll n, map<int,int>& m){
  ll i;
  ll ans = 0;
  for (i = 1; i * i < n; i++)
  {
    if (n % i == 0) ans += m[i] +  m[n / i];
  }
  if (i * i == n)
  ans += m[i];
  return ans;
}

void solve()
{
  ll n;
  cin >> n;
  vector<ll> v(n);
  map<int, int> m;
  for (auto &x : v)
  {
    cin >> x;
    m[x]++;
  }
  sort(all(v));
  ll mx = 0;
  for (ll i = 1; i <= n; i++)
  {
    ll ans = factorize(i, m);
    mx = max(mx, ans);
  }
  cout << mx << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}