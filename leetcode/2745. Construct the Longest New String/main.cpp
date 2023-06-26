#include <bits/stdc++.h>

using namespace std;

class Solution { 
public:
    int longestString(int x, int y, int z) {
        // exhaust z
        // add x as suffix if x > y
        // add y as prefix if y > x
        // len is the same in both the cases
        int ans =  z * 2 + min(x, y) * 2 * 2;
        
        // for the one extra you can add if x != y
        if (x != y)
            ans += 2;
        
        return ans;
    }
};