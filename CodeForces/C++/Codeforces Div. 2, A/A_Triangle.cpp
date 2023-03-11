#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <iomanip>
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
  vector<int> l(4);
  for (auto& x: l) cin >> x;
  sort(l.rbegin(), l.rend());
  for (int i = 0; i < 2; i++)
  {
    if (l[i] < l[i + 1] + l[i + 2])
    {
      cout << "TRIANGLE\n";
      return;
    }
  }
  for (int i = 0; i < 2; i++)
  {
    if (l[i] == l[i + 1] + l[i + 2])
    {
      cout << "SEGMENT\n";
      return;
    }
  }
  cout << "IMPOSSIBLE\n";

}

int main()
{
  solve();
  return 0;
}