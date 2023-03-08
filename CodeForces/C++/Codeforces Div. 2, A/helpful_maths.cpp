#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  char s[100];
  vector<int> dig;
  int i, j = 0;
  cin >> s;
  for (i = 0; s[i] && i < 100; i++)
  {
    if (isdigit(s[i]))
    {
      dig.push_back(s[i] - '0');
    }
  }
  sort(dig.begin(), dig.end());
  for (i = 0; s[i] && i < 100; i++)
  {
    if (isdigit(s[i]))
    {
      s[i] = dig[j++] + '0';
    }
  }
  cout << s << endl;
  return 0;
}