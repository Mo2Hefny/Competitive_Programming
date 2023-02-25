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
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    string t1, t2;
    cin >> n >> m >> t1 >> t2;
    reverse(t2.begin(),t2.end());
    t1 += t2;
    int count = 0;
    for (int i = 1; i < n + m; i++) count += t1[i - 1] == t1[i];
    cout << (count <= 1 ? "YES\n" : "NO\n");

  }
  return 0;
}