#include <iostream>

using namespace std;

int main()
{
  int table_size, num, count = 0;
  cin >> table_size >> num;
  for (int i = 1; i <= table_size; i++)
  {
    for (int j = 1; j <= table_size; j++)
      if (i * j == num)
        count++;
  }
  cout << count << endl;
  return 0;
}