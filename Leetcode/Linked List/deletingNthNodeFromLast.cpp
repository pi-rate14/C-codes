#include <bits/stdc++.h>
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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *temp, *prev;
        temp = head;
        int ctr = 1;
        while (temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
            ctr++;
        }
        if (ctr == n)
            return head->next;
        if (n == 1)
        {
            prev->next = NULL;
            return head;
        }
        int del = ctr - n;
        temp = head;
        while (del--)
        {
            temp = temp->next;
        }
        *temp = *temp->next;
        return head;
    }
};