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
  vector<char> s1, s2;
  string str1, str2, str3;
  cin >> str1 >> str2 >> str3;
  str1.append(str2);
  for (auto x : str1) s1.push_back(x);
  for (auto x : str3) s2.push_back(x);

  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());
  if (s1.size() != s2.size())
  {
    cout << "NO\n";
    return;
  }
  for (int i = 0; i < s1.size(); i++)
  {
    if (s1[i] != s2[i])
    {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}

int main()
{
  solve();
  return 0;
}