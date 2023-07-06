#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    unordered_map<int, int> M;
    int maximumJumps(vector<int> &nums, int target)
    {
        return helper(nums, target, 0);
    }

    int helper(vector<int> &nums, int target, int i)
    {
        if (i == nums.size() - 1)
            return 0;
        else if (i >= nums.size())
            return -1;

        if (M.find(i) == M.end())
        {
            M[i] = -1;
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (abs(nums[j] - nums[i]) <= target)
                {
                    int val = helper(nums, target, j);
                    if (val != -1)
                        M[i] = max(1 + val, M[i]);
                }
            }
        }

        return M[i];
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    vector<int> nums = {1, 3, 6, 4, 1, 2};
    cout << solver.maximumJumps(nums, 2) << endl;
}