#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int longestContinuousSubstring(string s)
    {
        s += ' ';
        int maxlen = 1, len = 1;

        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1] + 1)
                len++;
            else
            {
                maxlen = max(maxlen, len);
                len = 1;
            }
        }

        return maxlen;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << solver.longestContinuousSubstring("abacaba") << endl;
}
