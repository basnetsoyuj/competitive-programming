#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int numberOfEmployeesWhoMetTarget(vector<int> &hours, int target)
    {
        int counter = 0;
        for (int n : hours)
            if (n >= target)
                counter++;
        return counter;
    }
};