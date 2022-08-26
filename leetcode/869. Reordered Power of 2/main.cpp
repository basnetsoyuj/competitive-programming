#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool reorderedPowerOf2(int n)
    {
        // can use char or uint_8 for counter array
        int digits[10] = {0};
        count(n, digits);

        for (int i = 0; i < 32; i++)
        {
            int pow_digits[10] = {0};
            count(pow(2, i), pow_digits);

            if (compare(digits, pow_digits))
                return true;
        }

        return false;
    }

    void count(long n, int digits[])
    {
        while (n)
        {
            digits[n % 10]++;
            n /= 10;
        }
    }

    bool compare(int digits[], int pow_digits[])
    {
        for (int i = 0; i <= 9; i++)
            if (digits[i] != pow_digits[i])
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
    cout << boolalpha << solver.reorderedPowerOf2(562) << endl;
    cout << boolalpha << solver.reorderedPowerOf2(561) << endl;
}
