#include <bits/stdc++.h>

using namespace std;

// O(log n) time, O(1) space
class Solution
{
public:
    double myPow(double x, int n)
    {
        double ans = 1;
        unsigned int pow = abs(n);

        while (pow)
            if (pow % 2)
            {
                ans *= x;
                pow--;
            }
            else
            {
                x *= x;
                pow /= 2;
            }

        return n > 0 ? ans : 1 / ans;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << solver.myPow(2.10000, 3) << endl;
    cout << solver.myPow(2.00000, -2) << endl;
}
