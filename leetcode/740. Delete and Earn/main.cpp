#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int deleteAndEarn(vector<int> &nums)
    {
        int val[10001], dp[10001];

        for (int i = 0; i < 10001; i++)
            val[i] = 0;

        // val array stores sum of all same numbers in nums
        for (int num : nums)
            val[num] += num;

        // initial value
        dp[0] = 0;
        dp[1] = val[1];

        // for each number, take max of its val[i] + dp[i - 2] or choose dp[i - 1]
        for (int i = 2; i < 10001; i++)
            dp[i] = max(val[i] + dp[i - 2], dp[i - 1]);

        return dp[10000];
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {2, 2, 3, 3, 3, 4};
    Solution solver;
    cout << solver.deleteAndEarn(nums);
}