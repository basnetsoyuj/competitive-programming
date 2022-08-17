#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        long reverse = 0;

        while (x)
        {
            reverse *= 10;
            reverse += x % 10;
            x /= 10;
        }

        return (reverse > INT_MAX || reverse < INT_MIN) ? 0 : reverse;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << solver.reverse(123);
}