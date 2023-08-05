#include <bits/stdc++.h>

using namespace std;

// Definition for singly-linked list.
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
    ListNode *insertGreatestCommonDivisors(ListNode *head)
    {
        return helper(head, new ListNode(head->val));
    }

    ListNode *helper(ListNode *head, ListNode *carrying)
    {
        if (head == nullptr)
            return nullptr;

        carrying->val = gcd(carrying->val, head->val);

        if (head->next != nullptr)
        {
            ListNode *temp = head->next;
            head->next = new ListNode(head->val);
            head->next->next = helper(temp, head->next);
        }

        return head;
    }
};