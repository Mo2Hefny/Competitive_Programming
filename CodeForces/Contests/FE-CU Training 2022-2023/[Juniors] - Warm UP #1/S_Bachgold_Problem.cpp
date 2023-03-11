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
  vector<int> v;
  while (n > 3)
  {
    v.push_back(2);
    n -= 2;
  }
  v.push_back((n & 1) ? 3 : 2);
  cout << v.size() << endl;
  for (auto x : v)   cout << x << " ";
}

int main()
{
  solve();
  return 0;
}