#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int max_val = nums[0];

        // bitwise AND of two distinct numbers is always strictly less than the maximum of the two numbers
        for (int i = 1; i < nums.size(); i++)
            if (max_val < nums[i])
                max_val = nums[i];

        // find the longest subarray with only maximum value
        int len = 0, max_len = 0;
        for (int n : nums)
            if (n == max_val)
                max_len = max(max_len, ++len);
            else
                len = 0;

        return max_len;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    vector<int> nums = {96317, 96317, 96317, 96317, 96317, 96317, 96317, 96317, 96317, 279979};

    cout << solver.longestSubarray(nums) << endl;
}
