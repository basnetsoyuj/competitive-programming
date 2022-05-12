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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        // initialize carry over as 0
        int carry(0);

        // to assign first node as head
        bool is_initial(true);

        ListNode *head;
        ListNode *next_node = new ListNode;

        while (true)
        {
            // assign first node as head
            if (is_initial)
            {
                head = next_node;
                is_initial = false;
            }

            // get value from the next nodes and add them to result
            int result = 0;
            if (l1 != nullptr)
            {
                result += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr)
            {
                result += l2->val;
                l2 = l2->next;
            }

            // add the result with carry over
            carry += result;

            // assign the mod of carry over to the new node
            next_node->val = carry % 10;

            // set carry over as the integer division with 10
            carry /= 10;

            // if its not the last node
            if (l1 || l2)
                next_node->next = new ListNode;
            else
                break;

            next_node = next_node->next;
        };

        // if carryover is remaning, make a new node to add it
        if (carry)
            next_node->next = new ListNode(carry);

        return head;
    }
};

// -------------------------------------------------------------//
// -----------To Run Leetcode Solution in Any Machine-----------//
// -------------------------------------------------------------//
ListNode *setup_linked_list(int arr[], int size)
{
    ListNode *head;
    ListNode *nextNode = new ListNode;

    for (int i = 0; i < size; i++)
    {
        if (!i)
            head = nextNode;

        nextNode->val = arr[i];

        if (i == size - 1)
            break;

        nextNode->next = new ListNode;
        nextNode = nextNode->next;
    }

    return head;
}

void deleteLinkedNodes(ListNode *head)
{
    while (head != nullptr)
    {
        ListNode *next = head->next;
        delete head;
        head = next;
    }
}

ostream &operator<<(ostream &os, ListNode *head)
{
    os << "[";
    while (true)
    {
        os << head->val;
        head = head->next;
        if (head == nullptr)
            break;
        os << ",";
    }
    os << "]\n";
    return os;
}

int main()
{
    int l1[] = {2, 4, 3};
    int l2[] = {5, 6, 4};

    // int l1[] = {9, 9, 9, 9, 9, 9, 9};
    // int l2[] = {9, 9, 9, 9};

    ListNode *aHead = setup_linked_list(l1, sizeof(l1) / sizeof(int));
    ListNode *bHead = setup_linked_list(l2, sizeof(l2) / sizeof(int));

    Solution solver;
    ListNode *resultHead = solver.addTwoNumbers(aHead, bHead);

    cout << aHead << bHead << resultHead;

    deleteLinkedNodes(aHead);
    deleteLinkedNodes(bHead);
    deleteLinkedNodes(resultHead);
}