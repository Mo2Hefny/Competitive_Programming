#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <iomanip>
#include <bitset>
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
  int n, m;
  cin >> n >> m;
  for (int i = 0; m - i >= 0; i = ++i % (n + 1))
    m -= i;
  cout << m;
}

int main()
{
  solve();
  return 0;
}