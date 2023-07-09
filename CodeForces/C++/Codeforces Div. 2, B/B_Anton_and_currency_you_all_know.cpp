#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define all(x) (x).begin(), (x).end()

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void solve()
{
  string n;
  cin >> n;
  int lastEvenindex = -1;
  for (int i = 0; i < n.size(); i++)
  {
    if ((n[i] - '0') % 2 == 0)
    {
      lastEvenindex = i;
      if (n[i] < n.back())
      {
        char temp = n[i];
        n[i] = n.back();
        n[n.size() - 1] = temp;
        cout << n << endl;
        return;
      }
    }
  }
  if (lastEvenindex == -1)
    cout << -1 << endl;
  else
  {
    char temp = n[lastEvenindex];
    n[lastEvenindex] = n.back();
    n[n.size() - 1] = temp;
    cout << n << endl;
  }
}

int main()
{
  solve();
  return 0;
}