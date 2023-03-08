#include <bits/stdc++.h>

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
  vector<int> holds(n);
  for (auto &x : holds)
    cin >> x;
  int min_i = 1;
  int max_jump = 0;
  for (int i = 3; i < holds.size(); i++)
  {
    if (holds[min_i + 1] - holds[min_i - 1] < holds[i] - holds[i - 2])
      continue;
    min_i = i - 1;
  }
  holds.erase(holds.begin() + min_i);
  for (int i = 1; i < holds.size(); i++)
    max_jump = max(max_jump, holds[i] - holds[i - 1]);
  cout << max_jump;
}