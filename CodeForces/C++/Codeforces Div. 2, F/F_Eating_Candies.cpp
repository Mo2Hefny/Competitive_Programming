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
  vector<int> pr(n);
  for (auto &x : pr)
    cin >> x;
  for (int i = 1; i < n; i++)
    pr[i] += pr[i - 1];
  int ans = 0;
  for (int i = n - 2; i >= 0; i--)
  {
    int sum = pr.back() - pr[i];
    int pos = lower_bound(pr.begin(), pr.begin() + i, sum) - pr.begin();
    if (pos < n && pr[pos] == sum)
      ans = max(ans, n - i + pos);
  }
  cout << ans << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}