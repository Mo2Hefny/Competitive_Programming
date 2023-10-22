
#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>
#include <deque>
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
  deque<char> bin(n);
  for (auto &x : bin)
    cin >> x;
  
  while (bin.size() > 1)
  {
    if (bin.front() == bin.back())
      break;
    bin.pop_back();
    bin.pop_front();
  }
  cout << bin.size() << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}