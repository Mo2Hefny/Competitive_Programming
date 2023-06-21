#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

void solve()
{
  int n, a, b;
  cin >> n >> a >> b;
  int l = 1, r = max(a, b);
  while(l <= r)
  {
    int mid = l + (r - l) / 2;
    if (a / mid + b / mid >= n && a >= mid && b >= mid)
      l = mid + 1;
    else
      r = mid - 1;
  }
  cout << r << endl;
}

int main()
{
  solve();
  return 0;
}