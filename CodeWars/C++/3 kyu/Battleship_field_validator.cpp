#include <vector>
int checkship(int x, int y, std::vector< std::vector<int> > field) {
  if (x > 0 && y < 9)
    if (field[y+1][x-1]) return 5;
  if (x < 9 && y < 9)
  {
    if (field[y+1][x+1]) return 5;
    if (field[y][x+1] && field[y+1][x]) return 5;
  }
  if (x < 9)
    if (field[y][x+1]) return 1 + checkship(x+1, y, field);
  if (y < 9)
    if (field[y+1][x]) return 1 + checkship(x, y+1, field);
  return 1;
}
bool validate_battlefield(std::vector< std::vector<int> > field) {
  int battleship = 0, cruiser = 0, destroyer = 0, submarine = 0;
  for (int y = 0; y < 10; y++)
  {
    for (int x = 0; x < 10; x++)
    {
      if (field[y][x])
      {
        if (x > 0 && field[y][x-1])
          continue;
        if (y > 0 && field[y-1][x])
          continue;
        switch (checkship(x, y, field)) {
            case 1: submarine++; break;
            case 2: destroyer++; break;
            case 3: cruiser++; break;
            case 4: battleship++; break;
            default: return false;
        }
      }
    }
  }
  if (battleship != 1) return false;
  if (cruiser != 2) return false;
  if (destroyer != 3) return false;
  if (submarine != 4) return false;
  return true;
}