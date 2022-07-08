#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>> M(n, vector<int>(n));
        int counter(1), r1(0), r2(n - 1), c1(0), c2(n - 1);

        while (r1 <= r2 && c1 <= c2)
        {
            // move left to right
            for (int col = c1; col <= c2; col++)
                M[r1][col] = counter++;

            // move top to bottom
            for (int row = r1 + 1; row <= r2; row++)
                M[row][c2] = counter++;

            if (r1 < r2 && c1 < c2)
            {
                // move right to left
                for (int col = c2 - 1; col > c1; col--)
                    M[r2][col] = counter++;

                // move bottom to top
                for (int row = r2; row > r1; row--)
                    M[row][c1] = counter++;
            }

            r1++;
            c1++;
            r2--;
            c2--;
        }

        return M;
    }
};