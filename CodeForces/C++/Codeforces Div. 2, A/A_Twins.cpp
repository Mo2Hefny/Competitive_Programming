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
  int num_coins;
  cin>> num_coins;
  vector<int> value(num_coins);
  for (int i = 0; i < num_coins; i++)
  {
    cin>> value[i];
  }
  sort(value.begin(), value.end(), greater<int>());
  int total = accumulate(value.begin(), value.end(), 0);
  int coins = 0, sum = 0;
  for (int i = 0; i < num_coins; i++)
  {
    if (sum > total)
      break;
    sum += value[i];
    total -= value[i];
    coins++;
  }
  cout << coins << endl;
}