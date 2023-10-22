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
#include <climits>

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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        int zero = count(a.begin(), a.end(), 0);
        for (int i = 0;;i++)
        {
          // Element can't be greater than all elements in (a) except in edge case
          if (!count(a.begin(), a.end(), i)) // Element not found in (a)
          {
            cout << i;
            return;
          }
          if (i == 0 && zero <= (n + 1) / 2)  // 0 0 0 0 1 2 3
          {
            cout << 0;
            return;
          }
          // 0 0 0 0 0 0 0 0 0 0 0 0 0 0 [shield] 1 1 1
          else if (i && 0 < a.size() - zero - count(a.begin(), a.end(), i))
          {
             cout << i;
            return;
          }
        }
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