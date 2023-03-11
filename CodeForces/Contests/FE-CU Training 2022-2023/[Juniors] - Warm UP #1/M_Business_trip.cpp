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
  int k;
  cin >> k;
  vector<int> v(12);
  for (auto &x : v)
    cin >> x;
  sort(v.rbegin(), v.rend());
  int i;
  for (i = 0; i < v.size() && k > 0; i++)
    k -= v[i];
  cout << (k > 0 ? -1 : i);
}

int main()
{
  solve();
  return 0;
}