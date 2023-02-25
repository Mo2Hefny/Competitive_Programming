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
  long long n, k;
  cin >> n >> k;
  if (k <= (n + 1) / 2)
    cout << k * 2 - 1 << endl;
  else
    cout << (k - (n + 1) / 2) * 2 << endl;
  return 0;
}