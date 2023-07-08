#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define all(x) (x).begin(), (x).end()
void solve()
{
  int xa, ya, xb, yb, xc, yc;
  cin >> xa >> ya >> xb >> yb >> xc >> yc;
  int steps = 1, prev = 0;
  int disAB = abs(xa- xb) + abs(ya - yb);
  int disAC = abs(xa- xc) + abs(ya - yc);
  int distBC = abs(xb - xc) + abs(yb - yc); 
  cout << (disAB + disAC - distBC) / 2 + 1 << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}