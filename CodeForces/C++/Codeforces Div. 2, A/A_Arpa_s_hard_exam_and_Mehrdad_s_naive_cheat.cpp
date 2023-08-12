#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void solve()
{
  int n;
  cin >> n;
  if (n == 0) { cout << 1 << endl; return; }
  n %= 4;
  if (n == 0) cout << 6 << endl;
  else cout << (int)pow(8, n) % 10 << endl;
}

int main()
{
  //int t;
  //cin >> t;
  //while (t--)
    solve();
  return 0;
}