
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
  int n, q;
  cin >> n >> q;
  vector<int> v(n);
  vector<int> pre_sum(n + 1, 0);
  for (int i = 0; i <n; i++)
  {
    cin >> v[i];
    pre_sum[i + 1] = pre_sum[i] + v[i];
  }    
  while (q--)
  {
    int l, r, k;
    cin >> l >> r >> k;
    int temp = pre_sum.back() - pre_sum[r] + pre_sum[l - 1];
    temp += k * (r - l + 1);
    if (temp & 1)
      cout << "YES\n";
    else
      cout << "NO\n";
  }


}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}