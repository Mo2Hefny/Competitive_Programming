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
  int n;
  cin >> n;
  vector<int> sum(3, 0);
  for (int i = 0; i < n; i++)
  {
    int a, b, c;
    cin >> a >> b >> c;
    sum[0] += a;
    sum[1] += b;
    sum[2] += c;
  }
  if (sum[0] || sum[1] || sum[2])
    cout << "NO" << endl;
  else
    cout << "YES" << endl;

  return 0;
}
