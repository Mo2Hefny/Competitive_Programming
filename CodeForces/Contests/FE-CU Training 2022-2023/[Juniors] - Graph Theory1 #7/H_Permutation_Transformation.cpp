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
vector<int> v, d;
int mn, mx;

void SetDepth(int l, int r, int depth)
{
  if (l > r)
    return;
  int res = l;
  for (int i = l + 1; i <= r; i++)
    if (v[res] < v[i])
      res = i;
  d[res] = depth;
  SetDepth(l, res - 1, depth + 1);
  SetDepth(res + 1, r, depth + 1);
}

void solve()
{
  int n;
  cin >> n;
  mn = 0, mx = n;
  v.resize(n);
  d.resize(n);
  for (auto& x : v)
    cin >> x;

  SetDepth(0, n - 1, 0);

  for (auto x : d)  cout << x << " ";
  cout << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}