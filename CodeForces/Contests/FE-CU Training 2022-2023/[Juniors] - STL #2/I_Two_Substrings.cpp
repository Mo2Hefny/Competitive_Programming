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
  int p1 = s.find("AB");
  int p2 = s.find("BA", p1 + 2);
  int p4 = s.find("BA");
  int p3 = s.find("AB", p4 + 2);
  if ((p1 != -1 && p2 != -1) || (p3 != -1 && p4 != -1))
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main()
{
  solve();
  return 0;
}