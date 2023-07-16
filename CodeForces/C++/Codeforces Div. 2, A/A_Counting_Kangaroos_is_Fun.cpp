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
  vector<int> k(n);
  for (auto& x : k) cin >> x;
  sort(all(k));
  int pos = n / 2;
  int visible = n;
  for (int i = 0; i < n / 2; i++)
  {
    while (pos < n)
    {
      if (k[i] * 2 <= k[pos]) { visible--; pos++; break; }
      pos++;
    }
  }

  cout << visible;
}

int main()
{
  //int t;
  //cin >> t;
  //while (t--)
    solve();
  return 0;
}