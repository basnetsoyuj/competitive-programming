#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int M[nums.size()];
        for (int i = 0; i < nums.size(); i++)
            M[i] = -1;

        return rob(nums, 0, M);
    }

    int rob(vector<int> &nums, int i, int M[])
    {
        if (i >= nums.size())
            return 0;

        if (M[i] == -1)
            M[i] = max(nums[i] + rob(nums, i + 2, M), rob(nums, i + 1, M));
        return M[i];
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {114, 117, 207, 117, 235, 82, 90, 67, 143, 146, 53, 108, 200, 91, 80, 223, 58, 170, 110, 236, 81, 90, 222, 160, 165, 195, 187, 199, 114, 235, 197, 187, 69, 129, 64, 214, 228, 78, 188, 67, 205, 94, 205, 169, 241, 202, 144, 240};

    Solution solver;
    cout << solver.rob(nums);
}