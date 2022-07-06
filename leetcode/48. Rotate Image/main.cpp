#include <bits/stdc++.h>

using namespace std;

// 0 ms solution
class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        // transpose
        for (int i = 0; i < matrix.size(); i++)
            for (int j = 0; j < i; j++)
                swap(matrix[i][j], matrix[j][i]);

        // reverse the sub vectors
        for (int i = 0; i < matrix.size(); i++)
            reverse(matrix[i].begin(), matrix[i].end());
    }
};