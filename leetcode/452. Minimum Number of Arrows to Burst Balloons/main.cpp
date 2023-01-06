#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int findMinArrowShots(vector<vector<int>> &points)
    {
        // sort by the end point
        sort(points.begin(), points.end(), [](const vector<int> &p1, const vector<int> &p2)
             { return p1[1] < p2[1]; });

        int start, end, count = 1, latest_end = points[0][1];

        for (auto p : points)
        {
            start = p[0];
            end = p[1];

            // if balloon starts after previous balloon ends, it needs a separate pop
            if (latest_end < start)
            {
                count++;
                latest_end = end;
            }
        }

        return count;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<vector<int>> points = {{10, 16}, {2, 8}, {1, 6}, {7, 12}};
    Solution solver;
    cout << solver.findMinArrowShots(points) << endl;
}