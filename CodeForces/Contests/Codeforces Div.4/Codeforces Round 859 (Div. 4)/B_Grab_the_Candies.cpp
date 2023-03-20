
#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>
#include <deque>
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
 vector<int> v(n);
 for (auto& x : v)  cin >> x;
 partition(v.begin(),v.end(),[] (int x) { return !(x & 1);  });
 int e = 0, o = 0;
 for (auto x: v)
  if (x & 1)
    o += x;
  else
    e += x;
  
 if (e > o)
  cout << "YES\n";
 else
  cout << "NO\n";

}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}