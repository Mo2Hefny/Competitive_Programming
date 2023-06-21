#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

void solve()
{
  string ham;
  cin >> ham;
  ll B = 0, S = 0, C = 0;
  ll pB, pS, pC; //pieces
  cin >> pB >> pS >> pC;
  ll cB, cS, cC; //cost
  cin >> cB >> cS >> cC;
  for (auto x : ham)
  {
    if (x == 'B') B++;
    else if (x == 'S') S++;
    else if (x == 'C') C++;
  }
  ll money;
  cin >> money;
  ll l = 0, r = money + 100;
  while (l <= r)
  {
    ll mid = l + (r - l) / 2;
    ll o = 0;
    ll rB = max(B*mid - pB, o); 
    ll rS = max(S*mid - pS, o); 
    ll rC = max(C*mid - pC, o);
    ll cost = rB * cB + rS * cS + rC * cC;
    if (cost <= money) l = mid + 1;
    else  r = mid - 1;
  }
  cout << r;
}

int main()
{
  solve();
  return 0;
}