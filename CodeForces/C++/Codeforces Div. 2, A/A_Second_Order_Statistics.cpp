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
  int n, mini = 101, bf_min = 101;
  cin >> n;
  vector<int> v(n);
  for (auto &x : v)
  {
    cin >> x;
    mini = min(mini, x);
  }
  for (auto &x : v)
    if (x != mini)
      bf_min = min(bf_min, x);
  if (bf_min == 101)
    cout << "NO";
  else
    cout << bf_min;
}

int main()
{
  solve();
  return 0;
}