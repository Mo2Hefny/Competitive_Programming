
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
  string s = "codeforces";
  char c;
  cin>> c;
  if (s.find(c) != std::string::npos)
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main()
{
  int t;
  cin >> t;
  while(t--)
    solve();
  return 0;
}