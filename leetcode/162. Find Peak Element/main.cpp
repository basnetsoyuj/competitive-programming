#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // simply binary search
        int l = 0, r = nums.size() - 1, m;

        while(l < r){
            m = (l + r)/2;
            
            // continue searching in the direction of the peak
            // if the trend continues forever, the peak is at the end
            if(nums[m] < nums[m + 1])
                l = m + 1;
            // if the trend breaks, the peak is at the left half
            else
                r = m;
        }

        return l;
    }

};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {1, 2, 3, 1};
    Solution sol;
    cout << sol.findPeakElement(nums) << endl;
}