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
#define all(x) (x).begin(), (x).end()

void solve()
{
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  float perTrip = float(b) / m;
  if (perTrip >= a)
  {
    cout << n * a << endl;
    return;
  }
  int cost = (n / m) * b;
  int left = n % m;
  if (left)
  {
    cost += (a * left < b) ? a * left : b;
  }
  cout << cost;
}

int main()
{
  solve();
  return 0;
}