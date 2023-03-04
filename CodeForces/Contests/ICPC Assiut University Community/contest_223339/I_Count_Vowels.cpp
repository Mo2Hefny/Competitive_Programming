#include <bits/stdc++.h>

using namespace std;

bool isVowel(char ch)
{
    ch = toupper(ch);
    return (ch=='A' || ch=='E' || ch=='I' ||
                       ch=='O' || ch=='U');
}
  
int recursion(string str)
{
    int count = 0;
    for (int i=0; i<str.length(); i++)
        if (isVowel(str[i]))
            ++count;
    return count;
}

int main()
{
  string str;
  getline(cin, str, '\n');
  cout << recursion(str);
  return 0;
}