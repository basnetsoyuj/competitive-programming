#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int getSum(int a, int b)
    {
        unsigned temp = 0;

        while (b)
        {
            // calculate carry over for each bit
            temp = a & b;

            // XOR gives sum without carry over
            a = a ^ b;

            // make b the temp to add the carry on
            // and shift by 1 since they add in the next step
            b = temp << 1;
        }

        return a;
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