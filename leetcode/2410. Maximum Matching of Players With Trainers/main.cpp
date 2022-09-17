#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int matchPlayersAndTrainers(vector<int> &players, vector<int> &trainers)
    {
        sort(trainers.begin(), trainers.end(), greater<int>());
        sort(players.begin(), players.end(), greater<int>());

        int j = 0;

        for (int i = 0; i < players.size() && j < trainers.size(); i++)
            if (players[i] <= trainers[j])
                j++;

        return j;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    vector<int> players = {4, 7, 9}, trainers = {8, 2, 5, 8};

    cout << solver.matchPlayersAndTrainers(players, trainers) << endl;
}
