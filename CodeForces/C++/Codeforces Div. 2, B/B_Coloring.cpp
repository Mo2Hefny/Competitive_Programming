#include <bits/stdc++.h>

using namespace std;
int main()
{
  int t, n, m, k;
  cin >> t;
  while (t--)
  {
    cin >> n >> m >> k;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
      cin >> v[i];
    int mx = *max_element(v.begin(), v.end());
    int cnt = count(v.begin(), v.end(), mx);
    bool f = 1;
    if (mx > (n / k))
      if (mx == (n / k) + 1)
        if (cnt <= (n % k))
          f = 1;
        else
          f = 0;
      else
        f = 0;
    if (f)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}