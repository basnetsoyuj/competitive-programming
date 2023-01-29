#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    // global var that keeps track of max good people possible
    int maxGood;

    int maximumGood(vector<vector<int>> &statements)
    {
        maxGood = 0;

        // vector that we treat everytime as truth
        vector<int> people(statements.size(), 2);

        helper(0, people, statements);
        return maxGood;
    }

    void helper(int person, vector<int> people, vector<vector<int>> &statements)
    {
        // base case, count number of good people
        if (person >= people.size())
        {
            int count = 0;
            for (int i : people)
                if (i == 1)
                    count++;

            // replace with maxGood if greater
            maxGood = max(maxGood, count);
            return;
        }

        // if person has already been established as bad, don't listen to him
        if (people[person] == 0)
        {
            // call recursively on next person
            helper(person + 1, people, statements);
            return;
        }

        // if person has not been established as being bad or good
        else if (people[person] == 2)
        {
            // try them as bad person
            people[person] = 0;

            // perform recursion
            helper(person + 1, people, statements);
        }

        // otherwise, if he is already established as good person, OR if not established, try him as good person
        people[person] = 1;

        // go to his statement
        for (int i = 0; i < people.size(); i++)
        {
            // establish who he says is good as good
            if (statements[person][i] == 1)
            {
                // check for contradiction (if he says someone is good and we have already established them as bad)
                if (people[i] == 0)
                    return;

                // make them good
                people[i] = 1;
            }

            // else if he says they are bad, make them bad
            else if (statements[person][i] == 0)
            {
                // check for contradiction (if he says someone is bad and we have already established them as good)
                if (people[i] == 1)
                    return;
                people[i] = 0;
            }
        }

        // perform same on next person using our truth vector
        helper(person + 1, people, statements);
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<vector<int>> statements = {{2, 1, 2}, {1, 2, 2}, {2, 0, 2}};
    Solution solver;
    cout << solver.maximumGood(statements) << endl;
}