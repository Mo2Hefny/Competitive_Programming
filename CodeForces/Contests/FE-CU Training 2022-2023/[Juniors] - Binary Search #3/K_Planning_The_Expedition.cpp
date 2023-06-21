#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

void solve()
{
  int n, m;
  cin >> n >> m;
  vector<int> v(101, 0);
  for (int i = 0; i < m; i++)
  {
    int a;
    cin >> a;
    v[a]++;
  }
  sort(v.rbegin(), v.rend());
  int l = 1, r = v[0];
  while (l <= r)
  {
    int hungry = n;
    int mid = (r + l + 1) / 2;
    for (auto x : v)
    {
      if (x - mid >= 0)
      {
        hungry -= x / mid;
      }
      else if (x - mid < 0 || hungry <= 0)
        break;
    }
    if (hungry <= 0)
      l = mid + 1;
    else
      r = mid - 1;
  }
  cout << r << endl;
}

int main()
{
  solve();
  return 0;
}