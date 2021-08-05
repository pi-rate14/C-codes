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
    ListNode *reverse(ListNode *head)
    {
        ListNode *current, *next, *prev;
        current = head;
        prev = NULL;
        while (current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }

    bool isPalindrome(ListNode *head)
    {
        int ctr = 0;
        ListNode *temp;
        temp = head;
        while (temp != NULL)
        {
            ctr++;
            temp = temp->next;
        }
        //checking for only one node
        if (ctr == 1)
            return true;
        if (ctr == 2)
        {
            if (head->val != head->next->val)
                return false;
            else
                return true;
        }
        temp = head;
        for (int i = 1; i <= ctr / 2; i++)
        {
            temp = temp->next;
        }
        ListNode *head2 = reverse(temp);
        for (int i = 1; i <= ctr / 2; i++)
        {
            if (head->val != head2->val)
                return false;
            head = head->next;
            head2 = head2->next;
        }
        return true;
    }
};