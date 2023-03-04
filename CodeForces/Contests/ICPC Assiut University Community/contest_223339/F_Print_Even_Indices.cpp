#include <bits/stdc++.h>

using namespace std;

void recursion(vector<int> *arr, int index)
{
  if (index >= arr->size())
    return;
  recursion(arr, index + 2);
  cout << arr->at(index) << " ";
}

int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (auto &x : arr) cin >> x;
  recursion(&arr, 0);
  return 0;
}