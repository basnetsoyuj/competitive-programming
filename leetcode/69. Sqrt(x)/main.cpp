#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        long lower(0), higher(x), mid;

        // binary search
        while (true)
        {
            mid = (lower + higher) / 2;
            if (mid * mid > x)
                higher = mid - 1;
            else if ((mid + 1) * (mid + 1) > x)
                return mid;
            else
                lower = mid + 1;
        }
    }
};

int main()
{
    Solution solver;
    cout << solver.mySqrt(1123);
}