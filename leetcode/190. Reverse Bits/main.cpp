#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        uint32_t ans = 0;
        for (int i = 0; i < 32; i++)
        {
            ans <<= 1;
            ans = ans | (n & 1);
            n >>= 1;
        }

        return ans;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;

    // Test case 1: 00000010100101000001111010011100
    // Should give: 964176192 -> 00111001011110000010100101000000
    cout << solver.reverseBits(43261596) << endl;
}