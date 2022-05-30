#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> m = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int n(0);

        for (int i = 0; i < s.length(); i++)
            if (i != s.length() - 1 && m[s[i]] < m[s[i + 1]])
                n -= m[s[i]];
            else
                n += m[s[i]];

        return n;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << solver.romanToInt("MCMXCIV");
}