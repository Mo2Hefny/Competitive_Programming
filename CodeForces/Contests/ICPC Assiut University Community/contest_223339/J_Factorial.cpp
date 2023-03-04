#include <bits/stdc++.h>

using namespace std;
#define ll long long

unsigned ll int recursion(int n)
{
  if (n <= 1)
    return 1;
  return n * recursion(n - 1);
}

int main()
{
  unsigned ll int n;
  cin >> n;
  cout << recursion(n);
  return 0;
}