#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int coinChange(vector<int> &coins, int amount)
    {
        // for memoization
        int *M = new int[amount + 1];
        for (int i = 0; i < amount + 1; i++)
            M[i] = 0;

        int result = coinChange(coins, amount, M);
        delete[] M;
        return result;
    }

    int coinChange(vector<int> &coins, int amount, int *M)
    {
        if (amount < 0)
            return -1;
        if (amount == 0)
            return 0;
        if (M[amount])
            return M[amount];

        int minimum(INT_MAX), temp;

        // try all coins
        for (int i = 0; i < coins.size(); i++)
        {
            temp = coinChange(coins, amount - coins[i], M);
            // if more minimum is found, replace
            if (temp != -1 && minimum > temp + 1)
                minimum = temp + 1;
        }

        // save and return either -1 or the minimum amount
        return M[amount] = minimum == INT_MAX ? -1 : minimum;
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