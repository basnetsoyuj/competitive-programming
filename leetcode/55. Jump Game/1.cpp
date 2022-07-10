#include <bits/stdc++.h>

using namespace std;

// dp solution
class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        bool M[10000];
        for (int i = 0; i < 10000; i++)
            M[i] = 0;

        // for nums of len 1, its true
        M[0] = 1;

        // for each other elements
        for (int i = 1; i < nums.size(); i++)
        {
            // look back until you can jump more than or equal till current place
            for (int j = i - 1; j >= 0; j--)
            {
                if (M[j] && i - j <= nums[j])
                {
                    // if so, M[i] = true
                    M[i] = 1;
                    break;
                }
            }
        }

        // return the last element's boolean value
        return M[nums.size() - 1];
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {2, 3, 1, 1, 4};
    Solution solver;
    cout << boolalpha << solver.canJump(nums);
}