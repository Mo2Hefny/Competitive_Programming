#include <iostream>

using namespace std;

void swap(int a, int b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}

int main()
{
  int n, s[100];
  int j, i = 0, min, max, count;
  cin >> n;
  while (i < n)
    cin >> s[i++];
  min = n - 1;
  max = n - 1;
  for (i = 0; i + 1 < n; i++)
  {
    for (j = i + 1; j < n; j++)
      if (s[i] >= s[j])
        break;
    if (j == n)
    {
      min = i;
      break;
    }
  }
  for (i = 0; i + 1 < n; i++)
  {
    for (j = i + 1; j < n; j++)
      if (s[i] < s[j])
        break;
    if (j == n)
    {
      max = i;
      break;
    }
  }
  if (max > min)
  {
    count = max + (n - min - 1) - 1;
  }
  else
    count = max + (n - min - 1);
  printf("%d\n", count);
  return 0;
}