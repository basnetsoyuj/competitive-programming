#include <bits/stdc++.h>

using namespace std;

// simple O(n^2) solution
class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        vector<int> dp(nums.size(), 1);

        for (int i = 0; i < nums.size(); i++)
            // look back and get the maximum from something smaller than itself
            for (int j = 0; j < i; j++)
                if (nums[j] < nums[i])
                    dp[i] = max(dp[i], dp[j] + 1);

        // return the max value in dp[]
        int maximum = dp[0];
        for (int i = 1; i < dp.size(); i++)
            if (dp[i] > maximum)
                maximum = dp[i];

        return maximum;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};
    Solution solver;
    cout << solver.lengthOfLIS(nums);
}