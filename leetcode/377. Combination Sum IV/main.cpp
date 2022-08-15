#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int combinationSum4(vector<int> &nums, int target)
    {
        int M[1001];
        memset(M, -1, sizeof(M));
        M[0] = 1;

        return combinationSum4(nums, target, M);
    }

    int combinationSum4(vector<int> &nums, int target, int M[])
    {
        if (M[target] != -1)
            return M[target];

        int counter = 0;
        for (int n : nums)
            if (n <= target)
                counter += combinationSum4(nums, target - n, M);

        return M[target] = counter;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//

int main()
{
    vector<int> nums = {1, 2, 3};
    Solution solver;
    cout << solver.combinationSum4(nums, 4);
}