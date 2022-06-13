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
    ListNode *middleNode(ListNode *head)
    {
        ListNode *first = head;
        ListNode *second = head;

        while (first != nullptr && first->next != nullptr)
        {
            first = first->next->next;
            second = second->next;
        }

        return second;
    }
};