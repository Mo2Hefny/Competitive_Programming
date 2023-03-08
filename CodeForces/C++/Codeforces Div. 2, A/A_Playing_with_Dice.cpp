#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

int main()
{
  int a, b;
  cin >> a >> b;
  int a_win = 0, draw = 0, b_win = 0;
  for (int i = 1; i < 7; i++)
    if (abs(a - i) > abs(b - i))
      b_win++;
    else if (abs(a - i) < abs(b - i))
      a_win++;
      else
      draw++;
  cout << a_win << " " << draw << " " << b_win;
}