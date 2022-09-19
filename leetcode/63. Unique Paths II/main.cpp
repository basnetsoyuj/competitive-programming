#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
    {
        const int m = obstacleGrid.size(), n = obstacleGrid[0].size();
        vector<vector<int>> M(m, vector<int>(n, -1));
        M[m - 1][n - 1] = !obstacleGrid[m - 1][n - 1];
        return helper(obstacleGrid, M, 0, 0);
    }

    int helper(vector<vector<int>> &grid, vector<vector<int>> &M, int i, int j)
    {
        if (grid[i][j] == 1)
            return 0;

        if (M[i][j] != -1)
            return M[i][j];

        M[i][j] = 0;

        if (i + 1 < grid.size())
            M[i][j] += helper(grid, M, i + 1, j);

        if (j + 1 < grid[0].size())
            M[i][j] += helper(grid, M, i, j + 1);

        return M[i][j];
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    vector<vector<int>> grid = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
    cout << solver.uniquePathsWithObstacles(grid) << endl;
}
