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
  vector<int> v(3, 0);
  for (int i = 0; i < n; i++)
  {
    int b;
    cin >> b;
    v[i % 3] += b;
  }
  if (v[0] >= v[1] && v[0] >= v[2]) cout << "chest\n";
  else if (v[1] >= v[0] && v[1] >= v[2]) cout << "biceps\n";
  else cout << "back\n";
  return 0;
}
