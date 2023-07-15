#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int sumOfSquares(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
            if (nums.size() % (i + 1) == 0)
                ans += pow(nums[i], 2);
        return ans;
    }
};