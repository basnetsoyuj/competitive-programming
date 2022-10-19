#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        for (int i = 0; i < numbers.size(); i++)
        {
            int idx = binary_search(numbers, target - numbers[i], i + 1);
            if (i != idx && idx != -1)
                return {i + 1, idx + 1};
        }

        return {};
    }

    int binary_search(vector<int> &nums, int val, int start)
    {
        int end = nums.size() - 1;
        while (start <= end)
        {
            int m = (start + end) / 2;
            if (val == nums[m])
                return m;
            else if (val < nums[m])
                end = m - 1;
            else
                start = m + 1;
        }

        return -1;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {1, 3, 4, 4};
    Solution solver;

    for (int i : solver.twoSum(nums, 8))
        cout << i << "rd element, ";
}