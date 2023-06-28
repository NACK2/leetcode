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
    ListNode* removeElements(ListNode* head, int val) {
        if (!head) 
            return head;
        
        ListNode *curr = head;
        ListNode *toDel = NULL;
        while (curr->next) {
            if (curr->next->val == val) {
                toDel = curr->next;
                curr->next = toDel->next;
                delete toDel;
            }
            else {
                curr = curr->next;
            }
        }
        
        // if first val has to be deleted
        curr = head;
        if (curr->val == val) {
            head = head->next;
            delete curr;
        }
        
        return head;
    }
};