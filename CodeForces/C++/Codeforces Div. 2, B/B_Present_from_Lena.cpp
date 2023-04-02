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

void solve()
{
  int n;
  cin >> n;
  int spaces = n;
  
  for (int i = 0, md = 1; i>= 0; i += md)
  {
    for (int k = 0; k < spaces; k++)
      cout << "  ";
    for (int j = 0, mode = 1; j >= 0; j += mode)
    {
      cout << j;
      if (j == i)
        mode = -1;
      if (j != 0 || mode != -1)
        cout << " ";
    }
    if (n == i)
        md = -1;
    spaces -= md;
    cout << endl;
  }
}

int main()
{
  solve();
  return 0;
}