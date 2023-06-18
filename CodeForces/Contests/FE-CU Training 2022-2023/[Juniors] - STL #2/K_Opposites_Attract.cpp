#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>
#include <map>
#include <queue>
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
  vector<int> neg;
  map<int, int> rep;
  rep[0] = -1;
  for (int i = 0; i < n; i++)
  {
    int b;
    cin >> b;
    if (b < 0)
      neg.push_back(b);
    else if (b == 0)
    {
      neg.push_back(b);
      rep[b]++;
    }
    else
      rep[-b]++;
  }

  ll int couples = 0;
  for (int i = 0; i < neg.size(); i++)
  {
    if (rep[neg[i]])
      couples += rep[neg[i]];
    if (!neg[i])
      rep[neg[i]]--;
  }

  cout << couples;
}

int main()
{
  solve();
  return 0;
}