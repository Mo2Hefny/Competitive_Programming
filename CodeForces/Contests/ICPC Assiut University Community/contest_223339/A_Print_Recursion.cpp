#include <bits/stdc++.h>

using namespace std;

void solve(int n)
{
  if (n == 0)
    return;
  cout << "I love Recursion\n";
  solve(n - 1);
}

int main()
{
  int t;
  cin >> t;
  solve(t);
  return 0;
}