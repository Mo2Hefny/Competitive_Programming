#include <iostream>
#include <string>

using namespace std;

void code_string(string s,string &new_s)
{
  char vowels[] = "aoyeui";
  for (int i = 0, j; s[i] != '\0'; i++)
  {
    if (isupper(s[i]))
      s[i] = s[i] - 32;
    for (j = 0; j < 7; i++)
    {
      if (s[i] == vowels[j])
      {

        break;
      }
    }
    if (j == 7)
    {
      new_s += '.' + s[i];
    }
  }
}

int main()
{
  string str;
  std::cin >> str;
  string new_str;
  code_string(str, new_str);
  cout << new_str;

  return 0;
}