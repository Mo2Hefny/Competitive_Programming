#include <iostream>

using namespace std;

int main()
{
  int table_size, num, count = 0;
  cin >> table_size >> num;
  for (int i = 1; i <= table_size && i <= num; i++)
  {
    if (!(num % i) && num / i <= table_size)
        count++;
  }
  cout << count << endl;
  return 0;
}