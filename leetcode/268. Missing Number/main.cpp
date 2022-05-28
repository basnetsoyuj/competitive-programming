#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        // int sum(0);
        // for(int num: nums)
        //     sum += num;
        // return nums.size() * (nums.size() + 1)/2 - sum;

        int n = nums.size();
        for (int i = 0; i < nums.size(); i++)
            n ^= i ^ nums[i];
        return n;
    }
};