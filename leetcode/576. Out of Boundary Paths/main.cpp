#include <bits/stdc++.h>

using namespace std;

const int C = pow(10, 9) + 7;

class Solution
{
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn)
    {
        int M[50][50][51];

        for (int i = 0; i < 50; i++)
            for (int j = 0; j < 50; j++)
            {
                M[i][j][0] = 0;
                for (int k = 1; k <= 50; k++)
                    M[i][j][k] = -1;
            }

        return findPaths(m, n, maxMove, startRow, startColumn, M);
    }

    int findPaths(int m, int n, int maxMove, int startRow, int startColumn, int M[50][50][51])
    {
        if (startRow < 0 || startRow >= m || startColumn < 0 || startColumn >= n)
            return 1;

        if (M[startRow][startColumn][maxMove] == -1)
            M[startRow][startColumn][maxMove] = ((long)findPaths(m, n, maxMove - 1, startRow - 1, startColumn, M) +
                                                 (long)findPaths(m, n, maxMove - 1, startRow + 1, startColumn, M) +
                                                 (long)findPaths(m, n, maxMove - 1, startRow, startColumn - 1, M) +
                                                 (long)findPaths(m, n, maxMove - 1, startRow, startColumn + 1, M)) %
                                                C;

        return M[startRow][startColumn][maxMove];
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << solver.findPaths(8, 50, 23, 5, 26);
}