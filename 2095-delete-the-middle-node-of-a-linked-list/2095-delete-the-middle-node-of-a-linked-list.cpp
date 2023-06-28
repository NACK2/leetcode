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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *curr = head;
        if (curr->next == NULL) {
            head = head->next;
            delete curr;
            return head;
        }
        
        ListNode *toDel = NULL;
        int n=0;
        int i=0;
        
        while (curr) {
            curr = curr->next;
            ++n;
        }
        n /= 2;
        
        curr = head;
        while (i < n-1) { // stopping 1 before the middle node
            ++i;
            curr = curr->next;
        } 
        toDel = curr->next;
        curr->next = toDel->next;
        delete toDel;
        
        return head;
    }
};