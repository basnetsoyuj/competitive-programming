#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        ListNode *head = nullptr;
        int idx(-1);

        for (int i = 0; i < lists.size(); i++)
            if (lists[i] == nullptr)
                continue;
            else if (idx == -1 || lists[i]->val < lists[idx]->val)
                idx = i;

        if (idx != -1)
        {
            head = lists[idx];
            lists[idx] = lists[idx]->next;
            head->next = mergeKLists(lists);
        }

        return head;
    }
};