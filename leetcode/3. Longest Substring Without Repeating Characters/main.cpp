#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        // remember the latest occurance of char
        int M[256];
        for (int i = 0; i < 256; i++)
            M[i] = -1;

        // keep track of first and last index
        // max_e is -1 initially for input "" to return 0, else it returns 1
        int max_f(0), max_e(-1), f(0), e(0);

        // loop through string
        for (int i = 0; i < s.size(); i++)
        {
            // if char is already seen and its in our current substring (i.e within s[f]....s[e]), change f
            if (M[s[i]] != -1 && M[s[i]] >= f)
                f = M[s[i]] + 1;

            // change end index
            e = M[s[i]] = i;

            // if len is greater, update max
            if (e - f > max_e - max_f)
            {
                max_f = f;
                max_e = e;
            }
        }

        // return max length
        return max_e - max_f + 1;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << solver.lengthOfLongestSubstring("pwwkew");
}