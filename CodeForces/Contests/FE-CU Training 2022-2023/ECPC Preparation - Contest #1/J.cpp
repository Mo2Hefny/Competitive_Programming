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
  vector<int> v(n);
  vector<int> bits(n);
  for (auto &x : v)
    cin >> x;
  sort(all(v));
  for (int i = 0; i < n; i++)
    bits[i] = log2(v[i]);
  int cnt = 1, mx = 0;
  for (int i = 0; i < n - 1; i++)
  {
    if (bits[i] != bits[i + 1])
    {
      mx = max(mx, cnt);
      cnt = 1;
    }
    if ((v[i] & v[i + 1]) >= (v[i] ^ v[i + 1]))
      cnt++;
  }
  mx = max(mx, cnt);
  cout << mx << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}