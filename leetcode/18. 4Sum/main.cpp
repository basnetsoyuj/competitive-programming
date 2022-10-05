#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        if (nums.size() < 4)
            return {};

        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); increment(nums, i))
        {
            for (int j = i + 1; j < nums.size() - 2; increment(nums, j))
            {
                int l = j + 1, r = nums.size() - 1;
                long sum = 0;
                while (l < r)
                {
                    sum = (long)nums[i] + nums[j] + nums[l] + nums[r];
                    if (sum == target)
                    {
                        ans.push_back({nums[i], nums[j], nums[l], nums[r]});
                        increment(nums, l);
                        decrement(nums, r);
                    }
                    else if (sum < target)
                        increment(nums, l);
                    else
                        decrement(nums, r);
                }
            }
        }

        return ans;
    }

    void increment(vector<int> &nums, int &n)
    {
        do
            n++;
        while (n < nums.size() && nums[n] == nums[n - 1]);
    }

    void decrement(vector<int> &nums, int &n)
    {
        do
            n--;
        while (n >= 0 && nums[n] == nums[n + 1]);
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    Solution solver;

    for (vector<int> &v : solver.fourSum(nums, 0))
    {
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }
}