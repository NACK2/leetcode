/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function(l1, l2) {
    let node = new ListNode();
    let curr = node;
    
    let carry = 0;
    let tmp = 0;
    let result = 0;
    
    while (l1 || l2 || carry) {
        tmp = carry;
        if (l1) {
            tmp += l1.val;
            l1 = l1.next;
        }
        if (l2) {
            tmp += l2.val;
            l2 = l2.next;
        }
        
        carry = Math.floor(tmp / 10); // tens digit
        result = tmp % 10; // ones digit
        
        curr.next = new ListNode(result);
        curr = curr.next;
    }
    
    return node.next;
};