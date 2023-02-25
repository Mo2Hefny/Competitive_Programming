#include <iostream>

using namespace std;

int main()
{
  int matrix[5][5];
  int row, col, count = 0;
  int i;
  for (int i = 0; i < 5; ++i)
  {
    for (int j = 0; j < 5; ++j)
    {
      cin >> matrix[i][j];
      if (matrix[i][j])
      {
        row = i; col = j;
      }
    }
  }
  while (row != 2 || col != 2)
  {
    if (row > 2)
    {
    row--;
    count++;
    }
    else if (row < 2)
    {
      row++;
      count++;
    }
    if (col > 2)
    {
    col--;
    count++;
    }
    else if (col < 2)
    {
      col++;
      count++;
    }
  }
  cout << count <<endl;
  return 0;
}
