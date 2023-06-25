#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define all(x) (x).begin(), (x).end()

void solve()
{
  int s, n;
  cin >> s >> n;
  vector<pair<int, int>> v(n);
  for (auto &x : v)
  {
    cin >> x.first >> x.second;
  }
  sort(all(v), [](auto& a, auto& b) { return a.first < b.first;});
  for (auto x : v)
  {
    if (s > x.first)
      s += x.second;
    else
    {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
}

int main()
{
  solve();
  return 0;
}