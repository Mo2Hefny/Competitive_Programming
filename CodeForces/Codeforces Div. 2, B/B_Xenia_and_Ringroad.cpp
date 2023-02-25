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

int main()
{
  int n, t;
  cin >> n >> t;
  vector<int> g(t);
  for (int i = 0; i < t; i++)
    cin >> g[i];
  ll int sec = 0;
  for (int i = 0; i < t; i++)
  {
    if (!i)
      sec += (g[i] - 1);
    else if (g[i] >= g[i - 1])
      sec += (g[i] - g[i - 1]);
    else
      sec += (g[i] + n - g[i - 1]);
  }
  cout << sec;
  return 0;
}