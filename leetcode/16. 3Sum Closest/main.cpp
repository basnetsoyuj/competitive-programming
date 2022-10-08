#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int best = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < nums.size() - 2; i++)
        {
            int l = i + 1, r = nums.size() - 1;
            while (l < r)
            {
                int sum = nums[i] + nums[l] + nums[r];

                if (target == sum)
                    return target;

                else if (abs(target - sum) < abs(best - target))
                    best = sum;

                if (sum < target)
                    l++;
                else
                    r--;
            }
        }

        return best;
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
    vector<int> nums = {-1, 2, 1, -4};
    Solution solver;

    cout << solver.threeSumClosest(nums, 1) << endl;
}