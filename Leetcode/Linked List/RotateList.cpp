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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp, * prev;
        temp = head;
        prev = head;
        int nodes = 0;
        while (temp) {
            nodes++;
            temp = temp->next;
        }
        if (nodes == 0) {
            return head;
        }
        k = k % nodes;
        temp = head;
        while (k--) {
            while (temp->next != NULL) {
                prev = temp;
                temp = temp->next;
            }
            ListNode* head2;
            head2 = head;
            temp->next = head2;
            head = temp;
            prev->next = NULL;
        }
        return head;
    }
};