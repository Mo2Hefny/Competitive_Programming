#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>
#include <map>
#include <algorithm>
#include <iomanip>
#include <string>
#include <set>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

int main()
{
  set<char> s;
  int count = 0, prev_size = 0;
  char c;
  while (cin >> c)
  {
    if (!isalpha(c))
      continue;
    s.insert(c);
    if (prev_size != s.size())
      count++;
    prev_size = s.size();
  }

  cout << count;
}