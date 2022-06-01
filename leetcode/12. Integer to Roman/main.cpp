#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string intToRoman(int num)
    {
        int denomination[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        string roman = "";
        int i = 0;

        while (num)
            if (num / denomination[i])
            {
                roman += symbols[i];
                num -= denomination[i];
            }
            else
                i++;

        return roman;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << solver.intToRoman(1994);
}