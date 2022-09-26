#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        s += ' ';
        int i = -1, j = -1;

        for (int x = 0; x < s.size(); x++)
        {
            if (i == -1 && s[x] != ' ')
                i = x;
            if (s[x] == ' ')
            {
                if (i != -1 && j == -1)
                    j = x;
                if (i != -1 && j != -1)
                {
                    reverse(s.begin() + i, s.begin() + j);
                    i = -1;
                    j = -1;
                }
            }
        }

        s.pop_back();
        return s;
    }
};