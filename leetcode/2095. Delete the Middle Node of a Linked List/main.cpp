#include <bits/stdc++.h>

using namespace std;

//  Definition for singly-linked list.
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
    ListNode *deleteMiddle(ListNode *head)
    {
        ListNode *fast = head;
        ListNode *slow = head;

        // this is to offset the fast pointer by 1 so that we get the node before the middle node
        if (fast->next == nullptr)
            return nullptr;
        else
            fast = fast->next->next;

        while (fast != nullptr && fast->next != nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
        }

        slow->next = slow->next->next;

        return head;
    }
};