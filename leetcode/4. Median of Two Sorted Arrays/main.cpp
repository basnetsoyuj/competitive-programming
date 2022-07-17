#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int a = nums1.size(), b = nums2.size();

        // perform binary search on the smaller vector
        if (a > b)
            return findMedianSortedArrays(nums2, nums1);

        int l = 0, r = a, m1, m2, left1, right1, left2, right2;

        while (true)
        {
            m1 = (l + r) / 2;
            m2 = (a + b) / 2 - m1;

            // handling the edge cases (INT_MIN for < 0 and INT_MAX for > length of vector)
            left1 = !m1 ? INT_MIN : nums1[m1 - 1];
            right1 = (m1 == a) ? INT_MAX : nums1[m1];
            left2 = !m2 ? INT_MIN : nums2[m2 - 1];
            right2 = (m2 == b) ? INT_MAX : nums2[m2];

            // if median requirement is satisfied, return median
            if (left1 <= right2 && left2 <= right1)
                // if odd number, return median directly
                if ((a + b) % 2)
                    return min(right1, right2);
                // else take average
                else
                    return (max(left1, left2) + min(right1, right2)) / 2.0;
            // else update right or left boundary
            else if (left1 > right2)
                r = m1 - 1;
            else
                l = m1 + 1;
        }
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    Solution solver;
    cout << solver.findMedianSortedArrays(nums1, nums2);
}