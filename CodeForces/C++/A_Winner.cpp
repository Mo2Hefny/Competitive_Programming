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
  int n = 0, sc[1001];
  cin >> n;
  string name[1001];
  map<string, int> score;
  pair<string, int> mx;
  for (int i = 0; i < n; i++)
  {
    cin >> name[i] >> sc[i];
    score[name[i]] += sc[i];
  }
  mx.second = 0;
  for (auto &it : score)
  {
    if (mx.second < it.second)
    {
      mx.first = it.first;
      mx.second = it.second;
    }
  }
  cout << mx.first;
}

int main()
{
  solve();
  return 0;
}