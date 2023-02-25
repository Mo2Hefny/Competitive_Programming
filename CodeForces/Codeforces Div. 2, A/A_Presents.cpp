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
  int n;
  cin >> n;
  vector<int> friends(n);
  vector<int> temp(n);
  for (int i = 0; i < n; i++)
  {
    cin >> friends[i];
  }
  for (int i = 0; i < n; i++)
  {
    temp[friends[i] - 1] = i + 1;
  }
  for (auto x : temp)
    cout << x << " ";
}