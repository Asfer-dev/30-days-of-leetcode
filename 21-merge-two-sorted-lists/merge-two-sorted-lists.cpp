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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;
        ListNode* list3 = new ListNode();
        ListNode* curr = list3;
        while (list1 != NULL && list2 != NULL) {
            if (list1 -> val < list2 -> val) {
                curr -> val = list1 -> val;
                list1 = list1 -> next;
            } else if (list1 -> val > list2 -> val) {
                curr -> val = list2 -> val;
                list2 = list2 -> next;
            } else {
                curr -> val = list1 -> val;
                list1 = list1 -> next;
                curr -> next = new ListNode();
                curr = curr -> next;
                curr -> val = list2 -> val;
                list2 = list2 -> next;
            }
            if (list1 == NULL || list2 == NULL)
                break;
            curr -> next = new ListNode();
            curr = curr -> next;
        }
        while (list1 != NULL) {
            curr -> next = new ListNode();
            curr = curr -> next;
            curr -> val = list1 -> val;
            list1 = list1 -> next;
        }
        while (list2 != NULL) {
            curr -> next = new ListNode();
            curr = curr -> next;
            curr -> val = list2 -> val;
            list2 = list2 -> next;
        }
        return list3;
    }
};