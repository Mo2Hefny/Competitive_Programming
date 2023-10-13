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
  string b1, b2;
  cin >> b1 >> b2;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if ((b1[i] - '0') ^ (b2[i] - '0')) ans += 2;
    else if ((b1[i] - '0') & (b2[i] - '0')) {
      if (i < n - 1 && !((b1[i + 1] - '0') & (b2[i + 1] - '0'))) {
        ans += 2;
        i++;
      }
    }
    else {
      if (i < n - 1 && ((b1[i + 1] - '0') & (b2[i + 1] - '0'))) {
        ans += 2;
        i++;
      }
      else ans++;
    }
  }
  cout << ans << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}