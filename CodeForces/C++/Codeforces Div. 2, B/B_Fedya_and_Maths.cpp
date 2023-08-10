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
  cin >> s;
  int n;
  if (s.size() > 1)
  n = stoi(s.substr(s.size() - 2)) % 4;
  else
  n = stoi(s.substr(s.size() - 1)) % 4;
  cout << int((1 +
   pow(2, n) +
   pow(3, n) +
   pow(4, n))) % 5;
}

int main()
{
  //int t;
  //cin >> t;
  //while (t--)
    solve();
  return 0;
}