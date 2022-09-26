#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    const int X = pow(10, 9) + 7;
    int concatenatedBinary(int n)
    {
        int ans = 0, p = 1;
        for (int i = n; i >= 1; i--)
        {
            ans = fmod(ans + (long)i * p, X);
            p = fmod(pow(2, 1 + log2(n)) * p, X);
        }

        return ans;
    }
};