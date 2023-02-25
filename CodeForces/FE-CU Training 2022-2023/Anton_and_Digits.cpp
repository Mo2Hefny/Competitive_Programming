#include <iostream>

using namespace std;

int main()
{
  int dig2, dig3, dig5, dig6;
  cin >> dig2 >> dig3 >> dig5 >> dig6;
  int dig32 = 0, dig256 = 0;
  while (dig2 > 0 && dig5 > 0 && dig6 > 0)
  {
    dig256 += 256;
    dig2--; dig5--; dig6--;
  }
  while (dig2 > 0 && dig3 > 0)
  {
    dig32 += 32;
    dig2--; dig3--;
  }
  int sum = dig32 + dig256;
  cout << sum << endl;
  return 0;
}
