#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string countAndSay(int n)
    {
        if (n == 1)
            return "1";

        string result = "", prev = countAndSay(n - 1) + " ";
        char val = prev[0];
        int freq(0);

        for (char c : prev)
            if (c == val)
                freq++;
            else
            {
                result += to_string(freq) + val;
                val = c;
                freq = 1;
            }

        return result;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//

int main()
{
    Solution solver;
    cout << solver.countAndSay(10);
}