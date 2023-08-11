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

#define N (ll)(1e6 + 1)
int prime[N];

set<ll> sieve() {
  set<ll> ans;
  memset(prime, 1, sizeof prime);
  prime[0] = prime[1] = 0;
  for (ll i = 2; i < N; i++)
  {
    if (prime[i])
    {
      for (ll j = i * i; j < N; j += i) {
        prime[j] = 0;
      }
      ans.insert(i * i);
    }
  }
  return ans;
}

void solve()
{
  // T prime = prime * prime | 1 * T prime
  int n;
  cin >> n;
  vector<ll> v(n);
  set<ll> tprime = sieve();
  for (auto& x : v) 
  {
    cin >> x;
    if (tprime.find(x) != tprime.end()) cout << "YES\n";
    else cout << "NO\n";
  }
}

int main()
{
  //int t;
  //cin >> t;
  //while (t--)
    solve();
  return 0;
}