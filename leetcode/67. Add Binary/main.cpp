#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        if (a.size() < b.size())
            return addBinary(b, a);

        int x = a.size() - 1;
        int y = b.size() - 1;

        // carry on
        unsigned short n = 0;

        for (; x >= 0; x--)
        {
            // add corresponding values
            n += (a[x] == '1') + (y < 0 ? 0 : b[y--] == '1');

            // n & 1 gives the first position of n
            a[x] = '0' + (n & 1);

            // truncate to keep just the carry on
            n >>= 1;
        }

        // if a carry on still remains, return '1' + a
        if (n)
            return '1' + a;
        else
            return a;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << solver.addBinary("1111", "1111") << endl;
}
