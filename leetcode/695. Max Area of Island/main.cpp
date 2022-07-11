#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int area(0);

        for (int i = 0; i < grid.size(); i++)
            for (int j = 0; j < grid[0].size(); j++)
                area = max(area, recursive(grid, i, j));

        return area;
    }

    int recursive(vector<vector<int>> &grid, int i, int j)
    {
        if (i < 0 || i > grid.size() - 1 || j < 0 || j > grid[0].size() - 1)
            return 0;

        if (grid[i][j] == 0)
            return 0;

        grid[i][j] = 0;

        return 1 + recursive(grid, i + 1, j) + recursive(grid, i - 1, j) + recursive(grid, i, j + 1) + recursive(grid, i, j - 1);
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<vector<int>> grid = {{0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0}, {0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0}, {0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0}};

    Solution solver;
    cout << solver.maxAreaOfIsland(grid);
}