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

struct compare
{
  inline bool operator()(const std::string &first,
                         const std::string &second) const
  {
    return first.size() < second.size();
  }
};

void solve()
{
  int n, m;
  cin >> n;
  m = n > 2 ? (n - 1) * 2 : n;
  vector<string> v(m);
  for (auto &x : v)
    cin >> x;
  compare c;
  std::sort(v.begin(), v.end(), c);
  int check = (n / 2 - 1) * 2;
  for (int i = 0; i < v[check].size(); i++)
  {
    if (v[check][i] != v[check + 1][v[check + 1].size() - 1 - i])
    {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
