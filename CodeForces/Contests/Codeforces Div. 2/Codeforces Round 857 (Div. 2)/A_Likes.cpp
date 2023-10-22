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
  int n, likes = 0;
  cin >> n;
  vector<int> l(n);
  for (auto &x : l)
    cin >> x;
  sort(l.rbegin(), l.rend());

  for (auto x : l)
  {
    likes = x > 0 ? likes + 1 : likes - 1;
    cout << likes << " ";
  }
  cout << endl;
  for (int i = 1, j = 1; i <= n; i++)
    if (i <= n - likes)
      cout << (i % 2) << " ";
    else
      cout << j++ << " ";

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
