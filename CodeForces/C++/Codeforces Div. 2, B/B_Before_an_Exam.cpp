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

bool backtrack(vector<int> mn, vector<int> mx, vector<int>& res, int d, int sum, int mn_s, int mx_s)
{
  if (d == mn.size())
    return !sum;
  mn_s -= mn[d];
  mx_s -= mx[d];
  for (int i = mn[d]; i <= mx[d]; i++)
  {
    if (sum <= mx_s + i && mn_s + i <= sum)
    {
      res.push_back(i);
      if (backtrack(mn, mx, res, d + 1, sum - i, mn_s, mx_s)) return true;
      res.pop_back();
    }
  }
  return false;
}

void solve()
{
  int d, sum;
  cin >> d >> sum;
  vector<int> mn (d);
  vector<int> mx (d);
  int mn_hr, mx_hr;
  vector<int> res;
  for (int i = 0; i < d; i++)
    cin >> mn[i] >> mx[i];
  mn_hr = accumulate(mn.begin(), mn.end(), 0);
  mx_hr = accumulate(mx.begin(), mx.end(), 0);
  if (backtrack(mn, mx, res, 0, sum, mn_hr, mx_hr))
  {
    cout << "YES\n";
    for (auto x : res)  cout << x << " ";
  }
  else
    cout << "NO\n";
}

int main()
{
  solve();
  return 0;
}