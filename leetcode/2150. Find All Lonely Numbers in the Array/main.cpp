#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> findLonely(vector<int> &nums)
    {
        unordered_map<int, int> M;
        vector<int> ans;

        for (int n : nums)
            M[n]++;

        for (int n : nums)
            if (M[n] == 1 && M.find(n + 1) == M.end() && M.find(n - 1) == M.end())
                ans.push_back(n);

        return ans;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {10, 6, 5, 8};
    Solution solver;
    for (int i : solver.findLonely(nums))
        cout << i << " ";
    cout << endl;
}