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
  ll int n, m, a;
  cin >> n >> m >> a;
  cout << (ll)(ceil((double)n/a) * ceil((double)m/a)) << endl;
}

int main()
{
  solve();
  return 0;
}