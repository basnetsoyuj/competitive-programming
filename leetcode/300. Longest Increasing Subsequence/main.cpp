#include <bits/stdc++.h>

using namespace std;

// O(n logn) Solution with binary search
class Solution
{
public:
    // might not preserve the order but preserves the length(what we need)
    int lengthOfLIS(vector<int> &nums)
    {
        vector<int> seq = {nums[0]};

        for (int i = 1; i < nums.size(); i++)
            // keep making the sequence
            if (nums[i] > seq.back())
                seq.push_back(nums[i]);
            // otherwise, add nums[i] (smaller number that cannot be added) into sequence
            // by using it to replacethe smallest number greater than it
            else
                seq[binarySearch(seq, nums[i])] = nums[i];

        return seq.size();
    }

    int binarySearch(vector<int> &nums, int n)
    {
        int l = 0, r = nums.size() - 1, m;
        while (l < r)
        {
            m = (l + r) / 2;
            if (nums[m] == n)
                return m;
            // cannot do r = m - 1 because nums[r] might be the smallest element bigger than n
            if (nums[m] > n)
                r = m;
            else
                l = m + 1;
        }
        return l;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {3, 5, 6, 2, 5, 4, 19, 5, 6, 7, 12};
    Solution solver;
    cout << solver.lengthOfLIS(nums);
}