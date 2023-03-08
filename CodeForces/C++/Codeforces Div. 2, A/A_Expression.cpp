#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>
#include <map>
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

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  int ans = a + b + c;
  ans = max(ans, (a * b * c));
  ans = max(ans, (a + b) * c);
  ans = max(ans, a * (b + c));
  ans = max(ans, a + (b * c));
  ans = max(ans, (a * b) + c);

  cout << ans;
}