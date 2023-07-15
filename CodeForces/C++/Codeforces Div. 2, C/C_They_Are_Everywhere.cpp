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
  int n, k = 0;
  cin >> n;
  vector<char> v(n);
  map<char, int> cnt;
  for (auto& x : v) 
  {
    cin >> x;
    if (!cnt[x])  k++;
    cnt[x]++;
  }
  for (auto& x : cnt) x.second = 0;
  set<char> s;
  int l = 0, r = 0, mx_el = 0, mn = INT_MAX;
  while (l < n)
  {
    while (r < n && s.size() < k)
    {
      s.insert(v[r]);
      cnt[v[r]]++;
      r++;
    }
    if (mx_el < s.size())
      mx_el = s.size();
    if (mx_el == s.size())
      mn = min(mn, r - l);

    if (cnt[v[l]] == 1) s.erase(v[l]);
    cnt[v[l]]--;
    l++;
  }
  cout << mn;
}

int main()
{
  //int t;
  //cin >> t;
  //while (t--)
    solve();
  return 0;
}