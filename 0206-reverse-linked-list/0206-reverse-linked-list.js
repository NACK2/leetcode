/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var reverseList = function(head) {
    let tmpPrev = null;
    let tmpNext = null;
    let curr = head;
    
    while (curr) {
        tmpNext = curr.next;
        curr.next = tmpPrev;
        tmpPrev = curr;
        curr = tmpNext;
    }
    
    return tmpPrev;
};