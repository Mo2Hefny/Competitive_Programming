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

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    ll int n;
    cin >> n;
    vector<ll int> a(n), b(n);
    for (auto &x : a)
      cin >> x;
    for (auto &x : b)
      cin >> x;
    vector<ll int> chng(n), sum(n, 0);
    chng = a;
    for (ll int i = 0, j; i < n; i++)
    {
      for (j = i; j >= 0; j--)
      {
        sum[i] += min(chng[j], b[i]);
        chng[j] -= min(chng[j], b[i]);
        if (chng[j] < 0)
          chng[j] = 0;
      }
      cout << sum[i] << " ";
    }
    cout << endl;
  }

  return 0;
}