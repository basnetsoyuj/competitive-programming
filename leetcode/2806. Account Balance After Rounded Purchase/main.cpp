#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int accountBalanceAfterPurchase(int purchaseAmount)
    {
        int diff = purchaseAmount % 10 >= 5;
        return 100 - (purchaseAmount / 10 + diff) * 10;
    }
};