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
  map<char, int> m;
  string s;
  int k;
  cin >> s >> k;
  int mx = 0;
  for (int i = 0; i < 26; i++)
  {
    int w;
    cin >> w;
    mx = max(w, mx);
    m['a' + i] = w;
  }

  int res = 0;
  for (int i = 0; i < s.size() + k; i++)
  {
    res += (i + 1) * (i < s.size() ? m[s[i]] : mx);
  }
  cout << res << endl;
}

int main()
{
  solve();
  return 0;
}