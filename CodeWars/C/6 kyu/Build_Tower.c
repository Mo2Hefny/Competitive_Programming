void build_tower(unsigned n, char tower[n][2 * n - 1])
{
	int col = 2 * n - 1, star = 1, spaces;
  for (int i = 0; i < n; i++)
    {
    spaces = col - star;
    int flag = star;
    for (int j = 0; j < col; j++)
      {
      
      if (j < spaces / 2)
        tower[i][j] = ' ';
      else if (j > spaces / 2 && !flag)
        tower[i][j] = ' ';
      else
        {
        tower[i][j] = '*';
        flag--;
        }
      }
    star += 2;
    }
}