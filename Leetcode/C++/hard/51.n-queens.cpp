/*
 * @lc app=leetcode id=51 lang=cpp
 *
 * [51] N-Queens
 */

// @lc code=start
#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<vector<string>> solutions;
    vector<int> neg_diag;   //r - c
    vector<int> pos_diag;   //r + c

    bool IsValid (vector<string> board, int row, int col)
    {
        //Queen already found in the same column.
        for (int i = 0; i < board.size(); i++)
            if (board[i][col] == 'Q')   return false;

        //Position is on the diagonals of another Queen.
        for (int i = 0; i < neg_diag.size(); i++)
            if (row - col == neg_diag[i] || row + col == pos_diag[i])
                return false;

        return true;
    }

    void solve(vector<string>& board, int row)
    {
        //A Queen is correctly placed on all the rows of the board.
        if (row == board.size())
        {
            solutions.push_back(board);
            return;
        }

        //Try all the possible placements for the Queen.
        for (int i = 0; i < board.size(); i++)
        {
             if(IsValid(board, row, i))
             {
                //Set the Board for the coming Recursive call.
                board[row][i] = 'Q';
                neg_diag.push_back(row - i);
                pos_diag.push_back(row + i);
                solve(board, row + 1);
                //Backtracking
                neg_diag.pop_back();
                pos_diag.pop_back();
                board[row][i] = '.';
             }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board (n, string (n, '.'));
        solve(board, 0);
        return solutions;
    }
};
// @lc code=end

