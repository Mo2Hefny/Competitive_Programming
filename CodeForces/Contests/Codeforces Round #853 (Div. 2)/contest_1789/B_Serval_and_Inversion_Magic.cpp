#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

int gcd(int a, int b)
{
  if (b)
    return gcd(b, a % b);
  return a;
}

void solve()
{
  int n, num;
  string s;
  cin >> n >> s;
  vector<int> h1, h2;
  int i;
  for (i = 0; i < n / 2; i++)
    h1.push_back(s[i] - '0');
  if (n & 1)
    i++;
  for (; i < n; i++)
    h2.push_back(s[i] - '0');
  int consc_diff = 0;
  bool first = true;
  reverse(h2.begin(), h2.end());
  
  for (int i = 0; i < h1.size(); i++)
    if (h1[i] != h2[i])
    {
      if (first)
        consc_diff++;
      else
      {
        cout << "No" << endl;
        return;
      }
    }
    else if (consc_diff)
      first = false;
  cout << "Yes" << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}