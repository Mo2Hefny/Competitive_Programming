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
  vector<int> e, o;
  int m = n - 1;
  for (int i = 0; i < 2 * n; i++)
  {
    int x;
    cin >> x;
    if (x & 1) o.push_back(i + 1);
    else e.push_back(i + 1);
    if (o.size() == 2 && m)
    {
      cout << o[0] << " " << o[1] << endl;
      o.clear();
      m--;
    }
    if (e.size() == 2 && m)
    {
      cout << e[0] << " " << e[1] << endl;
      e.clear();
      m--;
    }
  }

}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}