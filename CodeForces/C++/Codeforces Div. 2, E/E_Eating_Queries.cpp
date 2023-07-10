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
  int n, q;
  cin >> n >> q;
  vector<int> candy(n);
  vector<ll> sm(n);
  for (auto &c : candy)
    cin >> c;
  sort(rall(candy));
  sm[0] = candy[0];
  for (int i = 1; i < n; i++)
    sm[i] = sm[i - 1] + candy[i];

  while (q--)
  {
    ll x;
    cin >> x;
    int ans = lower_bound(all(sm), x) - sm.begin();

    if (ans >= n)
      cout << -1 << endl;
    else
      cout << ans + 1<< endl;
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}