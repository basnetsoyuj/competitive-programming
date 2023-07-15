#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maximumBeauty(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        int best = 0, l = 0, r = 0;

        while (l <= r && r < nums.size())
            if (nums[r] - nums[l] <= 2 * k)
            {
                best = max(best, r - l + 1);
                r++;
            }
            else
            {
                l++;
            }

        return best;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {4, 6, 1, 2};
    int k = 2;

    Solution solver;
    cout << solver.maximumBeauty(nums, k);
}