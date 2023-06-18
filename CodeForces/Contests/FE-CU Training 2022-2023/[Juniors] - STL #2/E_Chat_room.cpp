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
  queue<char> word({'h', 'e', 'l', 'l', 'o'});
  for (int i = 0; i < s.size() && !word.empty(); i++)
    if (word.front() == s[i])
      word.pop();
      
  if (word.empty())
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main()
{
  solve();
  return 0;
}