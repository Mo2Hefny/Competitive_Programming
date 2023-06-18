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
  map<string, int> s;
  vector<int> occ(n);
  vector<string> strings(n);
  for (int i = 0; i < n; i++)
  {
    string str;
    cin >> str;
    s[str]++;
    occ[i] = s[str];
    strings[i] = str;
  }
  int i = 0;
  for (auto it : strings)
  {
    if (occ[i] == 1)
      cout << "OK" << endl;
    else
      cout << it << occ[i] - 1 << endl;
    i++;
  }
}

int main()
{
  solve();
  return 0;
}