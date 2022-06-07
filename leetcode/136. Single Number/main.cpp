#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int val(0);
        for (int num : nums)
            val ^= num;
        return val;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//

int main()
{
    vector<int> nums = {4, 1, 2, 2, 1};

    Solution solver;
    std::cout << solver.singleNumber(nums);
}