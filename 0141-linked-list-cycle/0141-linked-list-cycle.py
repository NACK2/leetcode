# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        nodes = set(); # doing nodes = {} will create empty DICTIONARY instead
        
        while (head and head.next):
            if (head in nodes):
                return True
            nodes.add(head)
            head = head.next
            
        return False
        