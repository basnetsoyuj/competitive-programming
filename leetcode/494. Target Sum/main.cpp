#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    map<pair<int, int>, int> dp;
    int findTargetSumWays(vector<int> &nums, int target)
    {
        return helper(nums, target, 0);
    }

    int helper(vector<int> &nums, int target, int i)
    {
        if (i >= nums.size())
            return target == 0;

        if (dp.find({target, i}) == dp.end())
            dp[{target, i}] = helper(nums, target + nums[i], i + 1) + helper(nums, target - nums[i], i + 1);

        return dp[{target, i}];
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {1, 1, 1, 1, 1};
    Solution solver;
    cout << solver.findTargetSumWays(nums, 3) << endl;
}