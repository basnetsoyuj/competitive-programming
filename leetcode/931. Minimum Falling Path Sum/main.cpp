#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int minFallingPathSum(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        // look down and choose the minimum number
        for (int i = n - 2; i >= 0; i--)
            for (int j = 0; j < n; j++)
            {
                int minimum = INT_MAX;
                for (int k = -1; k <= 1; k++)
                    if (j + k >= 0 && j + k < n && matrix[i + 1][j + k] < minimum)
                        minimum = matrix[i + 1][j + k];
                matrix[i][j] += minimum;
            }

        int minimum = matrix[0][0];

        for (int i = 1; i < n; i++)
            if (matrix[0][i] < minimum)
                minimum = matrix[0][i];

        return minimum;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    vector<vector<int>> matrix = {{2, 1, 3}, {6, 5, 4}, {7, 8, 9}};
    cout << solver.minFallingPathSum(matrix);
}
