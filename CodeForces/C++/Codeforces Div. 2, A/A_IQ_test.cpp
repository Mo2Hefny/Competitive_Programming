#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <iomanip>
#include <string>
#include <set>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

void solve()
{
  int n;
  cin >> n;
  vector<int> l(n);
  for (auto& x: l) cin >> x;
  int norm = (l[0] & 1) + (l[1] & 1) + (l[2] & 1) > 1;
  for (int i = 0; i < n; i++)
  {
    if (l[i] % 2 != norm)
    {
      cout << i + 1;
      return;
    }
  }
}

int main()
{
  solve();
  return 0;
}