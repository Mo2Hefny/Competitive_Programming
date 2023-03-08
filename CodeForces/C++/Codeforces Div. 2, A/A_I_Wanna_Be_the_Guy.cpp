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
  set<int> s;
  int n, p, q;
  cin >> n >> p;
  int b;
  for (int i = 0; i < p; i++)
  {
    cin >> b;
    s.insert(b);
  }
  cin >> q;
  for (int i = 0; i < q; i++)
  {
    cin >> b;
    s.insert(b);
  }

  if (n == s.size())
    cout << "I become the guy." << endl;
  else
    cout << "Oh, my keyboard!" << endl;
}