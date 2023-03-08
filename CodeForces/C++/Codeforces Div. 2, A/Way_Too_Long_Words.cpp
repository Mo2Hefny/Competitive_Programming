#include <iostream>
#include <string>

using namespace std;

string *Zip_string(string *s, int n)
{
  string *new_str = new string[n];
  for (int i = 0; i < n; i++)
  {
    if (s[i].size() > 10)
      new_str[i] = s[i][0] + to_string(s[i].size() - 2) + s[i][s[i].size() - 1];
    else
      new_str[i] = s[i];
  }
  delete[] s;
  return new_str;
}

int main()
{
  int n;
  std::cin >> n;
  string *str = new string[n];
  for (int i = 0; i < n; i++)
    std::cin >> str[i];
  str = Zip_string(str, n);
  for (int i = 0; i < n; i++)
    cout << str[i] << endl;
}