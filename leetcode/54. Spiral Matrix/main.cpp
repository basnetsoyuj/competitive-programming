#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> M;

        int r1 = 0, r2 = matrix.size() - 1, c1(0), c2 = matrix[0].size() - 1, counter(1);
        while (r1 <= r2 && c1 <= c2)
        {
            // move left to right
            for (int col = c1; col <= c2; col++)
                M.push_back(matrix[r1][col]);

            // move top to bottom
            for (int row = r1 + 1; row <= r2; row++)
                M.push_back(matrix[row][c2]);

            if (r1 < r2 && c1 < c2)
            {
                // move right to left
                for (int col = c2 - 1; col > c1; col--)
                    M.push_back(matrix[r2][col]);

                // move bottom to top
                for (int row = r2; row > r1; row--)
                    M.push_back(matrix[row][c1]);
            }

            r1++;
            c1++;
            r2--;
            c2--;
        }

        return M;
    }
};