#include <bits/stdc++.h>

using namespace std;

/**
 * Definition for singly-linked list.
 **/

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        unordered_set<ListNode *> set;

        // keep inserting to set until its found again
        // when found again, return its pointer
        while (head != NULL)
        {
            set.insert(head);
            head = head->next;
            if (set.find(head) != set.end())
                return head;
        }

        return NULL;
    }
};

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