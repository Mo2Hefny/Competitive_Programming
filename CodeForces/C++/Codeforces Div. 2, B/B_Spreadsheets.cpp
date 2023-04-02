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
  string s, col = "";
  cin >> s;
  if (s[0] == 'R' && isdigit(s[1]) && s.find('C') != string::npos)
  {
    int i = s.find('C');
    int r = stoi(s.substr(1, i - 1));
    int c = stoi(s.substr(i + 1));
    string ans;
    while (c > 0)
    {
      c--;
      ans = (char)(c % 26 + 'A') + ans;
      c /= 26;
    }
    cout << ans << r << endl;
  }
  else
  {
    int i = 0;
    while (isalpha(s[i]))
      i++;
    int r = stoi(s.substr(i));
    string c = s.substr(0, i);
    int x = 0;
    for (char ch : c)
      x = x * 26 + ch - 'A' + 1;
    cout << "R" << r << "C" << x << endl;
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}