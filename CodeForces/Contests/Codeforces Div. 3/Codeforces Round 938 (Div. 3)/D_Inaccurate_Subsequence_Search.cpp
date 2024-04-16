#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MO2                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void solve()
{
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> a(n);
  map<int, int> b, occ;
  for (auto& x : a) cin >> x;
  for (int i = 0; i < m; i++) {
    int num;
    cin >> num;
    b[num]++;
  }
  int l, r, cnt, res;
  l = r = cnt = res = 0;
  while (l <= n - m) {
    while (r - l < m && r < n) {
      occ[a[r]]++;
      if (b[a[r]] && b[a[r]] >= occ[a[r]]) cnt++;
      r++;
    }
    if (cnt >= k && r - l == m) res++;
    occ[a[l]]--;
    if (b[a[l]] && b[a[l]] > occ[a[l]]) cnt--;
    l++;
  }
  cout << res << endl;
}

int main()
{
  MO2
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}