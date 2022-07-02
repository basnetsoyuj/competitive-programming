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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *p1, *p2;
        p1 = p2 = head;

        // use p2 as a delayed pointer
        for (int i = 0; i < n; i++)
            p2 = p2->next;

        // if it already reached the end, return p1->nexy
        if (p2 == nullptr)
            return p1->next;

        // keep shifting by 1 until p2->next is nullptr
        while (p2->next != nullptr)
        {
            p1 = p1->next;
            p2 = p2->next;
        }

        // delete the respective node
        p1->next = p1->next->next;

        // return head
        return head;
    }
};