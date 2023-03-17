/*
 * @lc app=leetcode id=52 lang=cpp
 *
 * [52] N-Queens II
 */

// @lc code=start
#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int solutions;

    bool IsValid (vector<string> board, int row, int col)
    {
        //Queen already found in the same column.
        for (int i = 0; i < board.size(); i++)
            if (board[i][col] == 'Q')   return false;

        //Check past diagonals only as we know there is no Queen after the current one.
        for (int i = 0; i <= row; i++)
        {
            if (row - i >= 0 && col - i >= 0 && board[row - i][col - i] == 'Q')
                return false;
            if (row - i >= 0 && col + i < board.size() && board[row - i][col + i] == 'Q')
                return false;
        }

        return true;
    }

    void solve(vector<string>& board, int row)
    {
        //A Queen is correctly placed on all the rows of the board.
        if (row == board.size())
        {
            solutions++;
            return;
        }

        //Try all the possible placements for the Queen.
        for (int i = 0; i < board.size(); i++)
        {
             if(IsValid(board, row, i))
             {
                //Set the Board for the coming Recursive call.
                board[row][i] = 'Q';
                solve(board, row + 1);
                //Backtracking
                board[row][i] = '.';
             }
        }
    }

    int totalNQueens(int n) {
        vector<string> board (n, string (n, '.'));
        solve(board, 0);
        return solutions;
    }
};
// @lc code=end

