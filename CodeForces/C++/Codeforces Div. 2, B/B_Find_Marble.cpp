#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define all(x) (x).begin(), (x).end()

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int cnt = 0, loop = -1;
int n, s, t;
vector<int> v;

void solve()
{
  cin >> n >> s >> t;
  s--;
  t--;
  v.resize(n);
  for (auto &x : v)
  {
    cin >> x;
    x--;
  }

  int x = s;
  while (x != t)
  {
    if (x == s)
    {
      loop++;
      if (loop)
        break;
    }
    cnt++;
    x = v[x];
  }
  if (loop > 0)
    cout << -1;
  else
    cout << cnt;
}

int main()
{
  solve();
  return 0;
}