#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int max_profit(0), profit(0);

        for (int i = 1; i < prices.size(); i++)
        {
            // running profit is either 0 or if prices[i] - prices[i - 1] is positive, we add the profit
            profit = max(0, profit + prices[i] - prices[i - 1]);

            // keep track of max_profit
            if (profit > max_profit)
                max_profit = profit;
        }

        return max_profit;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    // input array
    int arr[] = {7, 1, 5, 3, 6, 4};

    std::vector<int> prices(arr, arr + sizeof(arr) / sizeof(int));

    Solution solver;
    std::cout << solver.maxProfit(prices);

    return 0;
}