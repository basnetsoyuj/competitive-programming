#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        // initial common prefix
        string common = "";

        // initial index
        int i = 0;
        char c;

        while (true)
        {
            // for all strings
            for (int j = 0; j < strs.size(); j++)
            {
                // if a string is exhausted, return common prefix
                if (i + 1 > strs[j].length())
                    return common;

                // initialize char c for current iteration using first string
                if (!j)
                    c = strs[j][i];

                // if current string's char is not equal to c, return common prefix
                else if (c != strs[j][i])
                    return common;
            }

            // otherwise, add c to common prefix
            common += c;
            i++;
        }

        return common;
    }
};

int main()
{
    vector<string> strs = {"flower", "flow", "flight"};
    Solution solver;

    cout << solver.longestCommonPrefix(strs);

    return 0;
}