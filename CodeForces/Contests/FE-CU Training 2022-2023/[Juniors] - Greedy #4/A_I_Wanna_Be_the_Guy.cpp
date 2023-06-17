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
  int n, Px, Py;
  vector<int> v;
  cin >> n >> Px;
  for (int i = 0; i < Px; i++)
  {
    int b;
    cin >> b;
    v.push_back(b);
  }
  cin >> Py;
  for (int i = 0; i < Py; i++)
  {
    int b;
    cin >> b;
    v.push_back(b);
  }
  int count = 0;
  sort(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] > n) break;
    
    if (i && v[i] == v[i - 1]) continue;
    count++;
  }

  if (count >= n)
    cout << "I become the guy.\n";
  else
    cout << "Oh, my keyboard!\n";
}

int main()
{
  solve();
  return 0;
}