#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> v1 = vector<int>(), v2 = vector<int>();

        for (int i = 0; i < nums.size(); i++)
            if (nums[i] > 0)
                v1.push_back(nums[i]);
            else
                v2.push_back(nums[i]);

        for (int i = 0; i < nums.size() / 2; i++)
        {
            nums[2 * i] = v1[i];
            nums[2 * i + 1] = v2[i];
        }

        return nums;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    Solution solver;
    for (int i : solver.rearrangeArray(nums))
        cout << i << " ";
    cout << endl;
}