#include<bits/stdc++.h>
using namespace::std;
//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* size = head;
        int count = 0, l = (right - left) + 1;
        while (size) {
            count++;
            size = size->next;
        }
        if (count < 2 || (left == right)) {
            return head;
        }
        else if (left == 1 && right == count) {
            ListNode* prev = NULL;
            ListNode* curr = head;
            ListNode* temp = NULL;
            while (curr != NULL) {
                temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            }
            return prev;
        }
        else if (left == 1 && right != count) {
            ListNode* prev = NULL;
            ListNode* curr = head;
            ListNode* temp = NULL;
            while (right--) {
                temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            }
            head->next = temp;
            return prev;
        }
        else if (left != 1) {
            ListNode* prev = NULL;
            ListNode* curr = head;
            ListNode* temp = NULL;
            ListNode* k = head;
            ListNode* j = NULL;
            for (int i = 1;i < left - 1;i++) {
                k = k->next;
            }
            curr = k->next;
            j = k->next;
            while (l--) {
                temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            }
            k->next = prev;
            j->next = curr;
            return head;
        }
        return head;
    }
};