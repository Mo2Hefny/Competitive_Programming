#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>
#include <map>
#include <algorithm>
#include <iomanip>
#include <string>
#include <set>
 
using namespace std;
 
 
#define ll long long 
#define fast ios_base::sync_with_stdio(0); cin.tie(0);  cout.tie(0);

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> mset;
  for (int i = 0; i < m; i++)
  {
    int b;
    cin >> b;
    mset.push_back(b);
  }
  sort(mset.begin(), mset.end());
  int min = mset[n - 1] - mset[0];
  for (int i = 1; i <= m - n; i++)
  {
    int temp = mset[i + n - 1] - mset[i];
    if (temp < min)
      min = temp;
  }

  cout << min;
}