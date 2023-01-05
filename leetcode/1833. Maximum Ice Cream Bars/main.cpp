#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxIceCream(vector<int> &costs, int coins)
    {
        sort(costs.begin(), costs.end());

        int count = 0;

        for (int n : costs)
        {
            if (n <= coins)
            {
                count++;
                coins -= n;
            }
            else
            {
                break;
            }
        }

        return count;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> costs = {1, 3, 2, 4, 1};
    int coins = 7;

    Solution solver;
    cout << boolalpha << solver.maxIceCream(costs, coins);
}
