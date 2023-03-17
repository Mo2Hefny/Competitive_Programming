/*
 * @lc app=leetcode id=37 lang=cpp
 *
 * [37] Sudoku Solver
 */

// @lc code=start
#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    bool IsValid (vector<vector<char>> board, int y, int x, char num)
    {
        //Number already found in the same row.
        for (int i = 0; i < 9; i++)
            if(num == board[y][i])  return false;

        //Number already found in the same column.
        for (int i = 0; i < 9; i++)
            if(num == board[i][x])  return false;

        //Number already found in the same 3X3 section.
        int row = y - y % 3, col = x - x % 3;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                if (num == board[row + i][col + j]) return false;

        return true;
    }

    bool solve(vector<vector<char>>& board, int y, int x)
    {
        if (x == 9) return solve(board, y + 1, 0);
        if (y == 9) return true;
        if (board[y][x] != '.') return solve(board, y, x + 1);

        //Try all the possible number combinations.
        for (char i = '1'; i <= '9'; i++)
        {
            if(IsValid(board, y, x, i))
            {
                //Set the Board for the coming Recursive call.
                board[y][x] = i;
                //If a solution is found, don't continue lokking for a sloution.
                if (solve(board, y, x + 1))  return true;
                //Backtracking
                board[y][x] = '.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board, 0, 0);
    }
};
// @lc code=end

