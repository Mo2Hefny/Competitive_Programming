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

ll solve1(ll l, ll r) {
  int b = floor(log2(r));
  if (l == r) return l;
  else if ((1ll << (b + 1)) - 1 == r)  return r ;
  else if ((1ll << b) <= l) return solve1(l - (1ll << b), r - (1ll << b)) + (1ll << b);
  else return (1ll << b) - 1;
}

void solve()
{
  ll l, r;
  cin >> l >> r;
  cout << solve1(l, r) << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}