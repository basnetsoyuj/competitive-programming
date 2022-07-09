#include <bits/stdc++.h>

using namespace std;

// iterative and 2 variable solution
class Solution
{
public:
    int rob(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums[0];

        int f1 = 0, f2 = nums[0], temp, s1 = 0, s2 = nums[1];

        // first possibility from 1st house....2nd-to-last house
        for (int i = 1; i < nums.size() - 1; i++)
        {
            temp = f2;
            f2 = max(f2, f1 + nums[i]);
            f1 = temp;
        }

        // second possibility from 2st house....last house
        for (int i = 2; i < nums.size(); i++)
        {
            temp = s2;
            s2 = max(s2, s1 + nums[i]);
            s1 = temp;
        }

        return max(f2, s2);
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {1, 2, 3, 1};
    Solution solver;
    cout << solver.rob(nums);
}