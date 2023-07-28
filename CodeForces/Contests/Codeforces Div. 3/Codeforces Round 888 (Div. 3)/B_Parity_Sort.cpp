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
  vector<int> e, o;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    if (a & 1)
    {
      v[i] = 1;
      o.push_back(a);
    }
    else
    {
      v[i] = 0;
      e.push_back(a);
    }
  }
  sort(rall(e));
  sort(rall(o));
  for (int i = 0; i < n; i++)
  {
    if (v[i])
    {
      v[i] = o.back();
      o.pop_back();
    }
    else
    {
      v[i] = e.back();
      e.pop_back();
    }
  }
  for (int i = 1; i < n; i++)
  {
    if (v[i] < v[i - 1])
    {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}