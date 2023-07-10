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
  vector<int> v(n);
  vector<ll> sm(n);
  for (auto& x : v) cin >> x;
  sort(rall(v));
  sm[0] = v[0];
  for (int i = 1; i < n; i++)
    sm[i] = sm[i - 1] + v[i];

  while (q--)
  {
    int x, y;
    cin >> x >> y;
    cout << sm[x - 1] - (x - y > 0 ? sm[x - y - 1] : 0) << endl; 
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