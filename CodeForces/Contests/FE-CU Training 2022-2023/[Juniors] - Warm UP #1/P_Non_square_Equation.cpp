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

long long int pairs(long long int n)
{
    return n * (n - 1) / 2;
}

unsigned ll DigSum(unsigned ll n)
{
  ll sum=0;

    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
void solve()
{
  
    unsigned ll int n, i;
    int sum = 0;
    cin >> n;
    for (i = sqrt(n); i * i + 90 * i >= n; i--)
    {
      if (i * i + DigSum(i) * i == n)
      {
        cout << i;
        return;
      }
    }
    cout << -1;
}

int main()
{
  solve();
  return 0;
}