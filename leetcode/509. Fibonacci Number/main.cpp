#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int fib(int n)
    {
        int F[31];

        F[0] = 0;
        F[1] = 1;

        for (int i = 2; i <= n; i++)
            F[i] = F[i - 1] + F[i - 2];

        return F[n];
    }
};