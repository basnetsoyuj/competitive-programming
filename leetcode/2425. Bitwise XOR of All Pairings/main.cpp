#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int xorAllNums(vector<int> &nums1, vector<int> &nums2)
    {
        int val = 0;
        if (nums1.size() % 2)
            for (int n : nums2)
                val ^= n;
        if (nums2.size() % 2)
            for (int n : nums1)
                val ^= n;

        return val;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    vector<int> nums1 = {2, 1, 3}, nums2 = {10, 2, 5, 0};

    cout << solver.xorAllNums(nums1, nums2) << endl;
}
