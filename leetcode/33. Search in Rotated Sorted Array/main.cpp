#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        return helper(nums, target, 0, nums.size() - 1);
    }

    int helper(vector<int> &nums, int target, int l, int r)
    {
        if (l > r)
            return -1;

        const int m = (l + r) / 2;

        if (nums[m] == target)
            return m;

        // if left partition is good
        if (nums[l] <= nums[m])
            // if target is within range
            if (target >= nums[l] && target < nums[m])
                return helper(nums, target, l, m - 1);
            else
                return helper(nums, target, m + 1, r);
        // if right partition is good
        else if (target > nums[m] && target <= nums[r])
            return helper(nums, target, m + 1, r);
        else
            return helper(nums, target, l, m - 1);
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    Solution solver;

    cout << solver.search(nums, 0) << endl;
}