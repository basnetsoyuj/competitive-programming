#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string breakPalindrome(string palindrome)
    {
        for (int i = 0; i < palindrome.size(); i++)
        {
            // temporarily store the original char
            char temp = palindrome[i];

            // try to replace it with any other char starting from 'a' to 'z' to break the palindrome
            for (char ch = 'a'; ch <= 'z'; ch++)
            {
                // if its the same character, look for next char if its the last character
                if (ch == temp)
                    if (i == palindrome.size() - 1)
                        continue;
                    // else search for a lesser lexicographic string from the next char
                    else
                        break;

                // try using that char and check if it breaks the palindrome
                palindrome[i] = ch;

                // if so return
                if (!isPalindrome(palindrome))
                    return palindrome;
                // otherwise, reset
                palindrome[i] = temp;
            }
        }

        return "";
    }

    // function to check palindrome
    bool isPalindrome(string s)
    {
        for (int i = 0; i < s.size() / 2; i++)
            if (s[i] != s[s.size() - 1 - i])
                return false;
        return true;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << solver.breakPalindrome("abccba");
}