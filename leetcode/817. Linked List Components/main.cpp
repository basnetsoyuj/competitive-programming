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
    int numComponents(ListNode *head, vector<int> &nums)
    {
        unordered_set<int> set(nums.begin(), nums.end());
        int connected_components(0);
        bool flag(false);

        while (head != nullptr)
        {
            if (set.find(head->val) == set.end())
                flag = false;
            else if (!flag)
            {
                connected_components++;
                flag = true;
            }
            head = head->next;
        }

        return connected_components;
    }
};