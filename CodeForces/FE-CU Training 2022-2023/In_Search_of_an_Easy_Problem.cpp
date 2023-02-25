#include <iostream>

using namespace std;

int main()
{
  int n, i;
  bool hard = false;
  int opn[100];
  cin >> n;
  for (i = 0; i < n; i++)
  {
  cin >> opn[i];
  if (opn[i])
  hard = true;
  }
  if (hard)
  cout << "HARD" << endl;
  else
  cout << "EASY" << endl;
  return 0;
}