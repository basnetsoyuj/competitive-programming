#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxSum(vector<vector<int>> &grid)
    {
        int maximum = INT_MIN;

        for (int m = 0; m < grid.size() - 2; m++)
        {
            for (int n = 0; n < grid[0].size() - 2; n++)
            {
                int sum = grid[m][n] + grid[m][n + 1] + grid[m][n + 2] +
                          grid[m + 1][n + 1] +
                          grid[m + 2][n] + grid[m + 2][n + 1] + grid[m + 2][n + 2];
                if (sum > maximum)
                    maximum = sum;
            }
        }

        return maximum;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<vector<int>> grid = {{6, 2, 1, 3}, {4, 2, 1, 5}, {9, 2, 8, 7}, {4, 1, 2, 9}};
    Solution solver;

    cout << solver.maxSum(grid) << endl;
}
