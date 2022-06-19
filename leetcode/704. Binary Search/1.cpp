#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int n = nums.size(), idx = 0, jump;

        for (jump = n / 2; jump >= 1; jump /= 2)
            while (idx + jump < n && nums[idx + jump] <= target)
                idx += jump;

        if (nums[idx] == target)
            return idx;
        else
            return -1;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    Solution solver;

    cout << solver.search(nums, 9);
}