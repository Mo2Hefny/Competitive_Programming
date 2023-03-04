#include <bits/stdc++.h>

using namespace std;

void solve(int n)
{
  if (n == 0)
    return;
  solve(n - 1);
  cout << n << endl;
}

int main()
{
  int t;
  cin >> t;
  solve(t);
  return 0;
}