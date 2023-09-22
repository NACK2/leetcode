# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        fast = head
        slow = head
        
        while (head and head.next):
            head = head.next.next
            slow = slow.next
            if (head == slow):
                return True
            
        return False
        