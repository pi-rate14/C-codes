#include <bits/stdc++.h>
using namespace ::std;

// * Definition for singly-linked list.
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
        ListNode *ptr1, *ptr2;
        ptr1 = l1;
        ptr2 = l2;
        ListNode *res = new ListNode(0);
        ListNode *it = res;
        int carry = 0;
        while (l1 != NULL or l2 != NULL)
        {
            int sum = carry;
            if (l1 != NULL)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            res->next = new ListNode(sum % 10);
            res = res->next;
            carry = sum / 10;
            if (carry > 0)
            {
                res->next = new ListNode(carry);
            }
        }
        return it->next;
    }
};