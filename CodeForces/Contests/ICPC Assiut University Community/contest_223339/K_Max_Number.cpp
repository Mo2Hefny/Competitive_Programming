#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll int recursion(vector<ll int> *arr,int i)
{
  if (i >= arr->size() - 1)
    return arr->at(i);
  return max(arr->at(i), recursion(arr, i + 1));
}

int main()
{
  int n;
  cin >> n;
  vector<ll int> arr(n);
  for (auto &x : arr) cin >> x;
  cout << recursion(&arr, 0);
  return 0;
}