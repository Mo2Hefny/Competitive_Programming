
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
 int a, b, c;
 cin >> a >> b >> c;
 if (a + b == c)
  cout << "+\n";
 else
  cout << "-\n";

}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}