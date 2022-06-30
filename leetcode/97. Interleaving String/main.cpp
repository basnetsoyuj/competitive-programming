#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isInterleave(string s1, string s2, string s3)
    {
        if (s1.size() + s2.size() != s3.size())
            return false;

        int M[201][201];
        for (int i = 0; i < 201; i++)
            for (int j = 0; j < 201; j++)
                M[i][j] = -1;

        return helper(s1, s2, s3, 0, 0, M);
    }

    bool helper(string &s1, string &s2, string &s3, int a, int b, int M[201][201])
    {
        if (M[a][b] != -1)
            return M[a][b];

        int c = a + b;
        if (a == s1.size() && b == s2.size() && c == s3.size())
            return true;

        bool x(0), y(0);

        // try using s1's char
        if (a != s1.size() && s1[a] == s3[c])
            x = helper(s1, s2, s3, a + 1, b, M);

        // if s1 cannot, try s2
        if (!x && b != s2.size() && s2[b] == s3[c])
            y = helper(s1, s2, s3, a, b + 1, M);

        // return if either of them or both can
        return M[a][b] = x || y;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << boolalpha << solver.isInterleave("aabcc", "dbbca", "aadbbcbcac");
}