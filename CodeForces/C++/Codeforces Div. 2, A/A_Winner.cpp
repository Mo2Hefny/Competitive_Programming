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
  int n, sc[1001];
  string name[1001];
  cin >> n;
  map<string, int> score;
  for (int i = 0; i < n; i++)
  {
    cin >> name[i] >> sc[i];
    score[name[i]] += sc[i];
  }
  int mx = 0;
  for (auto it : score) mx = max(mx, it.second);
  map<string, int> slow_score;
  for (int i = 0; i < n; i++)
  {
    slow_score[name[i]] += sc[i];
    if (slow_score[name[i]] >= mx && score[name[i]] == mx)
    {
      cout << name[i] << endl;
      return;
    }
  }
}

int main()
{
  solve();
  return 0;
}