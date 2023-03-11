#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <iomanip>
#include <string>
#include <set>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

void solve()
{
  string s1, s2, s3;
  cin >> s1 >> s2;
  ll int sum1, sum;
  sum1 = stoll(s1) + stoll(s2);
  s1.erase(remove(s1.begin(), s1.end(), '0'), s1.end());
  s2.erase(remove(s2.begin(), s2.end(), '0'), s2.end());
  sum = stoll(s1) + stoll(s2);
  s3 = to_string(sum1);
  s3.erase(remove(s3.begin(), s3.end(), '0'), s3.end());
  cout << (to_string(sum) == s3 ? "YES" : "NO") << endl;
}

int main()
{
  solve();
  return 0;
}