#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int minCost(string colors, vector<int> &neededTime)
    {
        int n = 0, cost = 0;
        for (int i = 1; i < colors.size(); i++)
        {
            // if color is not same, change value of tracker n
            if (colors[i] != colors[n])
            {
                n = i;
                continue;
            }

            // check if time needed to remove current balloon is greater than the previous balloon of the same color
            if (neededTime[n] < neededTime[i])
            {
                // if so, add cost of removing previous balloon to the total cost
                cost += neededTime[n];

                // change tracker n to current balloon
                n = i;
            }
            else
            {
                // if not, add cost of removing current balloon to the total cost
                cost += neededTime[i];
            }
        }

        return cost;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    vector<int> neededTime = {1, 2, 3, 4, 1};
    cout << solver.minCost("aabaa", neededTime) << endl;
}