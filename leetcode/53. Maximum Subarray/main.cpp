#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0, best = nums[0];

        for (int i = 0; i < nums.size(); i++)
        {
            sum = max(nums[i], sum + nums[i]);
            best = max(sum, best);
        }

        return best;
    }
};

// -------------------------------------------------------------//
// ---------------------To Run The Solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    Solution solver;
    cout << solver.maxSubArray(nums);
}