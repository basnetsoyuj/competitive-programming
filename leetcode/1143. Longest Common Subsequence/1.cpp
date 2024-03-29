#include <bits/stdc++.h>

using namespace std;

// solution using table (check main.cpp for optimized space)
class Solution
{
public:
    int longestCommonSubsequence(string text1, string text2)
    {
        int m = text1.size(), n = text2.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        for (int i = 1; i <= m; i++)
            for (int j = 1; j <= n; j++)
                // if chars are equal, common subsequence increases by 1
                if (text1[i - 1] == text2[j - 1])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                // else its the max of previous result
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);

        return dp[m][n];
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << solver.longestCommonSubsequence("adbec", "abc");
}
