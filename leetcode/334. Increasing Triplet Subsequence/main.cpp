#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {
        vector<int> max_tracker(nums.size(), nums[nums.size() - 1]), min_tracker(nums.size(), nums[0]);

        for (int i = 1; i < nums.size(); i++)
            min_tracker[i] = min(min_tracker[i - 1], nums[i]);

        for (int i = nums.size() - 2; i >= 0; i--)
            max_tracker[i] = max(max_tracker[i + 1], nums[i]);

        for (int i = 1; i < nums.size() - 1; i++)
            if (min_tracker[i - 1] < nums[i] && nums[i] < max_tracker[i + 1])
                return true;

        return false;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {2, 1, 5, 0, 4, 6};
    Solution solver;

    cout << boolalpha << solver.increasingTriplet(nums);
}