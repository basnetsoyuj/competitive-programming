#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int largestPerimeter(vector<int> &nums)
    {
        sort(nums.begin(), nums.end(), greater<int>());

        for (int i = 0; i < nums.size() - 2; i++)
            if (nums[i] < nums[i + 1] + nums[i + 2])
                return nums[i] + nums[i + 1] + nums[i + 2];

        return 0;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {2, 1, 2};
    Solution solver;
    cout << solver.largestPerimeter(nums) << endl;
}