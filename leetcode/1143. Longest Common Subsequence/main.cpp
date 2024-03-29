#include <bits/stdc++.h>

using namespace std;

// solution with optimized space
class Solution
{
public:
    int longestCommonSubsequence(string text1, string text2)
    {
        int m = text1.size(), n = text2.size();
        vector<int> dp(n + 1, 0), temp(n + 1, 0);
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                int len(0);
                if (text1[i - 1] == text2[j - 1])
                    len = dp[j - 1] + 1;
                else
                    len = max(dp[j], temp[j - 1]);
                temp[j] = len;
            }
            dp = temp;
            fill(temp.begin(), temp.end(), 0);
        }

        return dp[n];
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
