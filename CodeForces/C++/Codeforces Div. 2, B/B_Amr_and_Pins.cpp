#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define all(x) (x).begin(), (x).end()

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void solve()
{
  int r, x, y, x1, y1, res = 0;
  cin >> r >> x >> y >> x1 >> y1;
  long double distance = pow(x - x1, 2) + pow(y - y1, 2);
  distance = sqrt(distance);
  while (distance > 0)
  {
    res++;
    distance -= r * 2;
  }
  cout << res << endl;
}

int main()
{
  solve();
  return 0;
}