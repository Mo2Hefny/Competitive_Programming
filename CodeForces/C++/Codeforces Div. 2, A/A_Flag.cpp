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
  char c, prev = 'a';
  for (int i = 0; i < n; i++)
  {
    set<char> row_clrs;
    for (int j = 0; j < m; j++)
    {
      cin >> c;
      row_clrs.insert(c);
    }
    if (row_clrs.size() != 1 || prev == *(row_clrs.begin()))
    {
      cout << "NO";
      return;
    }
    prev = *(row_clrs.begin());
  }
  cout << "YES";
}

int main()
{
  solve();
  return 0;
}