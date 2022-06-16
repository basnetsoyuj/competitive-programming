#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int longestPalindrome(string s)
    {
        int M[52], len(0), idx;

        for (int i = 0; i < 52; i++)
            M[i] = 0;

        for (char c : s)
        {
            idx = (c >= 'a') ? c - 'a' + 26 : c - 'A';
            if (++M[idx] % 2 == 0)
            {
                len += 2;
                M[idx] = 0;
            }
        }

        for (int i = 0; i < 52; i++)
            if (M[i])
                return len + 1;

        return len;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << solver.longestPalindrome("abccccdd");
}