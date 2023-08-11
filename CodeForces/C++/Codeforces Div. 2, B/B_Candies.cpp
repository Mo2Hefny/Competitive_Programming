#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

stack<int> s;
int step;
void rec(int n)
{
  if (n <= 1)
    return;
  if (n % 2 == 0 || step >= 40)
  {
    s = stack<int>();
    return;
  }

  step++;
  int x = (n - 1) / 2;
  if ((x % 2))
  {
    s.push(2);
    rec(x);
  }
  else {
    s.push(1);
    rec(x + 1);
  }
}

void solve()
{
  int n;
  cin >> n;
  step = 0;
  s = stack<int>();
  rec(n);
  if (s.empty())  cout << -1 << endl;
  else
  {
    cout << step << endl;
    while (!s.empty())
    {
      cout << s.top() << " ";
      s.pop();
    }
  cout << endl;
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}