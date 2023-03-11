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
  int n;
  cin >> n;
  set<char> d;
  vector<char> v;
  for (int i = 0; i < n; i++)
  {
    char b;
    cin >> b;
    d.insert(b);
    v.push_back(b);
  }
  if (d.size() == 2 && (d.count('4') == 1 && d.count('7') == 1)
  || d.size() == 1 && (d.count('4') == 1 || d.count('7') == 1))
  {
    if (accumulate(v.begin(), v.begin() + n / 2, 0) == accumulate(v.end() - n / 2, v.end(), 0))
    {
      cout << "YES" << endl;
      return;
    }
  }
  cout << "NO" << endl;
}

int main()
{
  solve();
  return 0;
}