#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> m;
        vector<int> v;

        for (int i = 0; i < nums.size(); i++)
        {
            unordered_map<int, int>::iterator p = m.find(target - nums[i]);
            if (p != m.end())
            {
                v.push_back(p->second);
                v.push_back(i);
                break;
            }

            m[nums[i]] = i;
        }

        return v;
    }
};

// -------------------------------------------------------------//
// -----------To Run Leetcode Solution in Any Machine-----------//
// -------------------------------------------------------------//
int main()
{
    int n[] = {2, 7, 11, 15};
    int target = 9;

    vector<int> nums(n, n + sizeof(int));

    Solution solver;
    vector<int> result = solver.twoSum(nums, target);

    cout << "[";
    for (int i = 0; i < result.size(); i++)
    {
        if (i)
            cout << ",";
        cout << result[i];
    }
    cout << "]";
}