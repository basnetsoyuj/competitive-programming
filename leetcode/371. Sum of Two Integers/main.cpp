#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int getSum(int a, int b)
    {

        int ans = 0;
        bool x = 0, y = 0, carry = 0;

        // iterate through 32 bits
        for (int c = 0; c < 32; c++)
        {

            // get the last bit
            x = a & 1;
            y = b & 1;

            // get result of adding two bits and any carry over
            ans = (x ^ y ^ carry) << c | ans;

            // calculate the new carry over (when atleast two bits are 1)
            carry = (x | y) & (carry | x) & (carry | y);

            // truncate one bit
            a >>= 1;
            b >>= 1;
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
    cout << solver.getSum(17, 18) << endl;
    cout << solver.getSum(-5, 3) << endl;
}