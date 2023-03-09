#include <vector>
std::vector<int> snail(const std::vector<std::vector<int>> &snail_map) {
    int col, row;
    col = row = snail_map[0].size();
    std::vector<int> s;
    char dir[]{'e', 's', 'w', 'n'};
    int x = 0, y = -1;
    for (int i = 0; col != 0 && row != 0; i++)
    {
        switch (dir[i%4])
        {
        case 'e':
            for (int j = 0; j < col; j++)
                s.push_back(snail_map[x][++y]);
            row--;
            break;
        case 's':
            for (int j = 0; j < row; j++)
                s.push_back(snail_map[++x][y]);
            col--;
            break;
        case 'w':
            for (int j = 0; j < col; j++)
                s.push_back(snail_map[x][--y]);
            row--;
            break;
        case 'n':
            for (int j = 0; j < row; j++)
                s.push_back(snail_map[--x][y]);
            col--;
            break;
        }
    }
    return s;
}