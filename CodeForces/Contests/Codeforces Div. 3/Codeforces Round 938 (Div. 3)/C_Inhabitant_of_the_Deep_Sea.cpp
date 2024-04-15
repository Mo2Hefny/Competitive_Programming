#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MO2                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void solve()
{
  int n, res = 0;
  ll k;
  cin >> n >> k;
  deque<ll> dq(n);
  for (auto& x : dq)  cin >> x;
  while (dq.size() > 1 && k > 0) {
    int mn = min(dq.front(), dq.back());
    if (k < mn * 2) {
      dq.front() -= k / 2 + k % 2;
      dq.back() -= k / 2;
      k = 0;
    }
    else {
      dq.front() -= mn;
      dq.back() -= mn;
      k -= mn * 2;
    }
    if (!dq.front())  {
      dq.pop_front();
      res++;
    }
    if (!dq.back()) {
      dq.pop_back();
      res++;
    }
  }
  if (!dq.empty()) res += (k >= dq.front());
  cout << res << endl;
}

int main()
{
  MO2
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}