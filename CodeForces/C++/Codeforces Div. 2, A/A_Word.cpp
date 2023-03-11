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
  string s;
  int mode = 0;
  cin >> s;
  for (auto x : s)
    if (islower(x))
      mode++;
    else
      mode--;
  if (mode >= 0)
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
  else
    std::transform(s.begin(), s.end(), s.begin(), ::toupper);
  cout << s;
}

int main()
{
  solve();
  return 0;
}