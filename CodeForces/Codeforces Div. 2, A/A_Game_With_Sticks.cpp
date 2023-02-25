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
  int n[2];
  cin >> n[0];
  cin >> n[1];
  sort(n, n + 2);
  if (n[0] % 2)
    cout << "Akshat";
  else
    cout << "Malvika";
}