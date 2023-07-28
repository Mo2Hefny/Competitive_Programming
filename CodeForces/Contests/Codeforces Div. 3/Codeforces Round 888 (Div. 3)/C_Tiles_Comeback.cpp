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
  int n, k;
  cin >>n >> k;
  vector<int> v(n);
  vector<int> s;
  for (auto& x : v) cin >> x;
  int temp = k;
  for (auto x : v)
  {
    if (x == v[0] && temp)
    {
      s.push_back(x);
      temp--;
    }
    else if (!temp)
    {
      s.push_back(x);
    }
  }
  for (int i = s.size() - 1; i >= 0; i--)
  {
    if (s[i] == s.back() && k) k--;
  }
  cout << (k <= 0 ? "YES\n" : "NO\n");

}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}