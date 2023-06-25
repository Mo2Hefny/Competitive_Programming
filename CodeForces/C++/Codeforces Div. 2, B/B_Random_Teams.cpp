#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define all(x) (x).begin(), (x).end()

ll comb(ll  n)
{
    if(n == 2)
        return 1;
    ll sum = 1;
    for(ll i = n; i > n-2; i--)
        sum *= i;
    return sum / 2;
}

void solve()
{
  ll n, m;
  cin >> n >> m;
  ll mn = n / m;
  ll r = n % m;
  ll total = comb(mn) * (m - r) + comb(mn + 1) * r;
  cout << total << " ";
  ll mx = n - m + 1;
  cout << comb(mx);
}

int main()
{
  solve();
  return 0;
}