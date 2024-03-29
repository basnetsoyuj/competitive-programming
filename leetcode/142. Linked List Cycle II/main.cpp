#include <bits/stdc++.h>

using namespace std;

// Definition for singly-linked list.

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// O(n) time, O(1) space
// Floyd's cycle detection algorithm
class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *fast = head;
        ListNode *slow = head;

        while (fast && fast->next)
        {
            // move fast pointer by 2 & slow pointer by 1
            slow = slow->next;
            fast = fast->next->next;

            // if they meet, then there is a cycle
            if (fast == slow)
            {
                // reset fast to head and move both pointers by 1 in each step
                fast = head;

                // where they meet is the start of the cycle
                while (fast != slow)
                {
                    fast = fast->next;
                    slow = slow->next;
                }

                return fast;
            }
        }

        // if fast reaches NULL, then there is no cycle
        return NULL;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    // input array
    const int size = 4;
    int nums[] = {3, 2, 0, -4};
    int pos = 1;

    // const int size = 2;
    // int nums[] = {1, 2};
    // int pos = 0;

    // const int size = 1;
    // int nums[] = {1};
    // int pos = -1;

    ListNode **nodes = new ListNode *[size];
    for (int i = 0; i < size; i++)
        nodes[i] = new ListNode(nums[i]);

    for (int i = 0; i < size - 1; i++)
        nodes[i]->next = nodes[i + 1];

    if (pos != -1)
        nodes[size - 1]->next = nodes[pos];

    Solution solver;
    ListNode *answer = solver.detectCycle(nodes[0]);

    if (answer)
        for (int i = 0; i < size; i++)
        {
            if (answer == nodes[i])
            {
                cout << "tail connects to node index " << i;
                break;
            }
        }
    else
        cout << "no cycle";

    for (int i = 0; i < size; i++)
        delete nodes[i];

    delete[] nodes;

    return 0;
}