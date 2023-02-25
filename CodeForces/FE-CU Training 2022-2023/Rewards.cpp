#include <iostream>

using namespace std;

int main()
{
  int a1, a2, a3;
  int b1, b2, b3;
  int shelf, sum1, sum2, needed = 0;
  cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> shelf;
  sum1 = a1 + a2 + a3;
  sum2 = b1 + b2 + b3;
  while (sum1 + 5 > 5)
  {
    needed++;
    sum1 -= 5;
  }
  while (sum2 + 10 > 10)
  {
    needed++;
    sum2 -= 10;
  }
  if (needed <= shelf)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}