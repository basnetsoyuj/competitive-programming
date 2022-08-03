#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countVowelPermutation(int n) {
        const long mod = pow(10, 9) + 7;
        long a(1), e(1), i(1), o(1), u(1), a2, e2, i2, o2, u2;
        
        /* Instead of looking forward, track where each alphabet comes from, ie:
        
        A -> E
        E -> A, I
        I -> A, E, O, U
        O -> I, U
        U -> A


        So:
        
        A can only come from E, I or U
        E can only come from A or I
        I can only come from E or O
        O can only come from I
        U can only come from I or O

        */


        for(int x=2; x <=n; x++){
            a2 = (e + i + u) % mod;
            e2 = (a + i) % mod;
            i2 = (e + o) % mod;
            o2 = i;
            u2 = (o + i) % mod;
            
            a = a2, e = e2, i = i2, o = o2, u = u2;
        }
        
        return (a + e + i + o + u) % mod;
        
    }
};
// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << solver.countVowelPermutation(5);
}
