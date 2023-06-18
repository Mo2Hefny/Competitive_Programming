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
  int n;
  cin >> n;
  vector<int> cubes(n);
  for (auto& x : cubes) cin >> x;
  sort(cubes.begin(), cubes.end());
  for (auto x : cubes) cout << x << " ";
}

int main()
{
  solve();
  return 0;
}