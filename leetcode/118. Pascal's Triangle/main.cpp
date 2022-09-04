#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> answer;

        for (int i = 0; i < numRows; i++)
            answer.push_back(vector<int>(i + 1, 0));

        answer[0][0] = 1;

        for (int i = 0; i < numRows - 1; i++)
            for (int j = 0; j < answer[i].size(); j++)
            {
                answer[i + 1][j] += answer[i][j];
                answer[i + 1][j + 1] += answer[i][j];
            }

        return answer;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;

    for (vector<int> &row : solver.generate(5))
    {
        for (int &num : row)
            cout << num << " ";
        cout << endl;
    }

    return 0;
}