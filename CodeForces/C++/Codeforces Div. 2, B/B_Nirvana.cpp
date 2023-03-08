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
  string n;
  cin >> n;
  ll int max_mul = 1, mul = 1;
  for (auto x : n)
    max_mul *= (x - '0');
  for (int i = 1; i < n.size(); i++)
  {
    mul = pow(9, i);
    int j = n.size() - 1 - i;
    n[j] = n[j] < '0' ? '9' : n[j] - 1;
    for (; j >= 0; j--)
    {
      if (!j && n[0] == '0')
        continue;
      mul *= (n[j] - '0');
    }
    max_mul = max_mul > mul ? max_mul : mul;
  }
  cout << max_mul << endl;
}

int main()
{
  solve();
  return 0;
}