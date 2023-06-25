#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define all(x) (x).begin(), (x).end()

void solve()
{
  int n;
  cin >> n;
  vector<int> v(n);
  vector<bool> taken(n, false);
  vector<int> count(3, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    count[v[i] - 1]++;
  }
  int total = *min_element(all(count));
  cout << total << endl;
  while (total)
  {
    int pos1 = -1, pos2 = -1, pos3 = -1;
    for (int i = 0; i < n; i++)
    {
      if (v[i] == 1 && !taken[i] && pos1 == -1)
      {
        taken[i] = true;
        pos1 = i + 1;
      }
      else if (v[i] == 2 && !taken[i] && pos2 == -1)
      {
        taken[i] = true;
        pos2 = i + 1;
      }
      else if (v[i] == 3 && !taken[i] && pos3 == -1)
      {
        taken[i] = true;
        pos3 = i + 1;
      }
    }
    total--;
    cout << pos1 << " " << pos2 << " " << pos3 << endl;
  }
}

int main()
{
  solve();
  return 0;
}