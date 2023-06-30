#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int minFlips(int a, int b, int c)
    {
        int n = 0;
        for (int i = 0; i < 32; i++)
        {
            bool bit_a = a & (1 << i);
            bool bit_b = b & (1 << i);
            bool bit_c = c & (1 << i);

            if (bit_c)
                n += !(bit_a || bit_b);
            else
                n += bit_a + bit_b;
        }

        return n;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << solver.minFlips(2, 6, 5);
}