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
  vector<char> v;
  for (int i = 0; i < 8; i++)
  {
    cin >> s;
    for (auto c : s)
      if (c != '.')
        v.push_back(c);
  }
  for (auto x : v)  cout << x;
  cout << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}