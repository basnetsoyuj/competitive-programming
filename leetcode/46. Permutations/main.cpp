#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        recurse(nums, ans, 0);
        return ans;
    }

    void recurse(vector<int> &nums, vector<vector<int>> &ans, int x)
    {
        if (x == nums.size())
            ans.push_back(nums);
        else
            for (int i = x; i < nums.size(); i++)
            {
                swap(nums[i], nums[x]);
                recurse(nums, ans, x + 1);
                swap(nums[i], nums[x]);
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
