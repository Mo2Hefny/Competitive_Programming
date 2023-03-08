#include <iostream>

using namespace std;
bool lucky_num(int num)
{
  int seen[10] = {0};
  int n = num;
  while (n)
  {
    int digit = n % 10;
    n /= 10;
    if (digit != 4 && digit != 7)
      return 0;
  }
  return 1;
}

int main()
{
  int num;
  int luck[]{4, 7, 44, 47, 74, 444, 447, 477, 744, 774, 777};
  cin >> num;
  int n = num;
  bool lucky = lucky_num(num);
  for (int i = 0; i < 11; i++)
  {
    if (n % luck[i] == 0)
    {
      lucky = true;
      break;
    }
  }
  if (lucky)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
