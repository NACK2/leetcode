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
        ListNode *curr = head;
        ListNode *tmp = NULL;
        ListNode *prev = NULL;
        
        while (curr) {
            tmp = curr->next; // store next ptr
            curr->next = prev; // reverse 
            prev = curr; // move ptr up
            curr = tmp;
        }
        head = prev;
        return head;
    }
};