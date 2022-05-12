#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int longest(0);

        // create an unordered set in O(n)
        unordered_set<int> set(nums.begin(), nums.end());

        // for all elements
        for (int i = 0; i < nums.size(); i++)
        {
            int counter(0);

            // if element one less than itself is present, skip, as current number will eventually be counted by that num
            if (set.find(nums[i] - 1) != set.end())
                continue;

            // increase counter by 1 until next num is present
            while (set.find(nums[i] + counter) != set.end())
                counter++;

            // replace max if current counter is max
            longest = max(longest, counter);
        }

        return longest;
    }
};

// -------------------------------------------------------------//
// -----------To Run Leetcode Solution in Any Machine-----------//
// -------------------------------------------------------------//
int main()
{
    // input array
    int numbers[] = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};

    std::vector<int> nums(numbers, numbers + sizeof(numbers) / sizeof(int));

    Solution solver;
    std::cout << solver.longestConsecutive(nums);

    return 0;
}