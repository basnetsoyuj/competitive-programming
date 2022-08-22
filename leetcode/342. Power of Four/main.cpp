#include <bits/stdc++.h>

using namespace std;

// x = 4^a => a = ln(x) / ln(4) => a = log_2(x) / log_2(4) => a = 1/2 * log_2(x)
// We can just check if log_2(x) is an even number
class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        return (n > 0) && fmod(log2(n), 2.0) == 0;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << boolalpha << solver.isPowerOfFour(64);
}