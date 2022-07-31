#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        const int m = haystack.size(), n = needle.size();
        for (int i = 0; i <= m - n; i++)
            if (haystack.substr(i, n) == needle)
                return i;
        return -1;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << solver.strStr("mississippi", "issip");
}