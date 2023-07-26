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
  int n, d, h;
  cin >> n >> d >> h;
  vector<int> v(n);
  for (auto &x : v)
    cin >> x;

  sort(all(v));
  long double ans = (long double) d * h / 2.0;
  for (int i = 0; i < n - 1; i++)
  {
    if (v[i + 1] - v[i] >= h)
      ans += (long double) d * h / 2.0;
    else
    {
      long double diff = v[i + 1] - v[i];
      long double b_top = (long double) (h - diff) * d / h;
      ans += (long double) (d + b_top) / 2.0 * diff;
    }
  }
  cout << fixed << setprecision(6) << ans << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}