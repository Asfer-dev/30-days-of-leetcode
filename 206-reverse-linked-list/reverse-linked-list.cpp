/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL) return head;
        ListNode* p = head;
        while (p -> next != NULL) {
            p = p -> next;
        }
        reverse(head, head -> next);
        head -> next = NULL;
        return p;
    }

    void reverse(ListNode* &first, ListNode* &second) {
        if (second == NULL) {
            return;
        }
        reverse(first -> next, second -> next);
        second -> next = first;
    }
};