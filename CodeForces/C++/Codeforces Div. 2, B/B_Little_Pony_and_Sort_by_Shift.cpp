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
  for (auto &x : v)
    cin >> x;
  int mxIndex = max_element(all(v)) - v.begin();
  int mnIndex = min_element(all(v)) - v.begin();
  if (mxIndex == mnIndex)
  {
    cout << 0;
    return;
  }
  for (int i = mxIndex;; i = (i + 1) % n)
    if (v[i] == v[(i + 1) % n])
      mxIndex = (i + 1) % n;
    else
      break;

  for (int i = (mxIndex + 1) % n; i != mxIndex; i = (i + 1) % n)
  {
    if (v[i] > v[(i + 1) % n])
    {
      cout << -1;
      return;
    }
  }
  cout << n - 1 - mxIndex;
}

int main()
{
  solve();
  return 0;
}