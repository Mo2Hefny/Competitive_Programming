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
  double res = 0;
  for (int i = 0; i < n; i++)
  {
    int perc;
    cin >> perc;
    res += (double)perc/n;
  }
  printf("%.12f\n", res);
}

int main()
{
  solve();
  return 0;
}