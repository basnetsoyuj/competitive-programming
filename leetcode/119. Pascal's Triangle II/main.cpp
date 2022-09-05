#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> row(rowIndex + 1, 0);
        row[0] = 1;

        for (int i = 0; i < rowIndex; i++)
            for (int j = i; j >= 0; j--)
                row[j + 1] += row[j];

        return row;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;

    for (int n : solver.getRow(10))
        cout << n << " ";
    cout << endl;

    return 0;
}