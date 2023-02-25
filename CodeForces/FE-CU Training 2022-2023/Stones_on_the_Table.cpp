#include <iostream>

using namespace std;

int main()
{
  int n, i, j = 0, count = 0;
  char s[50];
  cin >> n;
  cin >> s;
  for (i = 1; s[i] && i < 50; i++)
  {
    if (s[i] == s[j])
    count++;
    else
    j = i;
  }
  cout <<count <<endl;
  return 0;
}
