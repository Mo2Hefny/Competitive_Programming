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

void divisor(int n, int m, vector<int>& occ, int& cnt, int addedVal) {
  for (int i = 1; i <= n / i && i <= m; i++) {
    if (n % i == 0) {
      occ[i] += addedVal;
      if ((occ[i] == 1 && addedVal == 1) || (occ[i] == 0 && addedVal == -1))  cnt += addedVal;
      if (i * i != n && n / i <= m) {
        occ[n / i] += addedVal;
        if ((occ[n / i] == 1 && addedVal == 1) || (occ[n / i] == 0 && addedVal == -1))  cnt += addedVal;
      }
    }
  }
}

void solve()
{
  int n, m;
  cin >> n >> m;
  vector<int> a(n), occ(m + 1, 0);
  for (auto& x : a) cin >> x;
  sort(all(a));
  int l, r, cnt, mn;
  l = r = cnt = 0;
  mn = INT_MAX;
  while (l < n) {
    while (r < n && cnt < m) {
      divisor(a[r++], m, occ, cnt, 1);
    }
    if (cnt >= m)
      mn = min(mn, a[r - 1] - a[l]);
    
    divisor(a[l++], m, occ, cnt, -1);
  }
  cout << (mn == INT_MAX ? -1 : mn) << endl;
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