#include <bits/stdc++.h>
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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode temp(0);
        ListNode *sorted;
        sorted = &temp;
        while (l1 != NULL && l2 != NULL)
        {
            if (l1->val < l2->val)
            {
                sorted->next = l1;
                l1 = l1->next;
            }
            else
            {
                sorted->next = l2;
                l2 = l2->next;
            }
            sorted = sorted->next;
        }
        if (l1 != NULL)
            sorted->next = l1;
        else
            sorted->next = l2;
        return temp.next;
    }
};