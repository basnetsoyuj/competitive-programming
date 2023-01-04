#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> F;
        int min_rounds = 0;

        for(int n: tasks)
            F[n]++;

        for(auto [difficulty, freq]: F){
            if(freq == 1)
                return -1;
            // either of the form 3x
            // or of the form 3x + 1, which can be written as 3 * (x - 1) + 2 * 2
            // or of the form 3x + 2, which is 3 * x + 2 * 1

            // all can be summarized as:
            // if of the form 3x, (freq + 2)/3 has the same quotient as freq / 3
            // if of the form 3x + 1, (freq + 2)/3 has quotient (x - 1) + 2 = x + 1
            // if of the form 3x + 2, (freq + 2)/3 has quotient x + 1
            min_rounds += (freq + 2) / 3;
        }

        return min_rounds;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> tasks = {2,2,3,3,2,4,4,4,4,4};
    Solution solver;

    cout << solver.minimumRounds(tasks) << endl;
}
