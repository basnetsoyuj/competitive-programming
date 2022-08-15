#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int numDecodings(string s)
    {
        unordered_map<string, int> M;
        return numDecodings(s, M);
    }

    int numDecodings(string s, unordered_map<string, int> &M)
    {
        // successful decoding
        if (s == "")
            return 1;

        // single digit
        if (s[0] == '0')
            return 0;
        else if (s.size() == 1)
            return 1;

        // memoization
        if (M.find(s) != M.end())
            return M[s];

        // take only single digit
        M[s] = numDecodings(s.substr(1, s.size() - 1), M);

        // take double digit only if possible
        if (s.size() > 1 &&

            // ensure number starts with 1 or 2
            (s[0] == '1' || s[0] == '2') &&

            // ensure that if number starts with 2, second digit is limited to 6
            (s[0] != '2' || s[1] < '7'))

            // dp with 2 less chars
            M[s] += numDecodings(s.substr(2, s.size() - 2), M);

        return M[s];
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//

int main()
{
    Solution solver;
    cout << solver.numDecodings("226");
}