#include <bits/stdc++.h>

using namespace std;

// O(N^2) time, O(N) space
class Solution
{
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>> &stations)
    {
        const int N = stations.size();

        // tracks the farthest location (dp[i]) refueling in station i can take
        vector<long> dp(N + 1, 0);
        dp[0] = startFuel;

        // for all stations
        for (int i = 0; i < N; i++)
            // for all the stations before
            for (int j = i; j >= 0; j--)
                // if you can reach station i with the fuel from station j
                if (dp[j] >= stations[i][0])
                    // update dp[j + 1] to be max of itself or with refueling in station i
                    dp[j + 1] = max(dp[j + 1], dp[j] + stations[i][1]);

        // gives the first i for which max distance travelled is >= target
        for (int i = 0; i <= N; i++)
            if (dp[i] >= target)
                return i;

        return -1;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    int target = 100, startFuel = 10;
    vector<vector<int>> stations = {{10, 60}, {20, 30}, {30, 30}, {60, 40}};

    Solution solver;
    cout << solver.minRefuelStops(target, startFuel, stations);
}
