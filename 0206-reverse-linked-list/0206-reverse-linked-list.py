# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head: return head
        
        tmpPrev = None
        tmpNext = None
        curr = head
        
        while curr:
            tmpNext = curr.next
            curr.next = tmpPrev
            tmpPrev = curr
            curr = tmpNext
            
            
        curr = tmpPrev
        
        return curr