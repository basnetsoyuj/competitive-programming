#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        // mask first half, shift it to last & join it with the mask of the second half shifted to front
        // 0xffff0000 -> 11111111111111110000000000000000 and 0x0000ffff -> 00000000000000001111111111111111
        n = ((n & 0xffff0000) >> 16) | ((n & 0x0000ffff) << 16);

        // do it recursively on the halves till a single bit level

        // 0xff00ff00 -> 11111111000000001111111100000000 and 0x00ff00ff -> 00000000111111110000000011111111
        n = ((n & 0xff00ff00) >> 8) | ((n & 0x00ff00ff) << 8);

        // 0xf0f0f0f0 -> 11110000111100001111000011110000 and 0x0f0f0f0f -> 00001111000011110000111100001111
        n = ((n & 0xf0f0f0f0) >> 4) | ((n & 0x0f0f0f0f) << 4);

        // 0xcccccccc = 0b11001100110011001100110011001100 and 0x33333333 = 0b00110011001100110011001100110011
        n = ((n & 0xcccccccc) >> 2) | ((n & 0x33333333) << 2);

        // oxaaaaaaaa = 0b10101010101010101010101010101010 and 0x55555555 = 0b01010101010101010101010101010101
        n = ((n & 0xaaaaaaaa) >> 1) | ((n & 0x55555555) << 1);

        return n;
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