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
  ifstream cin("input.txt");
  ofstream cout("output.txt");
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto& x : v) cin >> x;
  sort(all(v));
  if (v[0] * 2 >= v[n - 1])
  {
    cout << 0 << endl;
    return;
  }
  int ans = n;
  int i = 0, j = 0;
  while (j != n)
  {
    if (v[i] * 2 >= v[j])
      j++;
    else
      i++;
    ans = min(ans, n - j + i);
  }
  cout << ans;
}

int main()
{
  solve();
  return 0;
}