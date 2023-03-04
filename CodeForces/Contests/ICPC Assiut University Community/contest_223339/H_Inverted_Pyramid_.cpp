#include <bits/stdc++.h>

using namespace std;

void recursion(int stars, int spaces)
{
  if (stars <= 0)
    return;
  for (int i = 0; i < spaces; i++)  cout << " ";
  for (int i = 0; i < stars; i++)  cout << "*";
  cout << endl;
  recursion(stars - 2, spaces + 1);
}

int main()
{
  int n;
  cin >> n;
  recursion(-1 + 2 * n, 0);
  return 0;
}