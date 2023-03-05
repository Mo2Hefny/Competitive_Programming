#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

int main()
{
  int n, m;
  cin >> n >> m;
  vector<char> v(m - 1, '.');
  v.push_back('#');
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
    {
      for (int j = 0; j < m; j++)
        cout << '#';
      cout << endl;
    }
    else
    {
      if ((i + 1) % 4 == 0)
        cout << "#";
      for (int j = 0; j < m - 1; j++)
        cout << '.';
      if ((i + 1) % 4)
        cout << "#";
      cout << endl;
    }
  }
  return 0;
}
