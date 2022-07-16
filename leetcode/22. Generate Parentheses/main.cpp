#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;
        recursive(ans, n, 0, 0, "");
        return ans;
    }

    void recursive(vector<string> &ans, int n, int open, int closed, string str)
    {
        if (open == n && closed == n)
        {
            ans.push_back(str);
            return;
        }

        // if bracket can be opened, open it
        if (open < n)
            recursive(ans, n, open + 1, closed, str + '(');

        // if there are lesser closed brackets, add a closed bracket
        if (closed < open)
            recursive(ans, n, open, closed + 1, str + ')');
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    for (string s : solver.generateParenthesis(5))
        cout << s << endl;
}
