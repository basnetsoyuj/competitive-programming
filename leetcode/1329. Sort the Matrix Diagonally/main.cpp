#include <bits/stdc++.h>

using namespace std;

// O(n^2 log n) time
// O(n) space
class Solution
{
public:
    vector<vector<int>> diagonalSort(vector<vector<int>> &mat)
    {
        priority_queue<int> pq;

        for (int i = 0; i < mat.size(); i++)
            sort(mat, i, 0, pq);

        for (int i = 1; i < mat[0].size(); i++)
            sort(mat, 0, i, pq);

        return mat;
    }

    // uses heap to sort a diagonal starting at (i, j)
    void sort(vector<vector<int>> &mat, int i, int j, priority_queue<int> &pq)
    {
        while (i < mat.size() && j < mat[0].size())
            pq.push(mat[i++][j++]);

        while (pq.size())
        {
            mat[--i][--j] = pq.top();
            pq.pop();
        }
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<vector<int>> mat = {{11, 25, 66, 1, 69, 7}, {23, 55, 17, 45, 15, 52}, {75, 31, 36, 44, 58, 8}, {22, 27, 33, 25, 68, 4}, {84, 28, 14, 11, 5, 50}};
    Solution solver;

    for (vector<int> row : solver.diagonalSort(mat))
    {
        for (int n : row)
            cout << n << " ";
        cout << endl;
    }
}
