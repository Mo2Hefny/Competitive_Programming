#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

void solve()
{
  int n, k;
  cin >> n >> k;
  vector<int> ingr(n);
  vector<int> qty(n);
  for (auto& x : ingr) cin >> x;
  for (auto& x : qty) cin >> x;

  int count = 0;
  while(k >= 0)
  {
    for (int i = 0; i < n; i++)
    {
      if (qty[i] >= ingr[i])
        qty[i] -= ingr[i];
      else
      {
        k -= (ingr[i] - qty[i]);
        qty[i] = 0;
      }
    }
    if (k >= 0)
      count++;

  }
  cout << count << endl;
}

int main()
{
  solve();
  return 0;
}