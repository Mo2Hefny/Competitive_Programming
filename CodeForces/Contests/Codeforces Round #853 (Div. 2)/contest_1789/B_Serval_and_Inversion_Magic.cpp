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
  stack<char> h1;
  queue<char> h2;
  int i;
  char c;
  for (i = 0; i < n / 2; i++)
  {
    cin >> c;
    h1.push(c);
  }
  if (n & 1)
    cin >> c;
  for (i = 0; i < n / 2; i++)
  {
    cin >> c;
    h2.push(c);
  }
  char consc_diff = 0;
  bool first = true;

  for (int i = 0; i < n / 2; i++)
  {
    if (h1.top() != h2.front())
      if (first)
        consc_diff = 1;
      else
      {
        cout << "No" << endl;
        return;
      }
    else if (consc_diff)
      first = false;
    h1.pop();
    h2.pop();
  }
  cout << "Yes" << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}