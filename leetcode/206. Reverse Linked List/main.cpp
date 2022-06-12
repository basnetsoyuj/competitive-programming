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
    ListNode *reverseList(ListNode *head)
    {
        // base case
        if (head == nullptr || head->next == nullptr)
            return head;

        // reverse the rest of linked list
        ListNode *rest_reversed = reverseList(head->next);

        // attach head to the end
        head->next->next = head;
        head->next = nullptr;

        return rest_reversed;
    }
};