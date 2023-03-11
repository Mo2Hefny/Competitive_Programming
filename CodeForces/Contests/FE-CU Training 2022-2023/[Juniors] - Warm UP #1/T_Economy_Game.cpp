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
  ll int n;
  int a, b, c;
  cin >> n;
  for (int a = n / 1234567; a >= 0; a--)
  {
    for (int b = (n - a * 1234567) / 123456; b >= 0; b--)
    {
      for (int c = (n - a * 1234567 - b * 123456) / 1234; c >= 0; c--)
      {
        if (a * 1234567 + b * 123456 + c * 1234 == n)
        {
          cout << "YES";
          return;
        }
      }
    }
  }
  cout << "NO";
}

int main()
{
  solve();
  return 0;
}