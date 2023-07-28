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
  int n;
  cin >> n;
  vector<ll> v(n - 1);
  set<ll> s;
  for (auto& x : v) cin >> x;
  for (int i = n - 2; i > 0; i--)
  {
    v[i] -= v[i - 1];
  }
  for (int i = 1; i <= n; i++)  s.insert(i);
  ll temp = 0;
  for (auto& x : v)
  {
    if (s.count(x)) s.erase(x);
    else if (!temp)
      temp = x;
    else
    {
      cout << "NO\n";
      return;
    }
  }
  if (s.size() == 1 || (s.size() == 2 && temp == *s.begin() + *s.rbegin()))
    cout << "YES\n";
  else
    cout << "NO\n";

}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}