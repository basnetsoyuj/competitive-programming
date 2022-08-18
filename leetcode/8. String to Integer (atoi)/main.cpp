#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int myAtoi(string s)
    {
        int i = 0;
        char c;

        // read all leading whitespaces
        do
        {
            // if end is reached, return 0
            if (i == s.size())
                return 0;
            c = s[i++];
        } while (c == ' ');

        // determine the sign of number
        int sign = c == '-' ? -1 : 1;

        // try to read the first digit if sign was not given
        long ans = 0;
        if (c != '-' && c != '+')
            if (!(c >= '0' && c <= '9'))
                return 0;
            else
                ans += c - '0';

        // read and validate the rest of the digits
        while (i != s.size() && s[i] >= '0' && s[i] <= '9')
        {
            ans *= 10;
            ans += s[i++] - '0';

            if (ans * sign > INT_MAX)
                return INT_MAX;
            else if (ans * sign < INT_MIN)
                return INT_MIN;
        }

        // return the number with sign
        return ans * sign;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << solver.myAtoi("        -42");
}