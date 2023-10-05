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
  int x;
  cin >> x;
  if (x == 1) cout << 3 << endl;
  else {
    int i = 0;
    while (!((x >> i) & 1)) i++;
    if (x & (x - 1)) cout << (1 << i) << endl;
    else  cout << (1 << i) + 1 << endl;
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