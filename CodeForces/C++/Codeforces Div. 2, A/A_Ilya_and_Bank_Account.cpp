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
  int n;
  cin >> n;
  if (n >= 0)
    cout << n << endl;
  else if (n > -100)
    cout << max(n / 10, n % 10) << endl;
  else
  {
    int last_dig = n % 10;
    int n2 = n / 100 * 10 + last_dig;
    cout << max(n, max(n / 10, n2)) << endl;
  }
}

int main()
{
  solve();
  return 0;
}