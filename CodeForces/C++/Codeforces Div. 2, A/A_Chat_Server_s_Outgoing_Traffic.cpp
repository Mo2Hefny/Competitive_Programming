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
  string name;
  int peeps = 0, l = 0;
  char cmd;
  while (cin >> cmd)
  {
    getline(cin, name);
    if (cmd == '+')
      peeps++;
    else if (cmd == '-')
      peeps--;
    else
    {
      int i = name.find_first_of(':');
      l += (name.size() - i - 1) * peeps;
    }
  }
  cout << l;
}

int main()
{
  solve();
  return 0;
}