#include <string>
#include <iostream>
using namespace std;
int last_digit(const std::string &str1, const std::string &str2) {
  int value = 1;
  int a = str1.back() - '0';
  int b = (str2.end()[-1] - '0');
  if(str2.size() > 1) 
    b += ((str2.end()[-2]-'0') * 10);
  else if (!b)
    return 1;
  b = b%4 + 4;
  for (; b > 0; b--) 
    value = (value * a) % 10;
  return value;
}