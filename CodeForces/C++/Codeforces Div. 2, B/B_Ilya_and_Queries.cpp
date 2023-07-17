
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
  string s;
  cin >> s;
  vector<int> sum(s.size(), 0);
  for (int i = 0; i < s.size() - 1; i++)
    sum[i + 1] = sum[i] + (s[i] == s[i + 1]);
  int m;
  cin >> m;
  while (m--)
  {
    int l, r;
    cin >> l >> r;
    cout << sum[--r] - sum[--l] << endl;
  }
}

int main()
{
  //int t;
  //cin >> t;
  //while (t--)
    solve();
  return 0;
}