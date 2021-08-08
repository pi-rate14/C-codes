#include<bits/stdc++.h>
using namespace::std;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* List1 = new ListNode(-1);
        ListNode* List2 = new ListNode(-1);
        ListNode* l1 = List1;
        ListNode* l2 = List2;

        ListNode* temp = head;
        while (temp) {
            if (temp->val < x) {
                l1->next = temp;
                l1 = l1->next;
                temp = temp->next;
            }
            else {
                l2->next = temp;
                l2 = l2->next;
                temp = temp->next;
            }
        }
        l1->next = List2->next;
        l2->next = NULL;
        return List1->next;

    }
};