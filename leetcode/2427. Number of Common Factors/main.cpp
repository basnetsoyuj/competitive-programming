#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int commonFactors(int a, int b)
    {
        if (b > a)
            return commonFactors(b, a);

        int counter = 0;
        for (int i = 1; i <= b; i++)
            if (b % i == 0 && a % i == 0)
                counter++;

        return counter;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << solver.commonFactors(25, 30) << endl;
}
