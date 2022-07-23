#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string convert(string s, int numRows)
    {
        vector<string> rows(numRows, "");

        int i = 0, row = 0, x = 1;
        while (i < s.size())
        {
            rows[row] += s[i++];
            if (row == 0)
                x = 1;
            else if (row == numRows - 1)
                x = -1;
            row = (row + x) % numRows;
        }

        string final = "";
        for (string s : rows)
            final += s;
        return final;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << solver.convert("PAYPALISHIRING", 3);
}