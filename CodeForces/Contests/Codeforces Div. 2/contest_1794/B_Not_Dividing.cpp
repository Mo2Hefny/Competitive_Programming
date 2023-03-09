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
  int n;
  cin >> n;
  vector<ll int> v(n);
  for (auto &x : v)
    cin >> x;
  for (int i = 0; i < n; i++)
    if (v[i] == 1)
      v[i]++;
  for (int i = 0; i < n - 1; i++)
    if (v[i + 1] % v[i] == 0)
      v[i + 1]++;
  for (auto x : v)
    cout << x << " ";
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
    cout << endl;
  }
  return 0;
}
