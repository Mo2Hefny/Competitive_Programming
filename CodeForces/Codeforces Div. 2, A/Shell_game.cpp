#include <iostream>

using namespace std;

int main()
{
  int start, temp;
  int op[3]{0};
  int pos1[3], pos2[3];
  cin >> start;
  int i = 0;
  while (i < 3)
  {
    cin >> pos1[i] >> pos2[i];
    pos1[i]--;
    pos2[i]--;
    i++;
  }
  i = 0;
  while (i < 3)
  {
    if (i + 1 == start)
      op[i] = 1;
    i++;
  }
  for (i = 0; i < 3; i++)
  {
    temp = op[pos1[i]];
    op[pos1[i]] = op[pos2[i]];
    op[pos2[i]] = temp;
  }
  for (i = 0; i < 3; i++)
    if (op[i])
      cout << i + 1 << endl;
  return 0;
}