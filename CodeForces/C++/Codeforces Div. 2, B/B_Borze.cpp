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
  string s;
  cin >> s;
  int n = 0;
  for (int i = 0; i < s.size(); i+= 2)
  {
    if (s[i] == '.')
    {
      cout << '0';
      i--;
    }
    else if (s[i] == '-' && s[i + 1] == '.')
      cout << '1';
    else if (s[i] == '-' && s[i + 1] == '-')
      cout << '2';
  }
}

int main()
{
  solve();
  return 0;
}