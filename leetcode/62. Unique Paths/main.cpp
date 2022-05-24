#include <bits/stdc++.h>

using namespace std;

class Solution
{

public:
    int uniquePaths(int m, int n)
    {
        int M[100][100];

        for (int i = 0; i < m; i++)
            M[i][n - 1] = 1;
        for (int j = 0; j < n; j++)
            M[m - 1][j] = 1;

        for (int i = m - 2; i >= 0; i--)
            for (int j = n - 2; j >= 0; j--)
                M[i][j] = M[i + 1][j] + M[i][j + 1];

        return M[0][0];
    }
};