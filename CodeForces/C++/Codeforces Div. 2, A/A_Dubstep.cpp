#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>
#include <map>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cstring>
#include <set>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

int main()
{
  char str[200];
  cin >> str;
  string s;
  for (int i = 0; i < strlen(str) && str[i] != '\0'; i++)
  {
    if (strncmp((str + i), "WUB", 3) == 0)
    {
      if (s.size() && s[s.size() - 1] != ' ')
        s += " ";
      i += 2;
      continue;
    }
    s += str[i];
  }
  cout << s;
}
