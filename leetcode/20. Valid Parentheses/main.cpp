#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        // keep track of what brakets are opened
        string opened_brakets = "";

        // loop through braket sequence
        for (int i = 0; i < s.length(); i++)
        {
            // if its opening braket, push it to string
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                opened_brakets += s[i];

            // check if closing braket then, the recent braket is corresponding to it
            else if ((s[i] == ')' && opened_brakets.back() != '(') ||
                     (s[i] == '}' && opened_brakets.back() != '{') ||
                     (s[i] == ']' && opened_brakets.back() != '['))
                return false;

            // if valid, cancel opened braket
            else
                opened_brakets.pop_back();
        }

        // return true if opened_brakets is empty
        // other its not balanced, so return false
        return !opened_brakets.length();
    }
};

// -------------------------------------------------------------//
// -----------To Run Leetcode Solution in Any Machine-----------//
// -------------------------------------------------------------//
int main()
{
    // string s = "(){}[]";
    // string s = "[";
    string s = "[()(){[]}]";

    Solution solver;
    cout << boolalpha << solver.isValid(s);

    return 0;
}