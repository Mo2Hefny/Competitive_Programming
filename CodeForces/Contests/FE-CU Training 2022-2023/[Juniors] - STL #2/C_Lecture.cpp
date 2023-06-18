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
  for(size_t pos = s.find("WUB"); s.find("WUB") != string::npos; pos = s.find("WUB"))
  {
    if (pos == 0 || s[pos - 1] == ' ')
      s.erase(pos, 3);
    else
      s.replace(pos, 3, " ");
  }
  cout << s;
}

int main()
{
  solve();
  return 0;
}