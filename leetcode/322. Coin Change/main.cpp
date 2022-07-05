#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int coinChange(vector<int> &coins, int amount)
    {
        // create array for memoization from 0...amount
        int M[++amount];

        // M[0] = 0
        M[0] = 0;

        // sort coins to optimize not trying larger coins for smaller amounts
        sort(coins.begin(), coins.end());

        // create solutions for each amount from 1 to original amount
        for (int i = 1; i < amount; i++)
        {
            // initially its INT_MAX
            M[i] = INT_MAX;

            // for each coin (from small to large coin)
            for (int coin : coins)
                // if it does not fit, break out
                if (coin > i)
                    break;

                // if solution to M[i - coin] is known, then M[i - coin] + 1 is a solution of M[i] (take the min)
                else if (M[i - coin] != INT_MAX)
                    M[i] = min(M[i], M[i - coin] + 1);
        }

        // return the last element if it is possible, else INT_MAX denotes there is no possible combination so return -1
        return M[--amount] == INT_MAX ? -1 : M[amount];
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> coins = {1, 2, 5};
    Solution solver;
    cout << solver.coinChange(coins, 11);
}