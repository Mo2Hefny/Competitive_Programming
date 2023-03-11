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
  string s1, s2;
  cin >> s1 >> s2;
  for (int i = 0; i < s1.size(); i++)
    if (s1[i] == s2[i])
      cout << "0";
    else
      cout << "1";
}

int main()
{
  solve();
  return 0;
}