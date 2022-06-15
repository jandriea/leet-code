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
    ListNode* middleNode(ListNode* head) {
        ListNode * ptrA = head;
        ListNode * ptrB = head;
        while (ptrB) {           
            if (ptrB->next == nullptr) {
                return ptrA;
            } else {
                ptrA = ptrA->next;
                ptrB = ptrB->next->next;
            }
        }
        
        return ptrA;
    }
};