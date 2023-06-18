#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>
#include <map>
#include <queue>
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
  string s;
  cin >> s;
  vector<char> v;
  for (auto& x: s)
  {
    x = tolower(x);
    if (x == 'a' || x == 'o' || x == 'y' || x == 'e' || x == 'u' || x == 'i')
      continue;
    v.push_back('.');
    v.push_back(x);
  }
  for (auto x : v)  cout << x;
}

int main()
{
  solve();
  return 0;
}