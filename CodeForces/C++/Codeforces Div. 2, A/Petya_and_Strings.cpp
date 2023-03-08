#include <iostream>
#include <string>

using namespace std;

int stringcmp(string s1, string s2)
{
  int i;
  for (i = 0; i < s1.size() && i < s2.size(); i++)
  {
    s1[i] = isupper(s1[i]) ? s1[i] + 32 : s1[i];
    s2[i] = isupper(s2[i]) ? s2[i] + 32 : s2[i];

    if (s1[i] == s2[i])
      continue;
    else if (s1[i] < s2[i])
      return -1;
    else
      return 1;
  }
  if (s1[i] == '\0' && s2[i] == '\0')
      return 0;
    else if (s1[i] < s2[i])
      return -1;
    else
      return 1;
}

int main()
{
  string s1, s2;
  cin >> s1 >> s2;
  cout << stringcmp(s1, s2);
}