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
  for (auto &x : v)
    cin >> x;
  int peak = 0;
  int bottom = 0;
  bool done = false;
  for (int i = 1; i < n; i++)
  {
    if (v[i] > v[peak] && bottom <= peak && !done)
      peak = i;
    else if (v[i] == v[i - 1] || (v[i] < v[i - 1] && done))
    {
      cout << "no";
      return;
    }
    else if (v[i] > v[i - 1] && !done)
    {
      if (v[i] < v[peak] || (peak && v[i] < v[peak - 1]))
      {
        cout << "no";
        return;
      }
      done = true;
    }
    else if (v[i] < v[i - 1])
      bottom = i;
    if (i == n - 1 && bottom > peak)
    {
      if (peak && v[i] < v[peak - 1])
      {
        cout << "no";
        return;
      }
    }
  }
  cout << "yes" << endl;
  cout << peak + 1 << " " << (bottom == 0 ? peak + 1 : bottom + 1);
}

int main()
{
  solve();
  return 0;
}