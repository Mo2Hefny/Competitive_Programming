#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

int gcd(int a, int b)
{
  if (b)
    return gcd(b, a % b);
  return a;
}

void solve()
{
  int n;
    cin >> n;
    vector<int> num(n);
    for (auto& x: num)
      cin >> x;

    for (int i = 0; i < n; i++)
      for (int j = i + 1; j < n; j++)
        if (gcd(num[i], num[j]) <= 2)
        {
          cout << "Yes" << endl;
          return;
        }
    cout << "No" << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();    
  return 0;
}