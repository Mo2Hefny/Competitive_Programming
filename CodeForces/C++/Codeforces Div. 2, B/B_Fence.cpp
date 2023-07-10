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
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for (auto& x : v) cin >> x;

  int l = 0, r = k, sum = 0;
  for (int i = 0; i < k; i++) sum += v[i];
  int mn = sum, index = 0;
  while (r < n)
  {
    sum = sum - v[l] + v[r];
    l++; r++;
    if (mn > sum)
    {
      index = l;
      mn = sum;
    }
  }
  cout << index + 1;
}

int main()
{
  //int t;
  //cin >> t;
  //while (t--)
    solve();
  return 0;
}