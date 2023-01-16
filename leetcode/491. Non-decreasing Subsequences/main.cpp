#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> findSubsequences(vector<int> &nums)
    {
        set<vector<int>> ans;
        vector<int> subseq;

        for (int i = 0; i < nums.size(); i++)
        {
            subseq.push_back(nums[i]);
            helper(ans, subseq, nums, i + 1);
            subseq.clear();
        }

        return vector(ans.begin(), ans.end());
    }

    void helper(set<vector<int>> &ans, vector<int> &subseq, vector<int> &nums, int i)
    {
        if (i >= nums.size())
            return;

        if (subseq.back() <= nums[i])
        {
            subseq.push_back(nums[i]);
            ans.insert(subseq);
            helper(ans, subseq, nums, i + 1);
            subseq.pop_back();
        }

        helper(ans, subseq, nums, i + 1);
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {4, 6, 7, 7};
    Solution solver;
    for (vector<int>& v : solver.findSubsequences(nums))
    {
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }
}