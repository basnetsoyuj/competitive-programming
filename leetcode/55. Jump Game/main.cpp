#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int fuel = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            if (--fuel < 0)
                return false;
            fuel = max(fuel, nums[i]);
        }

        return true;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {2, 3, 1, 1, 4};
    Solution solver;
    cout << boolalpha << solver.canJump(nums);
}