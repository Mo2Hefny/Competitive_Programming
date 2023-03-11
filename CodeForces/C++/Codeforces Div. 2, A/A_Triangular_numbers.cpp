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
  int n;
  cin >> n;
  for (int i = 0; i * (i + 1) <= 2 * n; i++)
  {
    if (i * (i + 1) == 2 * n)
    {
      cout << "YES";
      return;
    }
  }
  cout << "NO";
}

int main()
{
  solve();
  return 0;
}