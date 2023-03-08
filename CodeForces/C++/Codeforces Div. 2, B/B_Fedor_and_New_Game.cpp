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

int main()
{
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> players(m);
  for (int i = 0; i < m; i++)
    cin >> players[i];
  int Fedor;
  cin >> Fedor;
  int count = 0;
  for (auto x: players)
  {
    int cap = k;
    int temp = (Fedor | x) ^ Fedor;
    cap -= __builtin_popcount(Fedor ^ x & Fedor);
    cap -= __builtin_popcount(temp);
    if (cap >= 0)
      count++;
  }
  cout << endl << count;
  return 0;
}