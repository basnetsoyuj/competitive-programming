#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;

        int seen[26] = {0};

        for (char c : s)
            seen[c - 'a']++;

        for (char c : t)
            if (!seen[c - 'a']--)
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
    cout << boolalpha << solver.isAnagram("anagram", "nagaram");
}