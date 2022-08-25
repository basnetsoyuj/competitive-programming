#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        int M[26] = {0};

        for (char c : magazine)
            M[c - 'a']++;

        for (char c : ransomNote)
            if (--M[c - 'a'] < 0)
                return false;

        return true;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << boolalpha << solver.canConstruct("aa", "aab");
}