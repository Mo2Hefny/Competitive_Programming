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
  int n, m, sum = 0;
  cin >> n >> m;
  vector<int> v(n);
  for (auto& x : v) cin >> x;
  sort(v.begin(), v.end());
  for (int i = 0; i < m && v[i] < 0; i++)
    sum -= v[i];
  cout << sum;
}

int main()
{
  solve();
  return 0;
}