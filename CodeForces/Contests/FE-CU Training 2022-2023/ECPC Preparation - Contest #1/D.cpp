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

int gcd(int a, int b)
{
  return b == 0 ? a : gcd(b, a % b);
}

void solve()
{
  int n, m;
  cin >> n >> m;
  set<int> v;
  vector<int> bad;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    v.insert(a);
  }
  int res = m;
  for (int i = 2; i <= m; i++)
  {
    bool skip = false;
    for (auto& b : bad) if (i % b == 0) { res--; skip = true; break; }
    if (skip) continue;
    std::set<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
      int GCD = gcd(i, *it);
      if (GCD != 1)
      {
        res--;
        bad.push_back(i);
        break;
      }
    }
  }
  cout << res << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}