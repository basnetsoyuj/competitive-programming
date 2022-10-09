#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int hardestWorker(int n, vector<vector<int>> &logs)
    {
        int max_id = logs[0][0], max_time = logs[0][1];
        for (int i = 1; i < logs.size(); i++)
        {
            int time = logs[i][1] - logs[i - 1][1];
            if (time == max_time)
            {
                max_id = min(max_id, logs[i][0]);
            }
            else if (time > max_time)
            {
                max_time = time;
                max_id = logs[i][0];
            }
        }

        return max_id;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<vector<int>> logs = {{1, 1}, {3, 7}, {2, 12}, {7, 17}};
    Solution solver;

    cout << solver.hardestWorker(26, logs) << endl;
}