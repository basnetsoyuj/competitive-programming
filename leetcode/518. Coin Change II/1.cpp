#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int change(int amount, vector<int> &coins)
    {
        vector<vector<int>> dp(amount + 1, vector<int>(coins.size(), -1));
        return helper(amount, coins, dp, 0);
    }

    int helper(int amount, vector<int> &coins, vector<vector<int>> &dp, int x)
    {
        if (amount == 0)
            return 1;

        if (amount < 0)
            return 0;

        if (dp[amount][x] != -1)
            return dp[amount][x];

        dp[amount][x] = 0;

        for (int i = x; i < coins.size(); i++)
            dp[amount][x] += helper(amount - coins[i], coins, dp, i);

        return dp[amount][x];
    }
};
// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> coins = {5, 1, 2};
    Solution solver;
    cout << solver.change(5, coins) << endl;
}