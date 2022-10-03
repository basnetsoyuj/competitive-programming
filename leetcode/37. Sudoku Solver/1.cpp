#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool is_valid(vector<vector<char>> &board, int r, int c, char ch)
    {
        for (int i = 0; i < 9; i++)
        {
            // check column
            if (board[i][c] == ch)
                return false;
            // check row
            if (board[r][i] == ch)
                return false;
            // check box
            if (board[3 * (r / 3) + i / 3][3 * (c / 3) + i % 3] == ch)
                return false;
        }

        return true;
    }

    void solveSudoku(vector<vector<char>> &board)
    {
        helper(board);
    }

    bool helper(vector<vector<char>> &board)
    {
        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
                if (board[i][j] == '.')
                {
                    // try all values from 1 to 9
                    for (char ch = '1'; ch <= '9'; ch++)

                        // only for valid values
                        if (is_valid(board, i, j, ch))
                        {
                            board[i][j] = ch;

                            // if recursive helper returns true, board is already solved
                            if (helper(board))
                                return true;

                            // else backtrack
                            board[i][j] = '.';
                        }

                    // if no values from 1 to 9 fit, return false
                    return false;
                }

        // if the code reached here, none of the board values were '.' so board is alredy solved
        return true;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    solver.solveSudoku(board);

    for (vector<char> &row : board)
    {
        for (char &ch : row)
            cout << ch << " ";
        cout << endl;
    }
}