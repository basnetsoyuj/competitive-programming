#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int distinctAverages(vector<int> &nums)
    {
        unordered_set<double> avg;
        const int N = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < N / 2; i++)
            avg.insert(((double)nums[i] + nums[N - i - 1]) / 2);

        return avg.size();
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    vector<int> nums = {4, 1, 4, 0, 3, 5};
    cout << solver.distinctAverages(nums) << endl;
}