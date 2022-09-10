#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int integerReplacement(int n)
    {
        unordered_map<long, long> M;
        M[1] = 0;

        return recurse(n, M);
    }

    long recurse(long n, unordered_map<long, long> &M)
    {
        if (M.find(n) != M.end())
            return M[n];

        if (n % 2)
            M[n] = min(recurse(n - 1, M), recurse(n + 1, M)) + 1;
        else
            M[n] = recurse(n / 2, M) + 1;

        return M[n];
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//

int main()
{
    Solution solver;
    cout << boolalpha << solver.integerReplacement(2147483647);
}