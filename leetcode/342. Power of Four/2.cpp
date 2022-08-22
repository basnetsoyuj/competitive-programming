#include <bits/stdc++.h>

using namespace std;

// to check if the number is a power of 2: x > 0 && (x & (x - 1)) == 0
// now we need to distinguish between even & odd power of 2

// in even power of 2, 1-bit is at even position (0, 2 ,4...)
// example: x = 4 -> 00000100 -> 1-bit is at position 2
//          x = 16 -> 00010000 -> 1-bit is at position 4

// in odd power of 2, 1-bit is at odd position (1, 3, 5...)
// example: x = 2 -> 00000010 -> 1-bit is at position 1
//          x = 8 -> 00001000 -> 1-bit is at position 3

// so power of 4 will make 0 in bitwise AND with (101010...10) binary (1-bit in all odd positions)
// (101010...10) binary in 32 bits is commonly written as 0xAAAAAAAA
class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        return (n > 0) && ((n & (n - 1)) == 0) && ((n & 0xAAAAAAAA) == 0);
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << boolalpha << solver.isPowerOfFour(64) << endl;
    cout << boolalpha << solver.isPowerOfFour(8) << endl;
}