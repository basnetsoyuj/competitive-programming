#include <bits/stdc++.h>

using namespace std;

// O(1) time, O(1) space

// powers of 2 appear in the following format
// example: x = 2 -> 00000010
//          x = 4 -> 00000100
//          x = 16 -> 00010000
//          x = 32 -> 00100000

// if we subtract 1 from powers of 2, their bit representation is like this:
// example: x = 16 - 1 -> 00011111
//          x = 32 - 1 -> 00111111

// Bitwise AND between num and (num - 1) will be 0 if num is a power of 2
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        return (n > 0) && ((n & (n - 1)) == 0);
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << boolalpha << solver.isPowerOfTwo(3) << endl;
    cout << boolalpha << solver.isPowerOfTwo(8) << endl;
}