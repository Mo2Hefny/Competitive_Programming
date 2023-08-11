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
  ll n, k;
  cin >> n >> k;
  ll cnt = 0;
  while (n) {
    cnt += n % k;
    n -= n % k;
    if (n)
    {
    cnt++;
    n /= k;
    }
  }
  cout << cnt << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}