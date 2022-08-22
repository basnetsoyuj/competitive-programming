#include <bits/stdc++.h>

using namespace std;

// obvious O(logN) time, O(1) space
class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        if (n == 0)
            return false;
        while (n % 4 == 0)
            n /= 4;
        return n == 1;
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