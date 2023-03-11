#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <iomanip>
#include <bitset>
#include <string>
#include <set>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

bool isprime(int n) {
  if (n <= 1) return false; // 1 and negative numbers are not prime
  if (n == 2) return true; // 2 is the only even prime
  if (n % 2 == 0) return false; // even numbers are not prime
  for (int i = 3; i * i <= n; i += 2) { // loop over odd numbers up to sqrt(n)
    if (n % i == 0) return false; // if n is divisible by any odd number, it is not prime
  }
  return true; // n is prime if it passes all the tests
}

void solve()
{
  int n, m;
  cin >> n >> m;
  for (int i = n + 1, j; i <= m; i++)
  {
    if (isprime(i))
    {
      cout << (i != m ? "NO" : "YES");
      return;
    }
  }
  cout << "NO";
}

int main()
{
  solve();
  return 0;
}