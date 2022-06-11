#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int i(0);

        for (char c : t)
            if (c == s[i])
                i++;

        return i == s.size();
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//

int main()
{
    Solution solver;
    cout << boolalpha << solver.isSubsequence("abc", "ahbgdc");
}