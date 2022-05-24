#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        int M[46];
        M[0] = 1;
        M[1] = 1;

        for (int i = 2; i <= n; i++)
            M[i] = M[i - 1] + M[i - 2];

        return M[n];
    }
};