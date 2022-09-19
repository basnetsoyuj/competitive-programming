#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for (int i = 0; i < nums.size() - 2; increment(nums, i))
        {
            int l = i + 1, r = nums.size() - 1;

            while (l < r)
            {
                int sum = nums[i] + nums[l] + nums[r];
                if (sum == 0)
                {
                    ans.push_back({nums[i], nums[l], nums[r]});
                    increment(nums, l);
                    decrement(nums, r);
                }
                else if (sum > 0)
                    decrement(nums, r);
                else
                    increment(nums, l);
            }
        }

        return ans;
    }

    void increment(vector<int> &nums, int &n)
    {
        do
            n++;
        while (n + 1 < nums.size() && nums[n] == nums[n - 1]);
    }

    void decrement(vector<int> &nums, int &n)
    {
        do
            n--;
        while (n - 1 >= 0 && nums[n] == nums[n + 1]);
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    Solution solver;

    for (vector<int> &v : solver.threeSum(nums))
    {
        cout << "[ ";
        for (int i : v)
            cout << setw(4) << i;
        cout << "]\n";
    }

    return 0;
}