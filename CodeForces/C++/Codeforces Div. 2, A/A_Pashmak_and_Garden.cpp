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
  int x1, y1, x2, y2;
  cin >> x1 >> y1;
  cin >> x2 >> y2;
  int l;
  if (x1 == x2)
  {
    l = abs(y1 - y2);
    printf("%d %d %d %d\n",x1 + l, y1, x2 + l, y2);
  }
  else if (y1 == y2)
  {
    l = abs(x1 - x2);
    printf("%d %d %d %d\n",x1, y1 + l, x2, y2 + l);
  }
  else if (abs(x1 - x2) != abs(y1 - y2))
    cout << -1 << endl;
  else
  {
    printf("%d %d %d %d\n",x1, y2, x2, y1);
  }
}

int main()
{
  solve();
  return 0;
}