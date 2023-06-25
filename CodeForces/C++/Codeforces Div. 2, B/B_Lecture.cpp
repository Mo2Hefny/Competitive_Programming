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
  int n, m;
  cin >> n >> m;
  map<string, string> dic;
  vector<string> v(n);
  for (int i = 0; i < m; i++)
  {
    string a, b;
    cin >> a >> b;
    dic[a] = b;
  }
  for (auto& x : v) cin >> x;
  for (auto& x : v)
      cout << (dic[x].size() < x.size() ? dic[x] : x) << " ";
}

int main()
{
  solve();
  return 0;
}