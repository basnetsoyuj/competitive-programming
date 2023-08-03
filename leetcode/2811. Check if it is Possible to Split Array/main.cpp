#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int M[101][101];

    bool canSplitArray(vector<int> &nums, int m)
    {
        if (nums.size() <= 2)
            return true;

        memset(M, -1, sizeof(int) * 101 * 101);
        int sum = 0;
        for (int n : nums)
            sum += n;
        return helper(nums, 0, nums.size() - 1, sum, m);
    }

    bool helper(vector<int> &nums, int l, int r, int sum, int m)
    {
        if (r - l < 1)
            return true;
        else if (sum < m)
            return false;

        else if (M[l][r] == -1)
            M[l][r] = helper(nums, l + 1, r, sum - nums[l], m) || helper(nums, l, r - 1, sum - nums[r], m);

        return M[l][r];
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {2, 3, 3, 2, 3};
    Solution solver;

    cout << boolalpha << solver.canSplitArray(nums, 6) << endl;
}