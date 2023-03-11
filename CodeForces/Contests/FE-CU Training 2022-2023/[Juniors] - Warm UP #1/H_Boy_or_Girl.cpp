#include <iostream>

using namespace std;

int main()
{
  char str[100], str2[100];
  cin >> str;
  int i, j, index = 0;
  for (i = 0; str[i] && i < 100; i++)
  {
    if (str[i] == '\0')
    break;
    for (j = 0; j < i; j++)
      if (str[i] == str[j])
        break;
    if (j == i)
      str2[index++] = str[i];
  }
  str2[index] = '\0';
  if (index % 2)
  cout << "IGNORE HIM!" << endl;
  else
  cout << "CHAT WITH HER!" << endl;
  return 0;
}
