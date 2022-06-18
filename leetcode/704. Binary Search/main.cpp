#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int start = 0, end = nums.size() - 1, mid;

        while (start <= end)
        {
            mid = (start + end) / 2;
            if (nums[mid] == target)
                return mid;
            if (nums[mid] > target)
                end = mid - 1;
            else
                start = mid + 1;
        }

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