#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int numIslands(vector<vector<char>> &grid)
    {
        // counter
        int n = 0;

        // iterate through the entire grid
        for (int i = 0; i < grid.size(); i++)
            for (int j = 0; j < grid[0].size(); j++)
                // if '1' is discovered, recursively change neighbouring '1's to '0's
                if (grid[i][j] == '1')
                {
                    recursive_remove(grid, i, j);

                    // increment counter
                    n++;
                }

        return n;
    }

    // method to recursively change '1' to '0' and call itself recursively on its neighbours
    void recursive_remove(vector<vector<char>> &grid, int i, int j)
    {
        // base case to stop in edge cases and when '0' is encountered
        if (i < 0 || j < 0 || j > grid[0].size() - 1 || i > grid.size() - 1 || grid[i][j] == '0')
            return;

        // set grid cell to '0'
        grid[i][j] = '0';

        // recursively call on the left, right, top and bottom cell
        recursive_remove(grid, i + 1, j);
        recursive_remove(grid, i, j + 1);
        recursive_remove(grid, i - 1, j);
        recursive_remove(grid, i, j - 1);
    }
};

int main()
{
    char arr[4][5] = {{'1', '1', '1', '1', '0'}, {'1', '1', '0', '1', '0'}, {'1', '1', '0', '0', '0'}, {'0', '0', '0', '0', '0'}};
    vector<vector<char>> grid;

    for (int i = 0; i < 5; i++)
        grid.push_back(vector<char>(arr[i], arr[i] + 5));

    Solution solver;
    std::cout << solver.numIslands(grid);
}