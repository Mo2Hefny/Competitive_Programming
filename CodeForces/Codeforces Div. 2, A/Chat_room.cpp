#include <bits/stdc++.h>

using namespace std;

int main()
{
  string check = "hello\n";
  string s;
  int j, i;
  cin >> s;
  for (i = 0, j = 0; s[i]; i++)
    if (s[i] == check[j])
      j++;
  if (j < 5)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
  return 0;
}