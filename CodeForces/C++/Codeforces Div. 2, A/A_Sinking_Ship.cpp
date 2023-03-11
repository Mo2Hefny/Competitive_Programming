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

void solve()
{
  int n, id;
  cin >> n;
  multimap<int, string> crew;
  for (int i = 0; i < n; i++)
  {
    string name, prior;
    cin >> name >> prior;
    if (prior == "captain")
      id = 4;
    else if (prior == "man")
      id = 3;
    else if (prior == "child" || prior == "woman")
      id = 2;
    else
      id = 1;
    crew.insert({id, name});
  }
  for (auto it : crew)
  {
    cout << it.second << endl;
  }
}

int main()
{
  solve();
  return 0;
}