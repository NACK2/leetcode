# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        curr = head
        length = 0
        i = 0
        while curr:
            curr = curr.next
            length += 1
            
        curr = head
        while i < length//2:
            curr = curr.next
            i = i+1
        
        return curr
            