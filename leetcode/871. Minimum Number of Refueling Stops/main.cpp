#include <bits/stdc++.h>

using namespace std;

// O(N) time, O(N) space
class Solution
{
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>> &stations)
    {
        // max heap of gas station capacities
        priority_queue<int> pq;
        int no_of_refuels = 0, prev = 0;

        // treat target as station and reach there
        stations.push_back({target, 0});

        for (vector<int> &station : stations)
        {
            startFuel -= station[0] - prev;

            // need to look back for refuel greedily
            while (pq.size() && startFuel < 0)
            {
                startFuel += pq.top();
                pq.pop();
                no_of_refuels++;
            }

            // if still not sufficient, its not possible
            if (startFuel < 0)
                return -1;

            // add fuel offered by this station to pq
            pq.push(station[1]);

            // add position of station to prev
            prev = station[0];
        }

        return no_of_refuels;
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
