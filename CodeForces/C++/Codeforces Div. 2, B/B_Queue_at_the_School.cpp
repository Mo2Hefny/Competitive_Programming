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
  vector<char> g(n);
  for (int i = 0; i < n; i++)
    cin >> g[i];
  for (int i = 0; i < t; i++)
    for (int j = 0; j < g.size() - 1; j++)
      if (g[j] == 'B' && g[j + 1] == 'G')
      {
        g[j] ^= g[j + 1];
        g[j + 1] ^= g[j];
        g[j] ^= g[j + 1];
        j++;
      }
  for (auto x: g)
    cout << x;
  return 0;
}