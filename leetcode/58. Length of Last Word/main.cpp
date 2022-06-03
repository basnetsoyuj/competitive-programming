#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int len(0);

        for (int i = s.length() - 1; i >= 0; i--)
            if (s[i] != ' ')
                len++;
            else if (len)
                break;

        return len;
    }
};

// -------------------------------------------------------------//
// ---------------------To Run The Solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << solver.lengthOfLastWord("luffy is still joyboy  ");

    return 0;
}