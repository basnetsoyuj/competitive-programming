#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> subset;
        bool chosen[21] = {0}; // -10 <= nums[i] <= 10

        recurse(subset, nums, chosen, ans);
        return ans;
    }

    void recurse(vector<int> &subset, vector<int> &nums, bool chosen[], vector<vector<int>> &ans)
    {
        if (subset.size() == nums.size())
            ans.push_back(subset);
        else
        {
            for (int n : nums)
            {
                // offset by 10 because of -10 <= nums[i] <= 10
                if (chosen[n + 10])
                    continue;

                chosen[n + 10] = true;
                subset.push_back(n);
                recurse(subset, nums, chosen, ans);
                chosen[n + 10] = false;
                subset.pop_back();
            }
        }
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {1, 2, 3};
    Solution solver;
    for (vector<int> subset : solver.permute(nums))
    {
        for (int n : subset)
            cout << n << " ";
        cout << endl;
    }
}
