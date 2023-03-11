#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>
#include <map>
#include <unordered_map>
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

void solve()
{
  int n, sc;
  cin >> n >> sc;
  int min, max, amz = 0;
  min = max = sc;
  for (int i = 0 ; i< n - 1; i++)
  {
    cin >> sc;
    if (sc > max)
    {
      max = sc;
      amz++;
    }
    else if (sc < min)
    {
      min = sc;
      amz++;
    }
  }
  cout << amz;
}

int main()
{
  solve();
  return 0;
}