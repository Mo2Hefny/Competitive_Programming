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
  int n, d;
  cin >> n >> d;
  int jokes = (n - 1) * 2;
  vector<int> v(n);
  for (auto& x : v)
  {
    cin >> x;
    d -= x;
  }
  d -= jokes * 5;
  if (d < 0)
  {
    cout << -1;
    return;
  }
  if ( d > 0)
    jokes += d / 5;
  cout << jokes;  
}

int main()
{
  solve();
  return 0;
}