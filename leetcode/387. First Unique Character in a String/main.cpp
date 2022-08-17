#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int firstUniqChar(string s)
    {
        int M[26] = {0};

        for (char c : s)
            M[c - 'a']++;

        for (int i = 0; i < s.size(); i++)
            if (M[s[i] - 'a'] == 1)
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
    cout << solver.firstUniqChar("leetcode");
}