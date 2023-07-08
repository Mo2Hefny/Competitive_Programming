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
  int n, k, x;
  vector<int> v;
  int cnt = 0;
  cin >> n >> k >> x;
  if (k == x && k == 1)
  {
    cout << "NO\n";
    return;
  }
  if (x != 1)
  {
    cout << "YES\n";
    cout << n << endl;
    for (int i = 0; i < n; i++)
      cout << "1 ";
    cout << endl;
  }
  else
  {
    if (n & 1)
    {
      if (k <= 2)
      {
        cout << "NO\n";
        return;
      }
      else
      {
        cout << "YES\n";
        cout << n / 2 << endl;
        cout << "3 ";
        for (int i = 0; i < n - 3; i += 2)
          cout << "2 ";
        cout << endl;
      }
    }
    else
    {
      cout << "YES\n";
      cout << n / 2 << endl;
      for (int i = 0; i < n; i += 2)
        cout << "2 ";
      cout << endl;
    }
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