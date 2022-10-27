#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    const int N = 1e9 + 7;
    int countGoodStrings(int low, int high, int zero, int one)
    {
        unordered_map<int, int> M;
        return helper(0, M, low, high, zero, one);
    }

    int helper(int s, unordered_map<int, int> &M, int &low, int &high, int &zero, int &one)
    {
        if (s > high)
            return 0;

        if (M.find(s) != M.end())
            return M[s];

        if (s >= low && s <= high)
            M[s] = 1;

        M[s] = (M[s] + helper(s + zero, M, low, high, zero, one)) % N;
        M[s] = (M[s] + helper(s + one, M, low, high, zero, one)) % N;

        return M[s];
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << solver.countGoodStrings(720, 720, 4, 5) << endl;
}