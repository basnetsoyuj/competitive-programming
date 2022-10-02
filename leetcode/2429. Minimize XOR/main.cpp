#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int count_1s(int n)
    {
        int count(0);
        while (n)
        {
            n &= (n - 1);
            count++;
        }

        return count;
    }

    int minimizeXor(int num1, int num2)
    {
        // get set bits of num2
        int n = count_1s(num2);
        int ans = 0;

        // start from the most significant bit of nums1 & try to neutralize it with XOR
        for (int i = log2(num1); n > 0 && i >= 0; i--)
            // 1 xor 1 = 0
            if (num1 & (1 << i))
            {
                ans += 1 << i;
                n--;
            }

        // if still n bits are left, add them starting from the least significant bit == 0
        for (int i = 0; n > 0 && i < 32; i++)
            if ((ans & (1 << i)) == 0)
            {
                ans += 1 << i;
                n--;
            }

        return ans;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << solver.minimizeXor(25, 72) << endl;
}
