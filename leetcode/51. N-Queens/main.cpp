#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> ans;
        vector<string> sol(n, string(n, '.'));
        vector<bool> column(n, 0), diag1(n, 0), diag2(n, 0);

        // start recursive solution
        solveNQueens(0, n, column, diag1, diag2, ans, sol);
        return ans;
    }

    void solveNQueens(int i, int n, vector<bool> &column, vector<bool> &diag1, vector<bool> &diag2, vector<vector<string>> &ans, vector<string> &sol)
    {
        // if n queens placed on the board, add solution
        if (i == n)
            ans.push_back(sol);

        for (int j = 0; j < n; j++)
        {
            // check if queen can be added in col j
            if (column[j] || diag1[i + j] || diag2[j - i + n - 1])
                continue;

            // set all locations for column and diagonals covered by queen when placed in col j
            column[j] = diag1[i + j] = diag2[j - i + n - 1] = true;
            sol[i][j] = 'Q';

            // recurse
            solveNQueens(i + 1, n, column, diag1, diag2, ans, sol);

            // backtrack
            column[j] = diag1[i + j] = diag2[j - i + n - 1] = false;
            sol[i][j] = '.';
        }
    }
};

// -------------------------------------------------------------//
// ---------------------To Run The Solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;

    for (vector<string> row : solver.solveNQueens(5))
    {
        for (string s : row)
            cout << s << endl;

        cout << endl;
    }
}