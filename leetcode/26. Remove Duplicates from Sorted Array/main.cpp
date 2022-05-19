#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int counter(0), last_seen(-101);
        for (int i = 0; i < nums.size(); i++)
            if (last_seen != nums[i])
                nums[counter++] = (last_seen = nums[i]);
        return counter;
    }
};