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
    // method 1
    int getDecimalValue(ListNode* head) {
        ListNode* ptr = head;
        vector<int> st;
        while(ptr){
            st.push_back(ptr->val);
            ptr = ptr->next;
        }
        // convert to binary
        int result = 0;
        for(auto x: st) {
            result <<= 1;
            result += x;
        }
        return result;
    }
    // method 2 
    int getDecimalValue(ListNode* head) {
        ListNode* ptr = head;
        int result = 0;
        while(ptr){
            result = result << 1;
            result += ptr->val;
            ptr = ptr->next;
        }
        
        return result;
    }
};