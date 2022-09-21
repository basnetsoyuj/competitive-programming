#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int ans = nums[0], min_prod = nums[0], max_prod = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            // if nums[i] is negative, then min_prod and max_prod will be swapped
            if (nums[i] < 0)
                swap(min_prod, max_prod);

            min_prod = min(min_prod * nums[i], nums[i]);
            max_prod = max(max_prod * nums[i], nums[i]);

            ans = max(ans, max_prod);
        }

        return ans;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {2, 3, -2, 4};
    Solution solver;
    cout << solver.maxProduct(nums) << endl;

    return 0;
}