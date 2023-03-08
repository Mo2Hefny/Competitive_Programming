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
  int i, n, m, a, b, c;
  cin >> n >> m;
  vector<int> color(n, 0);
  for (i = 0; i < m; i++)
  {
    scanf("%d %d %d", &a, &b, &c);
    a--; b--; c--;
    if (!color[a] && !color[b] && !color[c])
    {
      color[a] = 1;
      color[b] = 2;
      color[c] = 3;
    }
    else if (color[a])
    {
      if (color[a] == 1)
        color[b] = 2, color[c] = 3;
      else if (color[a] == 2)
        color[b] = 3, color[c] = 1;
      else
        color[b] = 1, color[c] = 2;
    }
    else if (color[b])
    {
      if (color[b] == 1)
        color[a] = 2, color[c] = 3;
      else if (color[b] == 2)
        color[a] = 3, color[c] = 1;
      else
        color[a] = 1, color[c] = 2;
    }
    else if (color[c])
    {
      if (color[c] == 1)
        color[b] = 2, color[a] = 3;
      else if (color[c] == 2)
        color[b] = 3, color[a] = 1;
      else
        color[b] = 1, color[a] = 2;
    }
  }
  for (i = 0; i < n; i++)
    printf("%d ", color[i]);
  return 0;
}