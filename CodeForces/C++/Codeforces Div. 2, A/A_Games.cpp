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
  vector<vector<int>> team(n);
  for (int i = 0; i < n; i++)
  {
    int temp;
    for (int j = 0; j < 2; j++)
    {
      cin >> temp;
      team[i].push_back(temp);
    }
  }
  int count = 0;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      if (team[i][0] == team[j][1] && j != i)
        count++;
  cout << count;
}