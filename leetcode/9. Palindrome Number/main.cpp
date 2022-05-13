#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        string str = to_string(x);
        int i = str.length() / 2;

        if (str.length() % 2)
            i--;

        for (; i >= 0; i--)
            if (str[i] != str[str.length() - 1 - i])
                return false;

        return true;
    }
};

// -------------------------------------------------------------//
// -----------To Run Leetcode Solution in Any Machine-----------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << solver.isPalindrome(121) << endl;

    return 0;
}