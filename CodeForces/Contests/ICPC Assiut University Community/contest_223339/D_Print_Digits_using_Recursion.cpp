#include <bits/stdc++.h>

using namespace std;

void solve(int n)
{
  if (n < 0)
    return;
  if (n / 10 > 0)
    solve(n / 10);
  cout << n % 10 << " ";
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    solve(n);
    cout << endl;
  }
  return 0;
}