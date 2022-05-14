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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (list1 == nullptr)
            return list2;
        if (list2 == nullptr)
            return list1;

        if (list1->val < list2->val)
        {
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }
        else
        {
            list2->next = mergeTwoLists(list2->next, list1);
            return list2;
        }
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
    int arr1[] = {1, 2, 4};
    int arr2[] = {1, 3, 4};

    ListNode *list1 = setup_linked_list(arr1, sizeof(arr1) / sizeof(int));
    ListNode *list2 = setup_linked_list(arr2, sizeof(arr2) / sizeof(int));

    cout << list1 << list2;

    Solution solver;
    ListNode *list3 = solver.mergeTwoLists(list1, list2);
    cout << list3;

    deleteLinkedNodes(list3);
}