#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int M[nums.size()];
        for (int i = 0; i < nums.size(); i++)
            M[i] = INT_MAX;

        M[nums.size() - 1] = 0;

        // for each element (backward traversal)
        for (int i = nums.size() - 2; i >= 0; i--)
            // get the minimal jump that connects it to M[i + j]
            for (int j = 1; j <= nums[i] && i + j < nums.size(); j++)
                if (M[i + j] != INT_MAX)
                    M[i] = min(M[i], M[i + j] + 1);

        return M[0];
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {2, 3, 1, 1, 4};
    Solution solver;
    cout << boolalpha << solver.jump(nums);
}
