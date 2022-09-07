#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int l = 0, r = nums.size() - 1;
        vector<int> ans;

        while (l <= r)
            if (abs(nums[l]) > abs(nums[r]))
                ans.push_back(pow(nums[l++], 2));
            else
                ans.push_back(pow(nums[r--], 2));

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    vector<int> nums = {-4, -1, 0, 3, 10};

    for (int n : solver.sortedSquares(nums))
        cout << n << " ";
}
