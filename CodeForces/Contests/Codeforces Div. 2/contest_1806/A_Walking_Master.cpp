#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>
#include <map>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cstring>
#include <set>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

void solve()
{
  ll int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (b > d)
  {
    cout << -1;
    return;
  }
  int sum = 0;
  while (a != c || b != d)
  {
    if (a < c && b == d)
    {
      cout << -1;
      return;
    }
    if (d > b)
    {
      sum += d - b;
      a += d - b;
      b = d;
    }
    if (a > c)
    {
      sum += a - c;
      a = c;
    }
  }
  cout << sum;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
    cout << endl;
  }
  return 0;
}