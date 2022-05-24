#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int longestValidParentheses(string s)
    {
        int longest(0), counter(0);
        vector<int> opened;

        for (int i = 0; i < s.size(); i++)
            // keep track of where the parenthesis was opened
            if (s[i] == '(')
                opened.push_back(i);
            // if an opened braket was closed
            else if (!opened.empty())
            {
                // transform i-th character and its corresponding opening parenthesis to 'T'
                s[i] = s[opened.back()] = 'T';
                opened.pop_back();
            }

        // count the longest 'T' sequence
        for (char ch : s)
            if (ch == 'T')
                counter++;
            else
            {
                longest = max(longest, counter);
                counter = 0;
            }

        longest = max(longest, counter);

        return longest;
    }
};

int main()
{
    Solution solver;

    cout << solver.longestValidParentheses("()(()") << endl;
    cout << solver.longestValidParentheses(")()())") << endl;
}