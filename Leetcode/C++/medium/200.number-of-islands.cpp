/*
 * @lc app=leetcode id=200 lang=cpp
 *
 * [200] Number of Islands
 */

// @lc code=start
class Solution {
public:
    void DFS (vector<vector<char>>& grid, int r, int c, vector<vector<bool>>& visited)
    {
        int row_dir[] = {-1, 0, 0, 1};
        int col_dir[] = {0, -1, 1, 0};

        visited[r][c] = true;
        for (int i = 0; i < 4; i++)
        {
            int new_r = r + row_dir[i];
            int new_c = c + col_dir[i];

            if (new_c >= 0 && new_c < grid[0].size() && new_r >= 0 && new_r < grid.size()
            && grid[new_r][new_c] == '1' && !visited[new_r][new_c])
                DFS (grid, new_r, new_c, visited);
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        vector<vector<bool>> visited (grid.size(), vector<bool> (grid[0].size()));
        for (int i = 0; i < visited.size(); i++)
            for (int j = 0; j < visited[i].size(); j++)  visited[i][j] = false;
        
        int count = 0;
        for (int i = 0; i < grid.size(); i++)
            for (int j = 0; j < grid[i].size(); j++)
                if (grid[i][j] == '1' && !visited[i][j])
                {
                    count++;
                    DFS (grid, i, j, visited);
                }
        return count;
    }
};
// @lc code=end

