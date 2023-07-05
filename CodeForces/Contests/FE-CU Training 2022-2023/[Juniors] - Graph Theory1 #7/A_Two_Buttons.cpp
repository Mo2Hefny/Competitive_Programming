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
  int count = 0;
  while (n != m)
  {
    if (m > n)
    {
      if (m % 2)
      {
        m = (m + 1) / 2;
        count += 2;
      }
      else
      {
        m /= 2;
        count++;
      }
    }
    else
    {
      n--;
      count++;
    }
  }
  cout << count;
}

int main()
{
  solve();
  return 0;
}