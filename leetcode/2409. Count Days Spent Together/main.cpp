#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> month_days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob)
    {
        int alice_arrive = return_days(arriveAlice),
            alice_leave = return_days(leaveAlice),
            bob_arrive = return_days(arriveBob),
            bob_leave = return_days(leaveBob);

        if (alice_leave < bob_arrive || bob_leave < alice_arrive)
            return 0;
        else
            return min(alice_leave, bob_leave) - max(bob_arrive, alice_arrive) + 1;
    }

    int return_days(string s)
    {
        int month = stoi(s.substr(0, 2)) - 1;
        int days = 0;
        for (int i = 0; i < month; i++)
            days += month_days[i];
        return days + stoi(s.substr(3, 2));
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;

    cout << solver.countDaysTogether("08-15", "08-18", "08-16", "08-19") << endl;
}
