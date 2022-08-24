#include <bits/stdc++.h>

using namespace std;

// closest power of 3 to INT_MAX: 1162261467
// since 3 is prime, all of its powers have only 3 as the factor
// so we can just check if the number is divisible by 3
class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        return n > 0 && 1162261467 % n == 0;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << boolalpha << solver.isPowerOfThree(81);
}