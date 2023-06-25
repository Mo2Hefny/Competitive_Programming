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
  int n, l;
  cin >> n >> l;
  vector<int> v(n);
  for (auto& x : v) cin >> x;
  sort(all(v));
  int longest = max(v[0] * 2, (l - v[n - 1]) * 2);
  for (int i = 1; i < n; i++)
  {
    longest = max(longest, v[i] - v[i - 1]);
  }
  printf("%.10f", longest / 2.0);
}

int main()
{
  solve();
  return 0;
}