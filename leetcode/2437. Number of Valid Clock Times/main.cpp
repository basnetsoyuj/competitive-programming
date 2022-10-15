#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int countTime(string time)
    {
        int n = 1;

        int fh = time[0];
        int lh = time[1];
        int fm = time[3];
        int lm = time[4];

        if (fh == '?' && lh == '?')
            n = 24;
        else if (fh == '?' && lh != '?')
            n = lh > '3' ? 2 : 3;
        else if (lh == '?' && fh != '?')
            n = fh == '2' ? 4 : 10;

        if (fm == '?')
            n *= 6;
        if (lm == '?')
            n *= 10;

        return n;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << solver.countTime("2?:?0") << endl;
}