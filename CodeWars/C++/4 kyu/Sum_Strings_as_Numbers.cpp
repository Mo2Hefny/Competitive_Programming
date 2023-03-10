#include <string>
using namespace std;
std::string sum_strings(const std::string &a, const std::string &b)
{
  string x = a, y = b;
  x.erase(0, std::min(x.find_first_not_of('0'), x.size() - 1));
  y.erase(0, std::min(y.find_first_not_of('0'), y.size() - 1));
  string s = "";
  int c = 0;
  for (long long i = x.size() - 1, j = y.size() - 1; i >= 0 || j >= 0)
  {
    int dig = c;
    if (i >= 0)
      dig += (x[i--] - '0');
    if (j >= 0)
      dig += (y[j--] - '0');
    s = to_string(dig % 10) + s;
    c = dig > 9;
  }
  if (c)
    s = "1" + s;
  return s.empty() ? "0" : s;
}