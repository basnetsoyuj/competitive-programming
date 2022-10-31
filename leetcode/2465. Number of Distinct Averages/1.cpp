#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int distinctAverages(vector<int> &nums)
    {
        unordered_set<double> avg;
        int min_val, max_val;

        while (nums.size())
        {
            vector<int>::iterator max_ = max_element(nums.begin(), nums.end());
            max_val = *max_;
            nums.erase(max_);

            vector<int>::iterator min_ = min_element(nums.begin(), nums.end());
            min_val = *min_;
            nums.erase(min_);

            avg.insert(((double)max_val + min_val) / 2);
        }

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