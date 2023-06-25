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
  int n, m;
  cin >> n >> m;
  if (n < m)
  {
    cout << -1;
    return;
  }
  if (n == m)
  {
    cout << m;
    return;
  }
  int k = ceil(float(n) / (2 * m)) * m;
  int mn = k;
  while(k)
  {
    if (n % k)
    {
      n--;
      k--;
    }
    else
    {
      n -= 2;
      k--;
    }
  }
  if (n)
  {
    cout << -1;
    return;
  }
  else
  {
    cout << mn;
    return;
  }
}

int main()
{
  solve();
  return 0;
}