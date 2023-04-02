/*
 * @lc app=leetcode id=79 lang=cpp
 *
 * [79] Word Search
 */

// @lc code=start
class Solution
{
    int x[4] = {1, 0, 0, -1};
    int y[4] = {0, 1, -1, 0};
public:
    bool solve(vector<vector<char>> &board, string word, int r, int c)
    {
        if (word.empty())
            return true;

        for (int i = 0; i < 4; i++)
        {
            int new_r = r + y[i];
            int new_c = c + x[i];
            if (new_r >= board.size() || new_r < 0 || new_c >= board[0].size() || new_c < 0)
                continue;
            if (board[new_r][new_c] == word[0])
            {
                char tmp = board[r][c];
                board[r][c] = '.';
                if (solve(board, word.substr(1), new_r, new_c))
                    return true;
                board[r][c] = tmp;
            }
        }
        return false;
    }

    bool exist(vector<vector<char>> &board, string word)
    {
        bool found = false;

        for (int i = 0; i < board[0].size() && !found; i++)
            for (int j = 0; j < board.size() && !found; j++)
                if (board[j][i] == word[0])
                    found = solve(board, word.substr(1), j, i);

        return found;
    }
};
// @lc code=end
