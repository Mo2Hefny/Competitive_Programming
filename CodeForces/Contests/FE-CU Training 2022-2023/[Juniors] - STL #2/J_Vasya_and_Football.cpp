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
  map<string, int> n_of_cards;
  string home, away;
  cin >> home >> away;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    string team, player, time, card;
    cin >> time >> team >> player >> card;
    if (n_of_cards[player + team] == 2)
      continue;
    if (card == "y")
      n_of_cards[player + team]++;
    else
      n_of_cards[player + team] = 2;
    if (n_of_cards[player + team] == 2)
      cout << (team == "a" ? away : home) << " " << player << " " << time << endl;
  }
}

int main()
{
  solve();
  return 0;
}