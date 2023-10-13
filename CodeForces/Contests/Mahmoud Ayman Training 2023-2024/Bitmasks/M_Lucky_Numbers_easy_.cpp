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

vector<ll> ans;
void gen(string s, int cnt4, int cnt7) {
  if (s.size() == 11)
    return;
  if (cnt4 == cnt7 && !s.empty()) ans.push_back(stoll(s));
  gen(s + "4", cnt4 + 1, cnt7);
  gen(s + "7", cnt4, cnt7 + 1);
}

void solve()
{
  int n;
  cin >> n;
  gen("", 0, 0);
  sort(all(ans));
  cout << *lower_bound(all(ans), n);
}

int main()
{
  //int t;
  //cin >> t;
  //while (t--)
    solve();
  return 0;
}