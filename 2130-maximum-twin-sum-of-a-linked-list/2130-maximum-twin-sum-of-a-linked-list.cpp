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
    int pairSum(ListNode* head) {
        ListNode *curr = head;
        ListNode *next = NULL;
        ListNode *prev = NULL;
        int n = 0;
        int i = 0;
        vector<int> counts;
        
        while (curr) { // get size
            curr = curr->next;
            ++n;
        }
        
        curr = head;
        while (i < n/2) { // add the first n/2 elements into vector
            counts.push_back(curr->val);
            curr = curr->next;
            ++i;
        }
        
        curr = head;
        while (curr) { // reverse list
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        curr = prev; // prev is the first node of reverse list
        i = 0;
        while (i < n/2) { // add the back n/2 elements into vector
            counts[i] += curr->val;
            curr = curr->next;
            ++i;
        }
        
        return *max_element(counts.begin(), counts.end());
    }
};