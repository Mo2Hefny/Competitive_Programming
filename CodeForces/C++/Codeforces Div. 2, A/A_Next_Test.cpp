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
  int n, i;
  cin >> n;
  set<int> v;
  for (int i = 0; i < n; i++)
  {
    int b; cin >> b;
    v.insert(b);
  }

  for (i = 1; i <= 3000; i++)
  {
    if (v.count(i) == 0)
    {
      cout << i;
      return;
    }
  }
  cout << i;
}

int main()
{
  solve();
  return 0;
}