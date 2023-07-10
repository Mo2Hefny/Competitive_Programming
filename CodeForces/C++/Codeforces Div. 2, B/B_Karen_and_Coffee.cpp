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
  int n, k, q;
  cin >> n >> k >> q;
  vector<int> v(200000, 0);
  for (int i = 0; i < n; i++)
  {
    int l, r;
    cin >> l >> r;
    l--; r--;   // 0 indexed
    v[l]++;
    v[r + 1]--; // -1 so it stops adding in prefix sum
  }
  for (int i = 1; i < v.size(); i++)
  {
    v[i] += v[i - 1];
  }
  v[0] = (v[0] >= k);
  for (int i = 1; i < v.size(); i++)
  {
    v[i] = v[i - 1] + (v[i] >= k);
  }

  while (q--)
  {
    int l, r;
    cin >> l >> r;
    l--; r--;
    cout << v[r] - (l > 0 ? v[l - 1] : 0) << endl;
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