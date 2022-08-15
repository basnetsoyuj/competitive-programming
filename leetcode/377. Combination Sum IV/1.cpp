#include <bits/stdc++.h>

using namespace std;

/*

This iterative solution fails if you use signed int M[] instead of unsigned int

It is because:

Even though the question guarentees that the test cases answer fits in 32-bit integer, there is overflow error in the following test case:

[10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260,270,280,290,300,310,320,330,340,350,360,370,380,390,400,410,420,430,440,450,460,470,480,490,500,510,520,530,540,550,560,570,580,590,600,610,620,630,640,650,660,670,680,690,700,710,720,730,740,750,760,770,780,790,800,810,820,830,840,850,860,870,880,890,900,910,920,930,940,950,960,970,980,990,111]
999

Even though answer for M[999] fits in signed int, there exists a value in M[1]...M[999] that doesn't fit in signed int

The following solution uses unsigned int to solve this issue, as we are guarenteed that the test case values fit in signed int

The solution in main.cpp uses memoized recursive solution and it doesn't hit that particular value where the overflow happens.
However in the iterative solution we are hitting all values from 1 to 999

*/

class Solution
{
public:
    int combinationSum4(vector<int> &nums, int target)
    {
        unsigned int M[1001];
        memset(M, 0, sizeof(M));
        M[0] = 1;

        for (int i = 1; i <= target; i++)
            for (int n : nums)
                if (n <= i)
                    M[i] += M[i - n];

        return M[target];
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//

int main()
{
    vector<int> nums = {1, 2, 3};
    Solution solver;
    cout << solver.combinationSum4(nums, 4);
}