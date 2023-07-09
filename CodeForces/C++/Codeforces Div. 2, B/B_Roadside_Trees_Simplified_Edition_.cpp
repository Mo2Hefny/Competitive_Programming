#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define all(x) (x).begin(), (x).end()

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void solve()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto& x : v) cin >> x;
  int h = 0, t = 2 * n - 1;
  for (int i = 0; i < n - 1; i++)
  {
    t += v[i] - h;
    h = v[i];
    if (v[i + 1] < h)
    {
      t += h - v[i + 1];
      h = v[i + 1];
    }
  }
  t += v.back() - h;
  cout << t << endl;
}

int main()
{
  solve();
  return 0;
}