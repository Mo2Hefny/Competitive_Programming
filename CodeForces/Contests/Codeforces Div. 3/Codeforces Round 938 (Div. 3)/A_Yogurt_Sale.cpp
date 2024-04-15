#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MO2                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void solve()
{
  int n, a, b;
  cin >> n >> a >> b;
  cout << (2*a < b ? n * a : (n / 2) * b + a * (n % 2)) << endl;
}

int main()
{
  MO2
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}