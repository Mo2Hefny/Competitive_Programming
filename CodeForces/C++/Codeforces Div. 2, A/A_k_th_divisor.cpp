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
  ll n, k;
  cin >> n >> k;
  vector<ll> div;
  // get divisors
  for (ll i = 1; i <= n / i; i++)
  {
    if (n % i == 0)
    {
      div.push_back(i);
      if (i * i != n)
        div.push_back(n / i);
    }
  }
  sort(all(div));
  if (div.size() < k) cout << -1;
  else cout << div[--k];
}

int main()
{
  //int t;
  //cin >> t;
  //while (t--)
    solve();
  return 0;
}