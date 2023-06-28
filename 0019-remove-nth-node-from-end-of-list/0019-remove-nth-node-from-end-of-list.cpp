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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *curr = head;
        ListNode *toDel = NULL;
        int size = 0;
        int i=0;
        
        while (curr) { // get size
            ++size;
            curr = curr->next;
        }
        if (size - n == 0) { // for removing first node
            toDel = head;
            head = head->next;
            delete toDel;
            return head;
        }
        
        size = size - n - 1; // make size 1 before the node we have to remove
        curr = head;
        while (i < size) {
            curr = curr->next;
            ++i;
        }
        toDel = curr->next;
        curr->next = toDel->next;
        delete toDel;
        
        return head;
    }
};