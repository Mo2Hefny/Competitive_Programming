#include <iostream>

using namespace std;

int main()
{
  int i;
  int start, num, jump;
  bool found = false;
  cin >> start >> num >> jump;
  int n = start;
  if (n == num)
  {
  cout << "YES" << endl;
  return 0;
  }
  if (jump > 0)
  {
    while (n <= num)
    {
      n += jump;
      if (n == num)
      {
        cout << "YES" << endl;
        return 0;
      }
    }
  }
  else if (jump < 0)
  {
    while (n >= num)
    {
      n += jump;
      if (n == num)
      {
        cout << "YES" << endl;
        return 0;
      }
    }
  }
 
  cout << "NO" << endl;
  return 0;
}