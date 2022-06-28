#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int bad;

    // The API isBadVersion is defined for you.
    // bool isBadVersion(int version);
    bool isBadVersion(int version)
    {
        return version >= bad;
    }

    int firstBadVersion(int n)
    {
        int m, s = 1, e = n;
        while (s <= e)
        {
            m = ((long)s + e) / 2;
            if (isBadVersion(m))
                if (!isBadVersion(m - 1))
                    break;
                else
                    e = m - 1;
            else
                s = m + 1;
        }

        return m;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    solver.bad = 1702766719;

    cout << solver.firstBadVersion(2126753390);
}