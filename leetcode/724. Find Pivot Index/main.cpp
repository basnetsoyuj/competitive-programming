#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int sum(0), lsum(0);

        // calculate the total sum
        for (int num : nums)
            sum += num;

        // for each element, calculate cumulative sum to left, and subtract own value from total sum
        // if both sums are equal, its the leftmost pivot
        for (int i = 0; i < nums.size(); i++)
        {
            sum -= nums[i];
            if (lsum == sum)
                return i;
            lsum += nums[i];
        }

        return -1;
    }
};