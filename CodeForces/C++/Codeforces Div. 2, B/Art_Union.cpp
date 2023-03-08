#include <iostream>

using namespace std;

int main()
{
  int paintings, artists;
  cin >> paintings >> artists;
  int **t;
  int *total_t = new int[artists];
  t = new int *[paintings];
  for (int i = 0; i < paintings; i++)
  {
    t[i] = new int[artists];
    for (int j = 0; j < artists; j++)
    {
      total_t[j] = 0;
      cin >> t[i][j];
    }
  }
  int *seq = new int[paintings];
  for (int i = 0; i < paintings; i++)
  {
    for (int j = 0; j < artists; j++)
    {
      total_t[j] += t[i][j];
      for (int k = j + 1; k < artists; k++)
      {
        if (total_t[j] > total_t[k])
          total_t[k] = total_t[j];
      }
    }
    seq[i] = total_t[artists - 1];
  }

  for (int i = 0; i < paintings; i++)
    cout << seq[i] << " ";
  return 0;
}