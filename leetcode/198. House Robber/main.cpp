#include <bits/stdc++.h>

using namespace std;

// iterative and 2 variable solution
class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int f1 = 0, f2 = nums[0], temp;

        for (int i = 1; i < nums.size(); i++)
        {
            temp = f2;
            f2 = max(f2, f1 + nums[i]);
            f1 = temp;
        }

        return f2;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {114, 117, 207, 117, 235, 82, 90, 67, 143, 146, 53, 108, 200, 91, 80, 223, 58, 170, 110, 236, 81, 90, 222, 160, 165, 195, 187, 199, 114, 235, 197, 187, 69, 129, 64, 214, 228, 78, 188, 67, 205, 94, 205, 169, 241, 202, 144, 240};

    Solution solver;
    cout << solver.rob(nums);
}