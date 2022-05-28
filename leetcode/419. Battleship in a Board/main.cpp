#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int countBattleships(vector<vector<char>> &board)
    {
        int counter(0);
        for (int i = 0; i < board.size(); i++)
            for (int j = 0; j < board[0].size(); j++)
                if (board[i][j] == 'X' && (i == board.size() - 1 || board[i + 1][j] == '.') && (j == board[0].size() - 1 || board[i][j + 1] == '.'))
                    counter++;
        return counter;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<vector<char>> board = {{'X', '.', '.', 'X'}, {'.', '.', '.', 'X'}, {'.', '.', '.', 'X'}};

    Solution solver;
    cout << solver.countBattleships(board);
}