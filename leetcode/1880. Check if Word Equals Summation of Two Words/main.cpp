#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int num_val(string s)
    {
        int val(0);
        for (char c : s)
        {
            val *= 10;
            val += c - 'a';
        }
        return val;
    }

    bool isSumEqual(string firstWord, string secondWord, string targetWord)
    {
        return num_val(firstWord) + num_val(secondWord) == num_val(targetWord);
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << boolalpha << solver.isSumEqual("acb", "cba", "cdb");
}
