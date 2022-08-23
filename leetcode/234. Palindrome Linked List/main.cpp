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

// O(n) time, O(1) space
class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        ListNode *first = head;
        ListNode *second = head;

        // use fast and slow pointer to get to the mid ListNode pointer
        while (second->next != nullptr && second->next->next != nullptr)
        {
            first = first->next;
            second = second->next->next;
        }

        // reverse the last half
        second = reverse(first->next);

        // start comparing first half and reversed half
        while (second != nullptr && head != first->next)
        {
            if (head->val != second->val)
                return false;
            head = head->next;
            second = second->next;
        }

        return true;
    }

    // function to reverse a singly linked list
    ListNode *reverse(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode *rest_reversed = reverse(head->next);
        head->next->next = head;
        head->next = nullptr;

        return rest_reversed;
    }
};