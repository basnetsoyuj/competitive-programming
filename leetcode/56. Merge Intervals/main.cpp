#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);

        for (vector<int> &interval : intervals)
            // if end of last interval is greater than start of current interval, merge them
            if (ans.back()[1] >= interval[0])
                ans[ans.size() - 1][1] = max(ans.back()[1], interval[1]);
            // add a new interval
            else
                ans.push_back(interval);

        return ans;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    Solution solver;

    cout << "[ ";

    for (vector<int> &interval : solver.merge(intervals))
        cout << "[" << interval[0] << ", " << interval[1] << "] ";

    cout << "]";
}