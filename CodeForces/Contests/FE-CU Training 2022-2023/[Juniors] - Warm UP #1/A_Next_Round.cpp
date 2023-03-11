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
  int k, n;
  cin >> n >> k;
  vector<int> score(n);
  for (auto &x : score)
    cin >> x;
  for (int i = 0; i < n; i++)

    if (score[i] <= 0 || score[i] < score[k - 1])
    {
      cout << i;
      return;
    }
  cout << n;
}

int main()
{
  solve();
  return 0;
}