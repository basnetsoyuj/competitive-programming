#include <bits/stdc++.h>

using namespace std;

// partial solution, gives time limit exceeded on test 52
int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, _;
    cin >> n;

    vector<int> perm1(n), perm2(n);

    for (int i = 0; i < n; i++)
    {
        cin >> _;
        perm1[i] = _;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> _;
        perm2[i] = _;
    }

    vector<int> dp(n + 1, 0), temp(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int len(0);
            if (perm1[i - 1] == perm2[j - 1])
                len = dp[j - 1] + 1;
            else
                len = max(dp[j], temp[j - 1]);
            temp[j] = len;
        }
        dp = temp;
        fill(temp.begin(), temp.end(), 0);
    }

    cout << dp[n];
}