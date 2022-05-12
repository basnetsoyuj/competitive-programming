#include <bits/stdc++.h>

class Solution
{
public:
    int majorityElement(std::vector<int> &nums)
    {
        // set the first element as the majority element initially
        int majority = nums[0];

        // has frequency 1
        int freq(1);

        for (int i = 1; i < nums.size(); i++)
        {
            // increment freq if same majority is encounterd
            if (nums[i] == majority)
                freq++;
            // otherwise decrement freq
            else
                freq--;
            // switch majority if freq goes below 0
            if (freq < 0)
            {
                majority = nums[i];
                freq = 1;
            }
        }
        // it is bound to work as if majority is cancelled out by other elements
        // it will be reintroduced as frequency is reset
        return majority;
    }
};

// -------------------------------------------------------------//
// -----------To Run Leetcode Solution in Any Machine-----------//
// -------------------------------------------------------------//
int main()
{
    // input array
    // int numbers[] = {3, 2, 3};
    int numbers[] = {2, 3, 2, 1, 3, 1, 3, 1, 2, 2};

    std::vector<int> nums(numbers, numbers + sizeof(numbers) / sizeof(int));

    Solution solver;
    std::cout << solver.majorityElement(nums);

    return 0;
}