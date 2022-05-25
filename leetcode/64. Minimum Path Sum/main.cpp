#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int minPathSum(vector<vector<int>> &grid)
    {
        int m = grid.size(), n = grid[0].size();

        // update grid values for the last row and last column
        for (int i = m - 2; i >= 0; i--)
            grid[i][n - 1] += grid[i + 1][n - 1];
        for (int j = n - 2; j >= 0; j--)
            grid[m - 1][j] += grid[m - 1][j + 1];

        // update grid value in reverse order and choose min path using DP
        for (int i = m - 2; i >= 0; i--)
            for (int j = n - 2; j >= 0; j--)
                grid[i][j] += min(grid[i + 1][j], grid[i][j + 1]);

        return grid[0][0];
    }
};

int main()
{
    vector<vector<int>> grid = {{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
    Solution solver;
    cout << solver.minPathSum(grid);
}